/*
 * XREFs of VidMmInvalidateCache @ 0x14004D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x14009F738 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_M.c)
 */

__int64 __fastcall VidMmInvalidateCache(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct VIDMM_MULTI_ALLOC *a4,
        unsigned __int64 a5,
        ULONG Length)
{
  return VIDMM_GLOBAL::InvalidateCache(a1, a2, a3, a4, a5, Length);
}
