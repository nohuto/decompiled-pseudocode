/*
 * XREFs of ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8
 * Callers:
 *     ?PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x14004C28C (-PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 *     ?PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z @ 0x140053EF4 (-PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z.c)
 *     ?PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z @ 0x140053F84 (-PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z.c)
 * Callees:
 *     <none>
 */

struct PBMM_PAGE_LIST *__fastcall PbmmGetPageListForPage(struct PBMM_SEGMENT *a1, const struct PBMM_PAGE *a2)
{
  if ( (*((_DWORD *)a1 + 716) & 0x1F) != 0 )
    return (struct PBMM_PAGE_LIST *)(*((_QWORD *)a1 + ((unsigned __int64)*((unsigned int *)a2 + 16) >> 31) + 361)
                                   + 24 * (16LL * (*((_DWORD *)a2 + 16) & 7) + ((*((_DWORD *)a2 + 16) >> 3) & 0xF)));
  else
    return (struct PBMM_SEGMENT *)((char *)a1 + 2880);
}
