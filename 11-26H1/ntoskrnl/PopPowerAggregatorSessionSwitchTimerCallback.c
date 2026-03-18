/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x14060BB90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopPowerAggregatorLock.WaitRegister, DelayedWorkQueue);
}
