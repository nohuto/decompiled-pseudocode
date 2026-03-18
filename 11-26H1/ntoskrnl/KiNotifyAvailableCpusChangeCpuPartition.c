/*
 * XREFs of KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E5B9C
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BF54BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

void __fastcall KiNotifyAvailableCpusChangeCpuPartition(__int64 a1)
{
  KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 40));
}
