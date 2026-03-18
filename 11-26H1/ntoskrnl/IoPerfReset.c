/*
 * XREFs of IoPerfReset @ 0x1405CBD6C
 * Callers:
 *     IoUnregisterIoTracking @ 0x140797CB0 (IoUnregisterIoTracking.c)
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&IopSessionNotificationLock.SuspendEvent.Header.WaitListHead, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_140E65F6C )
    IopPerfStatus &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_140E65F70 )
    IopPerfStatus &= ~2u;
  if ( !IopPerfStatus )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
