/*
 * XREFs of IvtIommuFaultLogDeferredRoutine @ 0x1405A74E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall IvtIommuFaultLogDeferredRoutine(__int64 a1, __int64 a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 432), DelayedWorkQueue);
}
