/*
 * XREFs of ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04
 * Callers:
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 *     ?PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z @ 0x140053EF4 (-PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmRemovePageFromList(struct PBMM_PAGE_LIST *a1, struct PBMM_PAGE ***a2)
{
  struct PBMM_PAGE **v2; // r8
  struct PBMM_PAGE **v3; // rax

  v2 = *a2;
  if ( (*a2)[1] != (struct PBMM_PAGE *)a2 || (v3 = a2[1], *v3 != (struct PBMM_PAGE *)a2) )
    __fastfail(3u);
  *v3 = (struct PBMM_PAGE *)v2;
  v2[1] = (struct PBMM_PAGE *)v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  --*((_DWORD *)a1 + 4);
}
