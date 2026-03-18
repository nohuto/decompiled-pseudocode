/*
 * XREFs of ?PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGMENT@@W4PBMM_PAGE_SIZE@@IPEAPEAUPBMM_PAGE@@@Z @ 0x140052434
 * Callers:
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z @ 0x140052E40 (-PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z.c)
 *     ?VidMmPbmmVerifyCommitLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0F58 (-VidMmPbmmVerifyCommitLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 */

__int64 __fastcall PbmmAllocateOneSysMemPage(
        struct PBMM_ALLOCATOR *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        struct PBMM_PAGE **a6)
{
  int v9; // edi
  __int64 result; // rax
  struct PBMM_PAGE *Page; // rax
  struct PBMM_PAGE *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax

  v9 = 1 << a4;
  if ( VidMmPbmmVerifyCommitLimitCB(
         *(const struct VIDMM_PHYSICAL_ADAPTER **)a1,
         *(const struct VIDMM_PHYSICAL_ALLOC **)(a2 + 48),
         *(_DWORD *)(a3 + 2864) & 0x1F,
         1 << a4) )
  {
    Page = PbmmAllocatePage(a1);
    v12 = Page;
    if ( Page )
    {
      v14 = *((_DWORD *)Page + 16);
      *((_DWORD *)v12 + 17) |= 0x100000u;
      *((_DWORD *)v12 + 16) = (v14 & 0x7FFFFF87 ^ (8 * (a4 & 0xF))) & 0xFFFFFFF8;
      ++*(_QWORD *)(a3 + 2872);
      *a6 = v12;
      return 0LL;
    }
    else
    {
      _InterlockedIncrement(&dword_14008A894);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 77;
      DxgkLogInternalTriageEvent(v13, 262145LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry3(3LL, *(_QWORD *)(a3 + 24) << 12, *(_QWORD *)a3 << 12, (unsigned int)(v9 << 12));
    result = 3223191808LL;
    WdLogGlobalForLineNumber = 70;
  }
  return result;
}
