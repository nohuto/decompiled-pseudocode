/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F964C
 * Callers:
 *     ?RecommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400F9630 (-RecommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400F9568 (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400FA0D0 (-IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  _QWORD *v3; // rbx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx
  char *v8; // rsi
  char **v9; // rcx
  __int64 v10; // rcx

  v3 = *(_QWORD **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v3;
    WdLogGlobalForLineNumber = 2018;
  }
  if ( ((_DWORD)this[8] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[32], *((_QWORD **)a2 + 17));
  *((_DWORD *)v3 + 18) = 2;
  *(_WORD *)(v3[46] + 10LL) = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 8));
  *(_QWORD *)(v3[46] + 40LL) = *(_QWORD *)(*((_QWORD *)a2 + 8) + 24LL) + *((_QWORD *)a2 + 9);
  VIDMM_SEGMENT::IncrementBytesCommitted((VIDMM_SEGMENT *)this, *(struct VIDMM_PARTITION **)v3[41], *((_QWORD *)a2 + 2));
  ++*((_DWORD *)this + 88);
  if ( *((_DWORD *)this + 27) != 1 )
  {
    v10 = v3[42];
    if ( !v10 || _InterlockedIncrement((volatile signed __int32 *)(v10 + 44)) == 1 )
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v3[41] + 56LL), *((_QWORD *)a2 + 2));
  }
  v5 = (char *)(v3 + 30);
  v6 = v3[30];
  if ( *(_QWORD **)(v6 + 8) != v3 + 30
    || (v7 = (char **)v3[31], *v7 != v5)
    || (*v7 = (char *)v6,
        v8 = (char *)(this + 17),
        *(_QWORD *)(v6 + 8) = v7,
        v9 = (char **)*((_QWORD *)v8 + 1),
        *v9 != v8) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v5 = v8;
  v3[31] = v9;
  *v9 = v5;
  *((_QWORD *)v8 + 1) = v5;
}
