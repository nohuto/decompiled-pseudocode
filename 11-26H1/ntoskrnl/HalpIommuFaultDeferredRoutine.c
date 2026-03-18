/*
 * XREFs of HalpIommuFaultDeferredRoutine @ 0x1405A0000
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall HalpIommuFaultDeferredRoutine(__int64 a1, __int64 a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 232), DelayedWorkQueue);
}
