/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508
 * Callers:
 *     SmmClosePhysicalObject @ 0x14003F43C (SmmClosePhysicalObject.c)
 *     SmmMapNonPagedObjectToIommu @ 0x14004099C (SmmMapNonPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140040B5C (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmSetAdlBaseAddress @ 0x14004139C (SmmSetAdlBaseAddress.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x14006963C (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmMapPagedObjectToIommu @ 0x14006AEE8 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x14006BC64 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmMapExistingMemoryToDomain @ 0x14009C300 (SmmMapExistingMemoryToDomain.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x14009C46C (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x14009D188 (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x14009D240 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x140287180 (-SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1403B0F90 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  if ( a1 )
    return *((_QWORD *)a1 + 4) << 12;
  else
    return 0LL;
}
