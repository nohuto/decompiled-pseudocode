/*
 * XREFs of ?DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F0FEC
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400F1384 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommitZeroTransition(VIDMM_RECYCLE_RANGE *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 || (unsigned int)(v2 - 1) < 2 )
      *((_DWORD *)this + 20) = 0;
  }
  else if ( dword_14008A520 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400F1065LL);
  }
}
