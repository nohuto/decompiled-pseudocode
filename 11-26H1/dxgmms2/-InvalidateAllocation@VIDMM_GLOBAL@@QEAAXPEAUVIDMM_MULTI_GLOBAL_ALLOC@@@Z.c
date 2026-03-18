/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14009F720
 * Callers:
 *     VidMmInvalidateAllocation @ 0x14004D6C0 (VidMmInvalidateAllocation.c)
 * Callees:
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140124788 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, struct VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2);
}
