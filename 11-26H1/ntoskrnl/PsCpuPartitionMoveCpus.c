/*
 * XREFs of PsCpuPartitionMoveCpus @ 0x1407F81A0
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 */

__int64 __fastcall PsCpuPartitionMoveCpus(__int64 *a1, _WORD ***a2, struct _KAFFINITY_EX *a3)
{
  return KeCpuPartitionMoveCpus(*a1, *a2, a3, 0);
}
