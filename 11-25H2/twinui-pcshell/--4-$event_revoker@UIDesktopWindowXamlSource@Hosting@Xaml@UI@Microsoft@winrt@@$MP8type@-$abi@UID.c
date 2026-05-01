/*
 * XREFs of ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180065FCC
 * Callers:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x180065C2C (-TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x18029B4A8 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?get@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@QEBA@XZ @ 0x180442F74 (-get@-$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@QEBA@XZ.c)
 */

__int64 __fastcall __4__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Microsoft_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF

  v8 = 0LL;
  v3 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v10 = v3;
  v9 = v4;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v8, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v9;
  v9 = v5;
  if ( v8 )
  {
    v7 = winrt::weak_ref<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::get(&v8, &v10);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      &v8,
      v7);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  }
  return a1;
}
