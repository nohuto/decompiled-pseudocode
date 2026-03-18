/*
 * XREFs of ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x14004CFC0
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmUnmapLogicalAddressRange(struct SYSMM_ADAPTER *a1, __int64 a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  return ((__int64 (__fastcall *)(struct SYSMM_ADAPTER *, __int64, struct _IOMMU_DMA_DOMAIN *))DxgCoreInterface[99])(
           a1,
           a2,
           a3);
}
