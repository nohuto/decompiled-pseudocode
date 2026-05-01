/*
 * XREFs of ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandler::FinishTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  MultitaskingViewGestureHandler *v2; // rcx

  v2 = (MultitaskingViewGestureHandler *)((char *)this - 16);
  if ( *((_BYTE *)v2 + 248) )
    return 0LL;
  else
    return MultitaskingViewGestureHandler::FinishTouchSwipeInternal(v2);
}
