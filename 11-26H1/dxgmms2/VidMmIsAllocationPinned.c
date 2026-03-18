/*
 * XREFs of VidMmIsAllocationPinned @ 0x14003F220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140115E38 (-IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

bool __fastcall VidMmIsAllocationPinned(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationPinned(a1, a2);
}
