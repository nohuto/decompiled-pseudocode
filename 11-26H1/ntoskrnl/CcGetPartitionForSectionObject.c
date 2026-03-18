/*
 * XREFs of CcGetPartitionForSectionObject @ 0x14039D1F0
 * Callers:
 *     CcPurgeCacheSection @ 0x14039B300 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14046D008 (CcNotifyOfMappedWriteComplete.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14039D20C (MmGetControlAreaPartition.c)
 */

__int64 CcGetPartitionForSectionObject()
{
  return *(_QWORD *)(MmGetControlAreaPartition() + 8);
}
