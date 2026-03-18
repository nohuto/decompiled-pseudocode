/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x140500E30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140F0EBA8, DelayedWorkQueue);
}
