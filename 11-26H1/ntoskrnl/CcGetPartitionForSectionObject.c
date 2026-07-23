/*
 * XREFs of CcGetPartitionForSectionObject @ 0x14039EF50
 * Callers:
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14039EF6C (MmGetControlAreaPartition.c)
 */

__int64 CcGetPartitionForSectionObject()
{
  return *(_QWORD *)(MmGetControlAreaPartition() + 8);
}
