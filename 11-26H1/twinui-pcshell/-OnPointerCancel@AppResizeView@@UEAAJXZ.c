/*
 * XREFs of ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x18052E090
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18052D5D8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnPointerCancel(AppResizeView *this)
{
  AppResizeView *v1; // rcx

  v1 = (AppResizeView *)((char *)this - 32);
  if ( !*((_BYTE *)v1 + 96) )
    AppResizeView::CancelResize(v1);
  return 0LL;
}
