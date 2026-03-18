/*
 * XREFs of IopDeleteFile @ 0x140A1ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14026C5E0 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     IoGetFileObjectFilterContext @ 0x140448080 (IoGetFileObjectFilterContext.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14044AAD0 (IopDecrementDeviceObjectRefCount.c)
 *     IoGetAttachedDevice @ 0x14044F180 (IoGetAttachedDevice.c)
 *     ExCleanupAutoExpandPushLock @ 0x1404638C0 (ExCleanupAutoExpandPushLock.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IoChangeFileObjectFilterContext @ 0x1404748E0 (IoChangeFileObjectFilterContext.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG_PTR v14; // rcx
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID v18; // rdi
  _BYTE *v19; // rdi
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v4 = 0LL;
  v20 = 0LL;
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
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v20;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9);
    v11 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v11 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        LOBYTE(v10) = 1;
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), v10);
        v4 = *(_QWORD *)(v11 + 8);
        if ( v4 )
        {
          LOBYTE(v12) = 1;
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v11 + 8), v12, v13);
        }
      }
    }
    v14 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v14 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v14, 1);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v16);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v17 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x80uLL, *(_QWORD *)(v17 + 16));
      ObfDereferenceObject(*(PVOID *)v17);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    {
      P = 0LL;
      IoGetFileObjectFilterContext(BugCheckParameter1, &P, 0);
      v18 = P;
      if ( P )
      {
        IoChangeFileObjectFilterContext(BugCheckParameter1, (signed __int64)P, 0);
        ExCleanupAutoExpandPushLock((__int64)v18);
        ExFreePoolWithTag(v18, 0);
      }
    }
    v19 = (_BYTE *)(BugCheckParameter1 - 21);
    if ( !v15 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0LL, (unsigned __int8)~*v19 >> 7);
    if ( v4 && v11 )
      IopDecrementDeviceObjectRef(v4, 0LL, (unsigned __int8)~*v19 >> 7);
  }
  IopDeleteFileObjectExtension(BugCheckParameter1, a2);
}
