/*
 * XREFs of ?DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ @ 0x1802AF974
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180058510 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___ @ 0x18052FC08 (wil--details--ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___--_ScopeExitFn__lambda_1ec7.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x18052FD24 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModeCoverWindow::DestroyDesktopThumbnail(TabletModeCoverWindow *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
}
