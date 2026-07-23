/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x1403834F8
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange((volatile __int32 *)&WheapPfaLock.Timer.Header.WaitListHead, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpKeyLockTracker.QuantumTarget, DelayedWorkQueue);
}
