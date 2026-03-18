/*
 * XREFs of ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285E7C
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x140284C0C (SmmAttachDomainToAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmIommuAttach(
        struct _DEVICE_OBJECT *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        struct _IOMMU_DMA_DEVICE *a3)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, struct _IOMMU_DMA_DEVICE *))qword_1401695F0)(a2, a3);
  v6 = v5;
  if ( v5 == -1070268314 )
  {
    WdLogSingleEntry2(4LL, a1, a2);
    v6 = 0;
    WdLogGlobalForLineNumber = 3351;
  }
  else if ( v5 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, a1);
    WdLogGlobalForLineNumber = 3361;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to attach IOMMU_DMA_DOMAIN 0x%.16I64x to DEVICE_OBJECT 0x%.16I64x",
      (__int64)a2,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
  }
  return v6;
}
