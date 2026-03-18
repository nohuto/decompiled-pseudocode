/*
 * XREFs of ?PbmmDecrementCommittedPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@I@Z @ 0x140052A14
 * Callers:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     ?PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x14004C28C (-PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmPbmmSubtractCommittedBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0CCC (-VidMmPbmmSubtractCommittedBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@.c)
 */

void __fastcall PbmmDecrementCommittedPfns(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  *(_DWORD *)(a1 + 72) -= a4;
  *(_QWORD *)(a2 + 24) -= a4;
  --*(_QWORD *)(a2 + 8LL * a3 + 48);
  VidMmPbmmSubtractCommittedBytesCB(
    **(struct VIDMM_PHYSICAL_ADAPTER ***)(a2 + 8),
    *(struct VIDMM_PHYSICAL_ALLOC **)(a1 + 48),
    *(_DWORD *)(a2 + 2864) & 0x1F,
    a4);
}
