/*
 * XREFs of IopDeleteFile @ 0x140A282F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14026BB50 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     IoGetFileObjectFilterContext @ 0x140440B70 (IoGetFileObjectFilterContext.c)
 *     IopDecrementDeviceObjectRefCount @ 0x140442C00 (IopDecrementDeviceObjectRefCount.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     ExCleanupAutoExpandPushLock @ 0x14045C880 (ExCleanupAutoExpandPushLock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoChangeFileObjectFilterContext @ 0x14046E060 (IoChangeFileObjectFilterContext.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  ULONG_PTR v4; // rbp
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // rsi
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG_PTR v16; // rcx
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  PVOID v21; // rdi
  _BYTE *v22; // rdi
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v4 = 0LL;
  v23 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v3);
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
    v6 = AttachedDevice;
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x240000) == 0 )
      IopCloseFile(0LL, BugCheckParameter1, 1LL, 1LL, 0LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v23;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9);
    v13 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v13 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        LOBYTE(v10) = 1;
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), v10, v11, v12);
        v4 = *(_QWORD *)(v13 + 8);
        if ( v4 )
        {
          LOBYTE(v14) = 1;
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v13 + 8), v14, v15);
        }
      }
    }
    v16 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v16 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v16, 1);
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v18);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v20 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v20 )
    {
      if ( *(_QWORD *)(v20 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x80uLL, *(_QWORD *)(v20 + 16));
      ObfDereferenceObject(*(PVOID *)v20);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    {
      P = 0LL;
      IoGetFileObjectFilterContext(BugCheckParameter1, &P, 0);
      v21 = P;
      if ( P )
      {
        IoChangeFileObjectFilterContext(BugCheckParameter1, (signed __int64)P, 0);
        ExCleanupAutoExpandPushLock((__int64)v21);
        ExFreePoolWithTag(v21, 0);
      }
    }
    v22 = (_BYTE *)(BugCheckParameter1 - 21);
    if ( !v17 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0LL, (unsigned __int8)~*v22 >> 7, v19);
    if ( v4 && v13 )
      IopDecrementDeviceObjectRef(v4, 0LL, (unsigned __int8)~*v22 >> 7, v19);
  }
  IopDeleteFileObjectExtension(BugCheckParameter1, a2);
}
