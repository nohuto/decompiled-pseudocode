/*
 * XREFs of VidMmPinAllocationAt @ 0x14004D780
 * Callers:
 *     <none>
 * Callees:
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@K_K@Z @ 0x1400A1FD8 (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@K_K@Z.c)
 */

__int64 __fastcall VidMmPinAllocationAt(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::PinAllocationAt(a1, a2, a3, a4);
}
