/*
 * XREFs of _lambda_23809c4bef085b6fa213042e01960e5b_::operator() @ 0x1800C6874
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C8F8C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180023944 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_23809c4bef085b6fa213042e01960e5b_::operator()(
        CGroupingStoryboard **a1,
        CAnimatedTransitionVisual **a2)
{
  CGroupingStoryboard *v4; // rcx

  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], 0.0);
  v4 = *a1;
  *((_BYTE *)a2[5] + 923) = 1;
  *((_BYTE *)a2[5] + 936) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(v4, (struct CAnimationComponent *)a2);
}
