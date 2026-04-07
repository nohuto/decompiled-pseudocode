/*
 * XREFs of _CAppSwitch::_WindowEnumCallback_::_81_::_lambda_1_::operator() @ 0x1800C0554
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6370 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180035E88 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall CAppSwitch::_WindowEnumCallback_::_81_::_lambda_1_::operator()(
        __int64 a1,
        CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  *((_BYTE *)a2[5] + 907) = 1;
  *((_BYTE *)a2[5] + 920) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*(CGroupingStoryboard **)a1, (struct CAnimationComponent *)a2);
}
