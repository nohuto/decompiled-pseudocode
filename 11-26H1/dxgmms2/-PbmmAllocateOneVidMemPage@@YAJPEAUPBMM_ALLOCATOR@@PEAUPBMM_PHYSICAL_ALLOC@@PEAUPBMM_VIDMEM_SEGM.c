/*
 * XREFs of ?PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@W4PBMM_PAGE_SIZE@@44IPEAPEAUPBMM_PAGE@@@Z @ 0x14005256C
 * Callers:
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 * Callees:
 *     TryReserveOnePageFromLocation @ 0x140052764 (TryReserveOnePageFromLocation.c)
 *     ?VidMmPbmmVerifyCommitLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0F58 (-VidMmPbmmVerifyCommitLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 */

__int64 __fastcall PbmmAllocateOneVidMemPage(
        const struct VIDMM_PHYSICAL_ADAPTER **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r12d
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v14; // rsi
  __int64 v15; // rax

  v9 = (int)a1;
  if ( VidMmPbmmVerifyCommitLimitCB(
         *a1,
         *(const struct VIDMM_PHYSICAL_ALLOC **)(a2 + 48),
         *(_DWORD *)(a3 + 2864) & 0x1F,
         1 << a5) )
  {
    v12 = *(_QWORD *)(a3 + 2888);
    while ( 1 )
    {
      LODWORD(result) = TryReserveOnePageFromLocation(v9, a3, v12, a6, a7, 0, a9);
      v14 = (int)result;
      if ( (int)result >= 0 )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        v15 = WdLogNewEntry5_WdTrace();
        *(_QWORD *)(v15 + 24) = 0LL;
        *(_QWORD *)(v15 + 32) = v14;
        WdLogGlobalForLineNumber = 254;
      }
      if ( a6 == a5 )
        return 3223191808LL;
      --a6;
    }
    return (unsigned int)result;
  }
  else
  {
    WdLogSingleEntry3(3LL, *(_QWORD *)(a3 + 24) << 12, *(_QWORD *)a3 << 12, (unsigned int)(1 << a5 << 12));
    WdLogGlobalForLineNumber = 237;
    return 3223191808LL;
  }
}
