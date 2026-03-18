/*
 * XREFs of ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x140286F24
 * Callers:
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401F64DC (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x140371F38 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmDestroyPasidDevice(struct _IOMMU_DMA_PASID_DEVICE *a1)
{
  return ((__int64 (__fastcall *)(struct _IOMMU_DMA_PASID_DEVICE *))qword_140169698)(a1);
}
