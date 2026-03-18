/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEBA_KXZ @ 0x1400F6ADC
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F7470 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEBAXPEA_K_K1@Z @ 0x1400F7164 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEBAXPEA_K_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(VIDMM_RECYCLE_MULTIRANGE *this)
{
  unsigned __int64 v1; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v5 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
    (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
    &v5,
    v1,
    v1 + 4096);
  if ( !v5 )
  {
    v4 = *((_QWORD *)this + 4);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 20LL, v4, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400F6B64LL);
  }
  return v5 << 12;
}
