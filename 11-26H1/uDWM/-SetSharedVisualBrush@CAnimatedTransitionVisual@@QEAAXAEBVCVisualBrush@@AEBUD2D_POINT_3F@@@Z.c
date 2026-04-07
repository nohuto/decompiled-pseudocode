/*
 * XREFs of ?SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@AEBUD2D_POINT_3F@@@Z @ 0x180096B4C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CAnimatedTransitionVisual::SetSharedVisualBrush(
        CAnimatedTransitionVisual *this,
        const struct CVisualBrush *a2,
        const struct D2D_POINT_3F *a3)
{
  CVisualBrush::operator=((__int64 *)this + 65, (__int64 *)a2);
  *(_QWORD *)((char *)this + 748) = *(_QWORD *)a3;
  *((_DWORD *)this + 189) = *((_DWORD *)a3 + 2);
}
