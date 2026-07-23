/*
 * XREFs of PfpPartitionFromParent @ 0x14049C820
 * Callers:
 *     PfDeletePartition @ 0x1407C9F70 (PfDeletePartition.c)
 *     PfpPartitionFindOrCreate @ 0x1407CA138 (PfpPartitionFindOrCreate.c)
 *     MmFreeSystemCacheReserveView @ 0x140870E50 (MmFreeSystemCacheReserveView.c)
 *     PfProcessCreateNotification @ 0x1409D1270 (PfProcessCreateNotification.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionFromParent(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
