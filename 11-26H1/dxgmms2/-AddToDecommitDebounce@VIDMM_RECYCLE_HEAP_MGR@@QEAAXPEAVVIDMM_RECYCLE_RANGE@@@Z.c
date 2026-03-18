/*
 * XREFs of ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F454C
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400EFF20 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400F2310 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400F68A8 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rax
  VIDMM_RECYCLE_HEAP_MGR **v4; // r8
  unsigned __int64 v5; // rcx

  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 197) + (unsigned int)dword_14008A510;
  v3 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  v4 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 196);
  if ( *v4 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560) )
    __fastfail(3u);
  *(_QWORD *)v3 = (char *)this + 1560;
  *((_QWORD *)a2 + 14) = v4;
  *v4 = v3;
  *((_QWORD *)this + 196) = v3;
  if ( !_InterlockedExchange((volatile __int32 *)this + 384, 1) && !*((_DWORD *)this + 396) )
    KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
  v5 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v5 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v5)) < 0
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400F463ALL);
  }
}
