/*
 * XREFs of IoPerfInit @ 0x14050857C
 * Callers:
 *     IoRegisterIoTracking @ 0x14079A670 (IoRegisterIoTracking.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1405CD450 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  _BOOL8 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.Header.WaitListHead, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_140E66214;
  if ( (a1 & 2) != 0 )
    ++dword_140E66218;
  if ( v2 )
  {
    LOBYTE(v2) = 1;
    IopUpdateFunctionPointers(2LL, 1LL, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
