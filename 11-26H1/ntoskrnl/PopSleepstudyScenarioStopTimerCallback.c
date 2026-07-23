/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1404FA620
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140F0EFA8, DelayedWorkQueue);
}
