/*
 * XREFs of ?SysMmIommuDetach@@YAXPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x140285F4C
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x140284C0C (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x140284E08 (SmmDetachDomainFromAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall SysMmIommuDetach(struct _IOMMU_DMA_DEVICE *a1)
{
  if ( (int)((__int64 (__fastcall *)(struct _IOMMU_DMA_DEVICE *))qword_1401695F8)(a1) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3398;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 3398LL, 0LL, 0LL, 0LL, 0LL);
  }
}
