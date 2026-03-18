/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x1406E27E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( BYTE5(WheapPfaLock.SwapListEntry.Next) )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
