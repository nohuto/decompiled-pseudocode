/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x14091958C
 * Callers:
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     IoCreateStreamFileObjectLite @ 0x14091AB80 (IoCreateStreamFileObjectLite.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // r14
  NTSTATUS v2; // edi
  PDEVICE_OBJECT i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PFILE_OBJECT StreamFileObjectLite; // r12
  ULONG DeviceType; // eax
  __int64 *v7; // r14
  __int64 *j; // r15
  struct _DEVICE_OBJECT *v9; // r13
  struct _DEVICE_OBJECT *k; // rax
  PIRP v11; // rax
  int Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF
  HANDLE InputBuffer; // [rsp+D8h] [rbp+10h] BYREF
  struct _KTHREAD *v18; // [rsp+E0h] [rbp+18h]
  PRKEVENT p_DeviceLock; // [rsp+E8h] [rbp+20h]

  v1 = DeviceObject;
  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v18 = (struct _KTHREAD *)i;
    if ( !i )
      break;
    if ( i->Vpb )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_DeviceLock = &i->DeviceLock;
      KeWaitForSingleObject(&i->DeviceLock, Executive, 0, 0, 0LL);
      InputBuffer = 0LL;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, i);
      StreamFileObjectLite->Vpb = i->Vpb;
      v2 = ObOpenObjectByPointer(StreamFileObjectLite, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v2 >= 0 )
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          v7 = &IopDiskFileSystemQueueHead;
        }
        else
        {
          v7 = &IopCdRomFileSystemQueueHead;
          if ( DeviceType != 2 )
            v7 = &IopTapeFileSystemQueueHead;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v2 = 0;
        for ( j = (__int64 *)*v7; j != v7 && (__int64 *)*j != v7; j = (__int64 *)*j )
        {
          v9 = (struct _DEVICE_OBJECT *)(j - 10);
          for ( k = (struct _DEVICE_OBJECT *)*(j - 7); k; k = k->AttachedDevice )
            v9 = k;
          KeResetEvent(&Event);
          v11 = IoBuildDeviceIoControlRequest(0x90054u, v9, &InputBuffer, 8u, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( !v11 )
          {
            v2 = -1073741670;
            break;
          }
          *(_WORD *)&v11->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 13;
          Status = IofCallDriver(v9, v11);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          else
          {
            IoStatusBlock.Status = Status;
            IoStatusBlock.Information = 0LL;
          }
          if ( Status == -1073741808 || Status == -1073741822 )
            Status = 0;
          if ( v2 >= 0 && Status < 0 )
            v2 = Status;
        }
        ExReleaseResourceLite(&IopDatabaseResource);
        KeLeaveCriticalRegionThread((__int64)v18);
        if ( StreamFileObjectLite )
        {
          ObfDereferenceObject(StreamFileObjectLite);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
      }
      KeSetEvent(p_DeviceLock, 0, 0);
      KeLeaveCriticalRegion();
      v1 = DeviceObject;
    }
  }
  return (unsigned int)v2;
}
