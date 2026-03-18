/*
 * XREFs of VidMmUpdateAllocationProperty @ 0x1400474C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 */

__int64 __fastcall VidMmUpdateAllocationProperty(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        const struct VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  return VIDMM_GLOBAL::UpdateAllocationProperty(a1, a2, a3, a4, a5);
}
