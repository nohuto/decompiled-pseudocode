/*
 * XREFs of ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049D300
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801B4410 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4820 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801EFE24 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(MultitaskingViewGestureHandler *this)
{
  int v1; // eax
  int v2; // edx
  __int64 v3; // r10
  char v4; // r11
  int v5; // eax

  v1 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*((_DWORD *)this + 32), *((_DWORD *)this + 33));
  if ( v1 == 1 || v1 == 2 )
  {
    v5 = -v2;
    if ( v2 > 0 )
      v5 = v2;
    return (double)v5 > (double)*(int *)(v3 + 140) * *(double *)(v3 + 144);
  }
  return v4;
}
