/*
 * XREFs of TrimSystemMemoryResources @ 0x140051DE4
 * Callers:
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 * Callees:
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 *     ?PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z @ 0x140052D84 (-PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z.c)
 *     ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240 (-PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 *     ?VidMmPbmmVerifyResidentLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B1068 (-VidMmPbmmVerifyResidentLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 */

bool __fastcall TrimSystemMemoryResources(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebp
  const struct VIDMM_PHYSICAL_ALLOC *i; // rdx
  struct PBMM_PAGE *OnePageFromList; // rbx
  struct PBMM_PHYSICAL_ALLOC *v10; // rcx
  bool result; // al

  v5 = a4;
  for ( i = *(const struct VIDMM_PHYSICAL_ALLOC **)(a2 + 48); ; i = *(const struct VIDMM_PHYSICAL_ALLOC **)(a2 + 48) )
  {
    result = VidMmPbmmVerifyResidentLimitCB((const struct VIDMM_PHYSICAL_ADAPTER *)a1, i, a3, a4);
    if ( result )
      break;
    OnePageFromList = PbmmGetOnePageFromList((struct PBMM_PAGE_LIST *)(a3 + 2880));
    PbmmRemovePageFromPhysicalAlloc(v10, OnePageFromList);
    EvictOnePage((struct PBMM_ALLOCATOR *)a1, a3, *((_QWORD *)OnePageFromList + 7), (__int64)OnePageFromList);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 32), OnePageFromList);
    --*(_QWORD *)(a3 + 2872);
    a4 = v5;
  }
  return result;
}
