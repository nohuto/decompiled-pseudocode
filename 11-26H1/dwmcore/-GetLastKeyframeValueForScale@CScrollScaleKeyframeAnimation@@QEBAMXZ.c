/*
 * XREFs of ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180270C14 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180273D18 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x18013E0C4 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(CScrollScaleKeyframeAnimation *this)
{
  KeyframeValue *LastKeyframeValue; // rax
  const char *v2; // r9
  int Value; // eax
  const char *v4; // r9
  int v6[16]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
  v7 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)v6, v2);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v6[0]);
  if ( v7 != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v4);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
  return *(float *)v6;
}
