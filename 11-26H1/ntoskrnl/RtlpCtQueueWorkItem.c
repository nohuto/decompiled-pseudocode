/*
 * XREFs of RtlpCtQueueWorkItem @ 0x14080ECE0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
