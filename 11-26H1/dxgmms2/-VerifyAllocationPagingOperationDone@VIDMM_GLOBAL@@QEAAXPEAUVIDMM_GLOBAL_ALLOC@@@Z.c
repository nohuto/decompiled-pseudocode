/*
 * XREFs of ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009BD68
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r10

  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 32LL, v2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
}
