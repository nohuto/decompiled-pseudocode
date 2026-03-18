/*
 * XREFs of ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1400F2F4C
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400F2310 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::AccumulateZeroingState(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *a2)
{
  int v2; // r8d
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r8d

  v2 = *((_DWORD *)this + 20);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( !v4 )
    {
      if ( dword_14008A520 && !*(_DWORD *)a2 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_22;
      }
      return;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( !dword_14008A520 || *(_DWORD *)a2 )
        goto LABEL_6;
      goto LABEL_25;
    }
  }
  else
  {
    if ( !dword_14008A520 || !*(_DWORD *)a2 || !g_IsInternalRelease )
      return;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( v5 == 1 )
  {
    if ( dword_14008A520 != (_DWORD)v3 && *(_DWORD *)a2 == (_DWORD)v3 && g_IsInternalRelease != (_BYTE)v3 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(v3, 270LL, 9LL, 0LL, v3, v3);
      WdLogGlobalForLineNumber = 213;
LABEL_25:
      if ( g_IsInternalRelease != (_BYTE)v3 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(v3, 270LL, 9LL, 0LL, v3, v3);
        WdLogGlobalForLineNumber = 213;
        JUMPOUT(0x1400F30F7LL);
      }
LABEL_6:
      if ( *(_DWORD *)a2 != 1 )
        return;
LABEL_22:
      *(_DWORD *)a2 = 2;
      return;
    }
    if ( *(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 2 )
      *(_DWORD *)a2 = 3;
  }
}
