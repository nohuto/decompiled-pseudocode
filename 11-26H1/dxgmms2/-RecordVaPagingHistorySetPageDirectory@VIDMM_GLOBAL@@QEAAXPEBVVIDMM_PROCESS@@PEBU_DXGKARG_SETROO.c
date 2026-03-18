/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x14011E77C
 * Callers:
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043EE0 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        const struct VIDMM_PROCESS *a2,
        const struct _DXGKARG_SETROOTPAGETABLE *a3,
        const void *a4)
{
  char *v5; // rsi
  char *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // rcx

  v5 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v9 = operator new(56, (VIDMM_GLOBAL *)((char *)this + 41168), 9u, 0);
  if ( v9 )
  {
    *(_OWORD *)v9 = *(_OWORD *)&a3->hContext;
    v10 = *(_OWORD *)&a3->Address.SegmentOffset;
    *((_QWORD *)v9 + 6) = a4;
    *((_OWORD *)v9 + 1) = v10;
    if ( a2 )
      v11 = *((_QWORD *)a2 + 2);
    else
      v11 = 0LL;
    *((_QWORD *)v9 + 4) = v11;
    if ( a2 )
      v12 = *((_QWORD *)a2 + 9);
    else
      v12 = 0LL;
    *((_QWORD *)v9 + 5) = v12;
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
