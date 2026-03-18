/*
 * XREFs of ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x1402873D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmUnmapLogicalAddressRange(
        struct SYSMM_ADAPTER *a1,
        unsigned int a2,
        struct _IOMMU_DMA_DOMAIN *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct _IOMMU_DMA_DOMAIN *v5; // r10

  v5 = a3;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 45) + 48LL * a2 + 16) & 0x10) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1258;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"The global adapter domain can be used only with GpuVaIommuGlobalRequired",
        1258LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v5 = (struct _IOMMU_DMA_DOMAIN *)*((_QWORD *)a1 + 14);
  }
  return ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, __int64, unsigned __int64))qword_140169620)(
           v5,
           a4,
           a5 >> 12);
}
