/*
 * XREFs of ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020145C
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801A1B90 (-GetCurrentVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273540 (-GetCurrentVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetPositionVelocity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 616);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCC,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  if ( v4 != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  v5 = *(_DWORD *)(a1 + 560);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 552);
  *(_DWORD *)(a2 + 8) = v5;
  return a2;
}
