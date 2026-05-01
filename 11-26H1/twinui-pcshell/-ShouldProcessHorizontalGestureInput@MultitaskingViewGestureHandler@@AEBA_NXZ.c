/*
 * XREFs of ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x1801B49BC
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801B4410 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4820 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(
        MultitaskingViewGestureHandler *this)
{
  char v1; // r8
  int v2; // edx
  int v3; // eax

  v1 = 0;
  v2 = -*((_DWORD *)this + 32);
  if ( *((int *)this + 32) > 0 )
    v2 = *((_DWORD *)this + 32);
  v3 = -*((_DWORD *)this + 33);
  if ( *((int *)this + 33) > 0 )
    v3 = *((_DWORD *)this + 33);
  if ( v2 > v3 )
    return (double)v2 > (double)*((int *)this + 34) * *((double *)this + 19);
  return v1;
}
