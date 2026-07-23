/*
 * XREFs of KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E850C
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BFB4BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

void __fastcall KiNotifyAvailableCpusChangeCpuPartition(__int64 a1)
{
  KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 40));
}
