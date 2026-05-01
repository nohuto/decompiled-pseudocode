/*
 * XREFs of ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x18050BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18050B134 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnKeyUp(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) && !*((_BYTE *)this + 452) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
