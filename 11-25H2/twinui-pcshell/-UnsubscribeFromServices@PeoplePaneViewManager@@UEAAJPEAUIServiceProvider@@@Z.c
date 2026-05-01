/*
 * XREFs of ?UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021FE10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromServices(
        PeoplePaneViewManager *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 328));
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 192));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 40);
  return 0LL;
}
