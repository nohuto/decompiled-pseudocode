/*
 * XREFs of PopPowerAggregatorDozeTimerCallback @ 0x14060BA40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorDozeTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopPowerAggregatorLock.WaitBlockFill10[200 * a2 + 8], DelayedWorkQueue);
}
