/*
 * XREFs of ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x18013E0C4 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
        CKeyframeAnimation *a1,
        __int64 a2)
{
  KeyframeValue *LastKeyframeValue; // rax
  const char *v4; // r9
  int Value; // eax
  const char *v6; // r9
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0;
  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a1);
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v9, v4);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v9);
  if ( v11 != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v6);
  v7 = v10;
  *(_QWORD *)a2 = v9;
  *(_DWORD *)(a2 + 8) = v7;
  return a2;
}
