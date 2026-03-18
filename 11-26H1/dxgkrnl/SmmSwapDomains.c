/*
 * XREFs of SmmSwapDomains @ 0x1402859E4
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     SmmAttachDomainToAllDevices @ 0x140284C0C (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x140284E08 (SmmDetachDomainFromAllDevices.c)
 */

__int64 __fastcall SmmSwapDomains(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  int v6; // edi
  int v7; // eax

  if ( *(_QWORD *)(a1 + 336) )
    (*(void (**)(void))(a1 + 304))();
  if ( a3 )
    SmmDetachDomainFromAllDevices(a1);
  v6 = SmmAttachDomainToAllDevices(a1, a2);
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      v7 = SmmAttachDomainToAllDevices(a1, a3);
      v6 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry5(0LL, 484LL, 10LL, a1, a2, v7);
        WdLogGlobalForLineNumber = 2243;
      }
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 112), v6);
    WdLogGlobalForLineNumber = 2250;
  }
  if ( *(_QWORD *)(a1 + 336) )
    (*(void (__fastcall **)(__int64))(a1 + 312))(a1);
  return (unsigned int)v6;
}
