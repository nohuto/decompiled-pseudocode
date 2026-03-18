/*
 * XREFs of ?LockAllocationRange@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z @ 0x1400B5BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::LockAllocationRange(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        bool *a7)
{
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
  WdLogGlobalForLineNumber = 213;
  JUMPOUT(0x1400B5BE7LL);
}
