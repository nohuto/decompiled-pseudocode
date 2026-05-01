/*
 * XREFs of ?Shutdown@TabletModeInputHandler@@UEAAXXZ @ 0x18050D300
 * Callers:
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x18050D198 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModeInputHandler::Shutdown(TabletModeInputHandler *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  DestroyWindow(*((HWND *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
}
