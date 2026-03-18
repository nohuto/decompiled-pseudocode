/*
 * XREFs of PfpPartitionFromParent @ 0x1404A2E00
 * Callers:
 *     PfDeletePartition @ 0x1407C6F10 (PfDeletePartition.c)
 *     PfpPartitionFindOrCreate @ 0x1407C70D8 (PfpPartitionFindOrCreate.c)
 *     MmFreeSystemCacheReserveView @ 0x14086AA70 (MmFreeSystemCacheReserveView.c)
 *     PfProcessCreateNotification @ 0x1409E9D20 (PfProcessCreateNotification.c)
 *     PfpPartitionFindByHandle @ 0x140A53E50 (PfpPartitionFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionFromParent(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
