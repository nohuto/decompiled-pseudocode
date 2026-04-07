/*
 * XREFs of _CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator() @ 0x1800C0504
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C3050 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180035E88 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall CGroupingStoryboard::_Create3DComponent_::_44_::_lambda_1_::operator()(
        CGroupingStoryboard **a1,
        CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], 0.0);
  *((_BYTE *)a2[5] + 907) = 1;
  *((_BYTE *)a2[5] + 920) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*a1, (struct CAnimationComponent *)a2);
}
