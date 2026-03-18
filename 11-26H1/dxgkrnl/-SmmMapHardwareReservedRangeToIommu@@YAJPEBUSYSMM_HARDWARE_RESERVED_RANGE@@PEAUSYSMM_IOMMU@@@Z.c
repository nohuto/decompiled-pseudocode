/*
 * XREFs of ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x14009C46C
 * Callers:
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 */

__int64 __fastcall SmmMapHardwareReservedRangeToIommu(const struct SYSMM_LOGICAL_BLOCK **a1, struct SYSMM_IOMMU *a2)
{
  __int64 LogicalAddress; // rax
  __int64 v3; // r9
  __int64 v4; // r10

  LogicalAddress = SmmGetLogicalAddress(a1[2]);
  return SmmMapContiguousRangeToIommu(v4, LogicalAddress, *(__int64 *)v3 >> 12, *(_QWORD *)(v3 + 8), 0, 1, v3);
}
