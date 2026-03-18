/*
 * XREFs of ?VidMmPbmmHasContentCB@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400B09E4
 * Callers:
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmPbmmHasContentCB(const struct VIDMM_PHYSICAL_ALLOC *a1)
{
  return *(_BYTE *)(*(_QWORD *)a1 + 42LL) != 0;
}
