/*
 * XREFs of SmmDetachDomainFromAllDevices @ 0x140284E08
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140284D58 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmSwapDomains @ 0x1402859E4 (SmmSwapDomains.c)
 * Callees:
 *     ?SysMmIommuDetach@@YAXPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285F4C (-SysMmIommuDetach@@YAXPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

void __fastcall SmmDetachDomainFromAllDevices(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rbp
  struct _IOMMU_DMA_DEVICE *v4; // rcx
  struct _IOMMU_DMA_DEVICE *v5; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 360);
    v4 = *(struct _IOMMU_DMA_DEVICE **)(v3 + 48 * i + 24);
    if ( v4 )
    {
      SysMmIommuDetach(v4);
      v5 = *(struct _IOMMU_DMA_DEVICE **)(v3 + 48 * i + 32);
      if ( v5 )
        SysMmIommuDetach(v5);
    }
  }
}
