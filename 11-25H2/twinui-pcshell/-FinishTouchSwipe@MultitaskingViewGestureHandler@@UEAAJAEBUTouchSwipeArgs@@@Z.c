/*
 * XREFs of ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18048A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandler::FinishTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  if ( *((_BYTE *)this + 232) )
    return 0LL;
  else
    return MultitaskingViewGestureHandler::FinishTouchSwipeInternal((MultitaskingViewGestureHandler *)((char *)this - 16));
}
