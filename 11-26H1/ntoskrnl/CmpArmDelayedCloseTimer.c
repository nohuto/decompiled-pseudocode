/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x140381748
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange((_DWORD *)&WheapPfaLock.WaitBlockList + 1, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpKeyLockTracker.QuantumTarget, DelayedWorkQueue);
}
