/*
 * XREFs of VidMmReclaimAllocation @ 0x14003C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CE44 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_.c)
 */

__int64 __fastcall VidMmReclaimAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  return VIDMM_GLOBAL::ReclaimAllocation(a1, a2, a3, a4, a5);
}
