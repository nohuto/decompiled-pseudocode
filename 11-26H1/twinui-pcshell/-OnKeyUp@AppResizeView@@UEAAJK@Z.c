/*
 * XREFs of ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x18052E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18052D5D8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnKeyUp(AppResizeView *this)
{
  AppResizeView *v2; // rcx

  v2 = (AppResizeView *)((char *)this - 32);
  if ( !*((_BYTE *)v2 + 96) && !*((_BYTE *)this + 452) )
    AppResizeView::CancelResize(v2);
  return 0LL;
}
