/*
 * XREFs of ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58
 * Callers:
 *     ?PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x14004C28C (-PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 *     ?PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z @ 0x140053F84 (-PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmAddPageToList(struct PBMM_PAGE_LIST *a1, struct PBMM_PAGE *a2)
{
  struct PBMM_PAGE_LIST **v2; // rax

  v2 = (struct PBMM_PAGE_LIST **)*((_QWORD *)a1 + 1);
  if ( *v2 != a1 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1;
  *((_QWORD *)a2 + 1) = v2;
  *v2 = a2;
  *((_QWORD *)a1 + 1) = a2;
  ++*((_DWORD *)a1 + 4);
}
