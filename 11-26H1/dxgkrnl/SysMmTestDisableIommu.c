/*
 * XREFs of SysMmTestDisableIommu @ 0x14009D690
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140193E3C (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SysMmTestDisableIommu(__int64 a1)
{
  return SysMmDisableIommu(a1, 64LL);
}
