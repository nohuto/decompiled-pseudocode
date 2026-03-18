/*
 * XREFs of KiNotifyAvailableCpusChangeProcess @ 0x1404E0188
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1403F7154 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

__int64 __fastcall KiNotifyAvailableCpusChangeProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 448) + 40LL) != *(_QWORD *)(a1 + 448) + 40LL )
    return KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(a1 + 448) + 56LL));
  result = *(unsigned int *)(a1 + 1532);
  if ( (result & 0x1000) == 0 )
  {
    result = *(unsigned int *)(a1 + 1532);
    if ( (result & 1) == 0 )
      return KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(a1 + 448) + 56LL));
  }
  return result;
}
