/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140494650
 * Callers:
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x140662DB0 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
}
