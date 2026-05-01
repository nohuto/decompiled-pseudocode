/*
 * XREFs of ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x18033EDC4
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x18034AB00 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802D93E4 (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
        _QWORD *a1,
        volatile signed __int64 *a2)
{
  int interface_common; // edi
  volatile signed __int64 v5; // rax
  int v7; // [rsp+24h] [rbp-34h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  _QWORD *v10; // [rsp+40h] [rbp-18h] BYREF

  interface_common = 0;
  v10 = a1;
  if ( a2 )
  {
    v5 = *a2;
    v8 = 0;
    v9 = 0LL;
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(volatile signed __int64 *, _QWORD *))(v5 + 48))(
                      a2,
                      winrt::impl::guid_v<Windows::Internal::GamingOverlay::IGameBarWindowControl>);
    if ( v10 )
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)a2);
    else
      interface_common = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
                           a2,
                           winrt::impl::guid_v<Windows::Internal::GamingOverlay::IGameBarWindowControl>,
                           (__int64 *)&v10);
    winrt::check_hresult(&v7, interface_common, (__int64)&v8);
    *a1 = v10;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
