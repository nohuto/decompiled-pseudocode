/*
 * XREFs of IopLoadFileSystemDriver @ 0x140795094
 * Callers:
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026B150 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDevice = BugCheckParameter2->AttachedDevice;
  v3 = BugCheckParameter2;
  while ( AttachedDevice )
  {
    v3 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v3, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v3, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  LOBYTE(v6) = 1;
  LOBYTE(v5) = 1;
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, v5, v6);
}
