/*
 * XREFs of ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x14004C59C
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmMapLogicalAddressRange(struct SYSMM_ADAPTER *a1, __int64 a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  return ((__int64 (__fastcall *)(struct SYSMM_ADAPTER *, __int64, struct _IOMMU_DMA_DOMAIN *))DxgCoreInterface[98])(
           a1,
           a2,
           a3);
}
