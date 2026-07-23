/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x14060EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140F0D920, DelayedWorkQueue);
}
