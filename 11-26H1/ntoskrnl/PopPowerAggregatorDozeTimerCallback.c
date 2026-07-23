/*
 * XREFs of PopPowerAggregatorDozeTimerCallback @ 0x14060E960
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorDozeTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&unk_140F0D9F8 + 200 * a2), DelayedWorkQueue);
}
