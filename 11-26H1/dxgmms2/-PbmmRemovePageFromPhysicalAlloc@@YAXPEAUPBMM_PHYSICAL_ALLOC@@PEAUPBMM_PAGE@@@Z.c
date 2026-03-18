/*
 * XREFs of ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240
 * Callers:
 *     CancelResources @ 0x140050F84 (CancelResources.c)
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 *     TrimSystemMemoryResources @ 0x140051DE4 (TrimSystemMemoryResources.c)
 *     ?PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z @ 0x140053154 (-PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmRemovePageFromPhysicalAlloc(struct PBMM_PHYSICAL_ALLOC *a1, struct PBMM_PAGE *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD *)((char *)a2 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *(_OWORD *)v2 = 0LL;
}
