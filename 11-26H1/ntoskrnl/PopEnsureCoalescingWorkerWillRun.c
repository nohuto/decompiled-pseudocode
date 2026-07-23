/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1404E94F0
 * Callers:
 *     PopCoalescingNotify @ 0x1407D2370 (PopCoalescingNotify.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
