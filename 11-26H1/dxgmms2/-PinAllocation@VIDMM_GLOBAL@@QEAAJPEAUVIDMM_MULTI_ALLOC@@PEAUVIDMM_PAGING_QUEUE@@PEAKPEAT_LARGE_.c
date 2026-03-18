/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400E4154
 * Callers:
 *     VidMmPinAllocation @ 0x140042B90 (VidMmPinAllocation.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E41A0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 */

int __fastcall VIDMM_GLOBAL::PinAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6)
{
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    a5->QuadPart = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, a3, 0, 0xFFFFFFFFFFFFFFFFuLL, a6);
}
