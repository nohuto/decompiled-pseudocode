/*
 * XREFs of ?PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z @ 0x140052E40
 * Callers:
 *     ?PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGMENT@@W4PBMM_PAGE_SIZE@@IPEAPEAUPBMM_PAGE@@@Z @ 0x140052434 (-PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGM.c)
 *     ?PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z @ 0x140053274 (-PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z.c)
 *     ?PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z @ 0x140053F84 (-PbmmInitializeSlab@@YAJPEAUPBMM_SLAB@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@_KI@Z.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

struct PBMM_PAGE *__fastcall PbmmAllocatePage(struct PBMM_ALLOCATOR *a1)
{
  struct PBMM_PAGE *result; // rax
  struct PBMM_PAGE *v2; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD v6[5]; // [rsp+20h] [rbp-58h] BYREF

  result = (struct PBMM_PAGE *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 32));
  v2 = result;
  if ( result )
  {
    memset(v6, 0, 0x48uLL);
    result = v2;
    v3 = v6[1];
    *(_OWORD *)v2 = v6[0];
    v4 = v6[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = v6[3];
    *((_OWORD *)v2 + 2) = v4;
    *(_QWORD *)&v4 = *(_QWORD *)&v6[4];
    *((_OWORD *)v2 + 3) = v5;
    *((_QWORD *)v2 + 8) = v4;
  }
  return result;
}
