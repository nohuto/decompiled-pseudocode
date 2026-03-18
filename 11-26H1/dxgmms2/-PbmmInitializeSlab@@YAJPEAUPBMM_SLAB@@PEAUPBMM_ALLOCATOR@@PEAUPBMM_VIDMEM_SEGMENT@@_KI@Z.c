/*
 * XREFs of ?PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z @ 0x140053F84
 * Callers:
 *     CreateSlabArray @ 0x140053978 (CreateSlabArray.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58 (-PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z @ 0x140052E40 (-PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z.c)
 */

__int64 __fastcall PbmmInitializeSlab(
        struct PBMM_SLAB *a1,
        struct PBMM_ALLOCATOR *a2,
        struct PBMM_VIDMEM_SEGMENT *a3,
        __int64 a4,
        char a5)
{
  char *v5; // rbx
  struct PBMM_PAGE *Page; // rax
  struct PBMM_PAGE *v10; // r9
  __int64 v11; // rcx
  unsigned int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE *v22; // r9

  v5 = (char *)a1 + 8;
  *(_QWORD *)a1 = a4;
  *((_DWORD *)a1 + 6) = a5 & 0x1F ^ *((_DWORD *)a1 + 6) & 0xFFFFFFC0;
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  Page = PbmmAllocatePage(a2);
  v10 = Page;
  if ( Page )
  {
    v13 = *((_DWORD *)Page + 16) & 0x7FFFFFFF | ((*((_DWORD *)a1 + 6) & 0xFFFFFFE0) << 26);
    v14 = *((_DWORD *)Page + 17);
    v15 = *((_DWORD *)v10 + 17);
    *((_DWORD *)v10 + 16) = v13;
    v16 = (*((_DWORD *)a1 + 6) ^ v15) & 0x1F;
    *((_QWORD *)v10 + 6) = a1;
    v17 = v14 ^ v16;
    *((_DWORD *)v10 + 17) = v17;
    v18 = *((_DWORD *)a2 + 36) & 0xF;
    *((_DWORD *)v10 + 17) = v17 | 0x100000;
    *((_DWORD *)v10 + 16) = (v13 & 0xFFFFFF87 ^ (8 * v18)) & 0xFFFFFFF8;
    v19 = (_QWORD *)((char *)v10 + 32);
    v20 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *v19 = v20;
    *((_QWORD *)v10 + 5) = v5;
    *(_QWORD *)(v20 + 8) = v19;
    *(_QWORD *)v5 = v19;
    PageListForPage = PbmmGetPageListForPage(a3, v10);
    PbmmAddPageToList(PageListForPage, v22);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A894);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 69;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
}
