/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1404B4AE0
 * Callers:
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 *     NtQueryInformationCpuPartition @ 0x1407F7A30 (NtQueryInformationCpuPartition.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x14084CE30 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140BF951C (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
