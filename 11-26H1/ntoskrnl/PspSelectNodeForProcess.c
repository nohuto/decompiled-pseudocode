/*
 * XREFs of PspSelectNodeForProcess @ 0x1407F8950
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeQueryCpuPartitionAffinityEx @ 0x14052DA38 (KeQueryCpuPartitionAffinityEx.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     KeIsSystemCpuPartitionRestricted @ 0x1405F6678 (KeIsSystemCpuPartitionRestricted.c)
 *     PspSelectNodeForProcessNoRestrictions @ 0x1407F89BC (PspSelectNodeForProcessNoRestrictions.c)
 */

__int64 __fastcall PspSelectNodeForProcess(__int64 a1, __int64 a2, struct _KAFFINITY_EX *a3)
{
  struct _KAFFINITY_EX ***v6; // r9

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  if ( !KeIsSystemCpuPartitionRestricted() )
    return PspSelectNodeForProcessNoRestrictions();
  if ( !v6 )
    v6 = (struct _KAFFINITY_EX ***)PspSystemCpuPartition;
  KeQueryCpuPartitionAffinityEx(*v6, a3);
  return KeSelectNodeForAffinityAndPartition((__int64)a3, a1);
}
