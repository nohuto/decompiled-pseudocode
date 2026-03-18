/*
 * XREFs of TryReserveOnePageFromLocation @ 0x140052764
 * Callers:
 *     ?PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@W4PBMM_PAGE_SIZE@@44IPEAPEAUPBMM_PAGE@@@Z @ 0x14005256C (-PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGM.c)
 * Callees:
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     ?PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z @ 0x140052D84 (-PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z.c)
 */

__int64 __fastcall TryReserveOnePageFromLocation(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct PBMM_PAGE **a7)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct PBMM_PAGE *OnePageFromList; // rax
  unsigned int v12; // r9d
  unsigned int i; // ecx

  v8 = a4;
  v9 = 16LL * a6;
  v10 = a3 + 24 * (v9 + a4);
  if ( *(_DWORD *)(v10 + 16) )
  {
    OnePageFromList = PbmmGetOnePageFromList((struct PBMM_PAGE_LIST *)v10);
LABEL_8:
    if ( OnePageFromList )
    {
      *a7 = OnePageFromList;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v12 = a4 + 1;
    for ( i = v12; i <= a5; ++i )
    {
      if ( *(_DWORD *)(a3 + 24 * (v9 + i) + 16) )
      {
        OnePageFromList = ReserveAndSplitPage(a1, a2, a3, v12, a5, a6);
        goto LABEL_8;
      }
    }
    WdLogSingleEntry4(3LL, a1, a3, v8, a6);
    WdLogGlobalForLineNumber = 189;
    *a7 = 0LL;
    return 3223191808LL;
  }
}
