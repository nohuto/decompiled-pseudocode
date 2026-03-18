/*
 * XREFs of ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402853C8
 * Callers:
 *     SmmInitializeDmaDevices @ 0x140286178 (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuDeleteDevice(struct _IOMMU_DMA_DEVICE *a1)
{
  return ((__int64 (__fastcall *)(struct _IOMMU_DMA_DEVICE *))qword_140169688)(a1);
}
