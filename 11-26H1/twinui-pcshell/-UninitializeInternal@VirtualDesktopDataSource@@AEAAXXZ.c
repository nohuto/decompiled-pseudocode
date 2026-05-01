/*
 * XREFs of ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180490BF8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___ @ 0x1802C4180 (wil--details--ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___--_ScopeExitFn__lambda_2459.c)
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180490580 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x180490B30 (-Uninitialize@VirtualDesktopDataSource@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall VirtualDesktopDataSource::UninitializeInternal(VirtualDesktopDataSource *this)
{
  SmartCookie::Unregister((VirtualDesktopDataSource *)((char *)this + 136));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
}
