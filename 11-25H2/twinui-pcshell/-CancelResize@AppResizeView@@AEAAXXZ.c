/*
 * XREFs of ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18050B134
 * Callers:
 *     ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x18050BB30 (-OnPointerCancel@AppResizeView@@UEAAJXZ.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18050BB60 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x18050BC50 (-OnKeyUp@AppResizeView@@UEAAJK@Z.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x18050B178 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18050B410 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x18050C3A0 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

void __fastcall AppResizeView::CancelResize(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, 0xFFFFFFFFLL);
  }
}
