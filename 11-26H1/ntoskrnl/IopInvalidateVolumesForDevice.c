/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x140A34D8C
 * Callers:
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026B150 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     IoCreateStreamFileObjectLite @ 0x140A36420 (IoCreateStreamFileObjectLite.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // r14
  NTSTATUS v2; // edi
  PDEVICE_OBJECT i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PFILE_OBJECT StreamFileObjectLite; // r12
  ULONG DeviceType; // eax
  _QWORD **p_Thread; // r14
  _QWORD *j; // r15
  struct _DEVICE_OBJECT *v9; // r13
  struct _DEVICE_OBJECT *k; // rax
  PIRP v11; // rax
  int Status; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF
  HANDLE InputBuffer; // [rsp+D8h] [rbp+10h] BYREF
  struct _KTHREAD *v20; // [rsp+E0h] [rbp+18h]
  PRKEVENT p_DeviceLock; // [rsp+E8h] [rbp+20h]

  v1 = DeviceObject;
  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v20 = (struct _KTHREAD *)i;
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
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          p_Thread = (_QWORD **)&IopSessionNotificationLock.WaitBlock[2].Thread;
        }
        else
        {
          p_Thread = (_QWORD **)&IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink;
          if ( DeviceType != 2 )
            p_Thread = (_QWORD **)&IopSessionNotificationLock.WaitBlock[1].SparePtr;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v2 = 0;
        for ( j = *p_Thread; j != p_Thread && (_QWORD **)*j != p_Thread; j = (_QWORD *)*j )
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
        ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
        KeLeaveCriticalRegionThread((__int64)v20, v13, v14);
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
