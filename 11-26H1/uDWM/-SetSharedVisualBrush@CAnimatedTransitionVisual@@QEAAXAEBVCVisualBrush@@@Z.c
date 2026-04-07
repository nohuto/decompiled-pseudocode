/*
 * XREFs of ?SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@@Z @ 0x180096B38
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetSharedVisualBrush(
        CAnimatedTransitionVisual *this,
        const struct CVisualBrush *a2)
{
  CVisualBrush::operator=((__int64 *)this + 65, (__int64 *)a2);
}
