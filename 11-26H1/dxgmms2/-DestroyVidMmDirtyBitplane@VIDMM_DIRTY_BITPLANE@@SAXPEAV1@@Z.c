/*
 * XREFs of ?DestroyVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAXPEAV1@@Z @ 0x140050694
 * Callers:
 *     ?DestroyDirtyBitplane@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14009D6D8 (-DestroyDirtyBitplane@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DIRTY_BITPLANE@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DIRTY_BITPLANE::DestroyVidMmDirtyBitplane(struct VIDMM_DIRTY_BITPLANE *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 6);
  if ( v1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 81LL, a1, v1, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  operator delete(a1);
}
