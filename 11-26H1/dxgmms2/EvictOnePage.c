/*
 * XREFs of EvictOnePage @ 0x140051444
 * Callers:
 *     CancelResources @ 0x140050F84 (CancelResources.c)
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 *     EvictAllNonReservedPages @ 0x140051390 (EvictAllNonReservedPages.c)
 *     TrimSystemMemoryResources @ 0x140051DE4 (TrimSystemMemoryResources.c)
 * Callees:
 *     ?PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052A58 (-PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 *     ?VidMmPbmmHasContentCB@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400B09E4 (-VidMmPbmmHasContentCB@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 */

__int64 __fastcall EvictOnePage(struct PBMM_ALLOCATOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct PBMM_ALLOCATOR *v4; // r10
  int v7; // esi
  bool v9; // r9
  __int64 result; // rax

  v4 = a1;
  v7 = 1 << ((*(_DWORD *)(a4 + 64) >> 3) & 0xF);
  if ( (*(_DWORD *)(a4 + 68) & 0x100000) == 0
    || !VidMmPbmmHasContentCB(*(const struct VIDMM_PHYSICAL_ALLOC **)(a3 + 48)) )
  {
    v9 = 0;
  }
  PbmmEvictPage(v4, (struct PBMM_PHYSICAL_ALLOC *)a3, (struct PBMM_PAGE *)a4, v9);
  result = PbmmDecrementResidentPfns(a3, a2, (*(_DWORD *)(a4 + 64) >> 7) & 0xF, (*(_DWORD *)(a4 + 64) >> 3) & 0xF, v7);
  *(_DWORD *)(a4 + 64) &= 0xFFFFFFF8;
  *(_QWORD *)(a4 + 56) = 0LL;
  return result;
}
