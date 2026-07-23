/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x1406E6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( LOBYTE(WheapPfaLock.Timer.Header.WaitListHead.Blink) )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
