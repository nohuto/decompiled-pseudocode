/*
 * XREFs of KiNotifyAvailableCpusChangeProcess @ 0x1404D9868
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
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
