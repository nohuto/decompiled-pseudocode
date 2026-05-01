/*
 * XREFs of ??$as@UIInspectable@Foundation@Windows@winrt@@UWASDKInitializationWrapper@@$0A@@impl@winrt@@YA?AUIInspectable@Foundation@Windows@1@PEAUWASDKInitializationWrapper@@@Z @ 0x18043DE08
 * Callers:
 *     ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x18043F038 (-Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x180294780 (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?query_interface_common@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180333204 (-query_interface_common@-$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Foundation::IInspectable,WASDKInitializationWrapper,0>(
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
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(volatile signed __int64 *, __int64 *))(v5 + 48))(
                      a2,
                      &winrt::impl::guid_v<IInspectable>);
    if ( v10 )
      winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)a2);
    else
      interface_common = winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::query_interface_common(
                           a2,
                           &winrt::impl::guid_v<IInspectable>,
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
