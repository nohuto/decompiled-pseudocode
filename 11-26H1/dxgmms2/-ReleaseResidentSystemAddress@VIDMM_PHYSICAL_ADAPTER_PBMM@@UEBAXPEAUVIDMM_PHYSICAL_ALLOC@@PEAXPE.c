/*
 * XREFs of ?ReleaseResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAXPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x14012A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::ReleaseResidentSystemAddress(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        void *a3,
        struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a4)
{
  int v4; // eax

  v4 = *((_DWORD *)a2 + 14);
  if ( (v4 & 8) == 0 && (v4 & 0x20) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 88LL, this, a2, a4);
    WdLogGlobalForLineNumber = 213;
  }
}
