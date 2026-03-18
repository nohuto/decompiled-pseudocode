/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1404EFF10
 * Callers:
 *     PopCoalescingNotify @ 0x1407CF2D0 (PopCoalescingNotify.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (stru_140F11D08.AbWaitEntryCount & 8) == 0 )
  {
    stru_140F11D08.AbWaitEntryCount |= 8u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F11D08.ThreadListEntry, DelayedWorkQueue);
  }
}
