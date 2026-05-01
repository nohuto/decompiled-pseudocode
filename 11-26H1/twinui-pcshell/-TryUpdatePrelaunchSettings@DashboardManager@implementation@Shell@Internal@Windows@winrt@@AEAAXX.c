/*
 * XREFs of ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801FE0A4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5110 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x1805D9500 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaunchSettingsAsy.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1801FE150 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_30894b336ccbbb45d756c3829ae8c4b0__0_ @ 0x1805C368C (std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtension)_--functi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  __int64 v1; // rax
  int v2; // ebx
  const char *v3; // r9
  _BYTE *v4; // rdx
  _BYTE v5[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v7; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v1 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         v5,
         this);
  std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_30894b336ccbbb45d756c3829ae8c4b0__0_(
    v6,
    v1);
  try
  {
    v2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension();
    if ( v7 )
    {
      v4 = v6;
      LOBYTE(v4) = v7 != v6;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v4);
    }
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB16,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB18,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v3);
  }
}
