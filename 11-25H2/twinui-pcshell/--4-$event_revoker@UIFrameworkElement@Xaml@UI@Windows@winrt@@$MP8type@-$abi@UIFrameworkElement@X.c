/*
 * XREFs of ??4?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180103CE0
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801035C4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1800A6838 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 *     ?get@?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801024EC (-get@-$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@AEAAXUIFrameworkElement@Xaml@UI@Windows@3@@Z @ 0x18010253C (-revoke_impl@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$a_ea_18010253C.c)
 */

__int64 *__fastcall __4__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v8 = v2;
  v9 = a2[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(&v8, a1);
  v4 = v8 == 0;
  v5 = v9;
  v9 = a1[1];
  a1[1] = v5;
  if ( !v4 )
  {
    v7 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>::get(
                                                                                               &v8,
                                                                                               &v10);
    _revoke_impl___event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__AEAAXUIFrameworkElement_Xaml_UI_Windows_3__Z(
      (__int64)&v8,
      v7);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  }
  return a1;
}
