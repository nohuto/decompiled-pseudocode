/*
 * XREFs of HsaIommuEventLogDeferredRoutine @ 0x1405AC7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall HsaIommuEventLogDeferredRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 10, DelayedWorkQueue);
}
