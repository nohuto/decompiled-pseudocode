/*
 * XREFs of IoPerfReset @ 0x1405CE5DC
 * Callers:
 *     IoUnregisterIoTracking @ 0x14079A7E0 (IoUnregisterIoTracking.c)
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1405CD450 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.Header.WaitListHead, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_140E66214 )
    IopPerfStatus &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_140E66218 )
    IopPerfStatus &= ~2u;
  if ( !IopPerfStatus )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
