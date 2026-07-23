/*
 * XREFs of KeQuerySystemCpuPartitionAffinity @ 0x1405F6850
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryCpuPartitionAffinity @ 0x1405F66F8 (KeQueryCpuPartitionAffinity.c)
 */

__int64 __fastcall KeQuerySystemCpuPartitionAffinity(void *a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  return KeQueryCpuPartitionAffinity((struct _KAFFINITY_EX **)KiSystemCpuPartition, a1, a2, a3);
}
