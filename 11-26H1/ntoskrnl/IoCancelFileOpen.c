/*
 * XREFs of IoCancelFileOpen @ 0x140903830
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14026C5E0 (IopAllocateIrpMustSucceed.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IopCloseFileObjectExtension @ 0x1403DBC40 (IopCloseFileObjectExtension.c)
 *     IopResetEvent @ 0x140455C40 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PoCallDriver @ 0x1404D4A70 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v2; // zf
  __int64 v5; // rdx
  __int64 v6; // rdx
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  v2 = (FileObject->Flags & 0x40000) == 0;
  memset(&Object, 0, sizeof(Object));
  if ( !v2 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  IopResetEvent((__int64)FileObject, v5);
  LOBYTE(v6) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v6);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Object;
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed, v9);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed, v10);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  IopCloseFileObjectExtension((__int64)FileObject);
}
