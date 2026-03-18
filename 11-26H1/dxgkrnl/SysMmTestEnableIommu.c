/*
 * XREFs of SysMmTestEnableIommu @ 0x14009D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SysMmTestEnableIommu(__int64 a1)
{
  return SysMmEnableIommu(a1, 64LL);
}
