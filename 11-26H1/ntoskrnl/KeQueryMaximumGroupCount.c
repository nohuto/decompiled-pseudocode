/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1404BB300
 * Callers:
 *     KiTraceCpuPartitionRundown @ 0x1407BB200 (KiTraceCpuPartitionRundown.c)
 *     NtQueryInformationCpuPartition @ 0x1407F1ED0 (NtQueryInformationCpuPartition.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x140846BD0 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140BF351C (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
