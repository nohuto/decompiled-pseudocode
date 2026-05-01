/*
 * XREFs of ?remove_NetworkStateChanged@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18064AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0888 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtils>::remove_NetworkStateChanged(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(v3, a2);
  return 0LL;
}
