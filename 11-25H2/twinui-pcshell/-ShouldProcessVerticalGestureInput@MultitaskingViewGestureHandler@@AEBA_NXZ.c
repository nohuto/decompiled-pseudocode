/*
 * XREFs of ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18048C710
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180132B50 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180132F50 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801FA274 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(MultitaskingViewGestureHandler *this)
{
  int v1; // edx
  __int64 v2; // r10
  char v3; // r11
  int v4; // eax

  if ( (unsigned int)MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
                       *((_DWORD *)this + 32),
                       *((_DWORD *)this + 33))
     - 1 <= 1 )
  {
    v4 = -v1;
    if ( v1 > 0 )
      v4 = v1;
    return (double)v4 > (double)*(int *)(v2 + 140) * *(double *)(v2 + 144);
  }
  return v3;
}
