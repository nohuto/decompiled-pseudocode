/*
 * XREFs of ?VidMmPbmmDiscardMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_K@Z @ 0x1400B0910
 * Callers:
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 * Callees:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z.c)
 */

void __fastcall VidMmPbmmDiscardMemoryCB(
        VIDMM_GLOBAL **a1,
        struct VIDMM_GLOBAL_ALLOC **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned __int64 a6)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // rdx

  v6 = *a2;
  if ( (*((_DWORD *)v6 + 6) & 4) == 0 && (*((_DWORD *)v6 + 7) & 4) == 0 )
    VIDMM_GLOBAL::DiscardAllocation(a1[7], v6, (unsigned __int64)a3 << 12, (unsigned __int64)a4 << 12, a5, a6 << 12);
}
