/*
 * XREFs of ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAA@XZ @ 0x180208CD8
 * Callers:
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800DC27C (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x180605CE8 (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x1806AC1F8 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$15 @ 0x180700C4F (_SharedDesktopBackgroundVisualHost--SharedDesktopBackgroundVisualHost_--_1_--dtor$15.c)
 *     _SharedDesktopBackgroundVisualHost::CreateXamlHost_::_1_::dtor$5 @ 0x180700D0B (_SharedDesktopBackgroundVisualHost--CreateXamlHost_--_1_--dtor$5.c)
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$23 @ 0x1807073C4 (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$23.c)
 * Callees:
 *     ?revoke_impl@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@AEAAXUIFrameworkElement@Xaml@UI@Windows@3@@Z @ 0x1800A382C (-revoke_impl@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$a_ea_1800A382C.c)
 *     ?get@?$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801E3968 (-get@-$weak_ref@UIFrameworkElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::IFrameworkElement>::get(
                                                                                               a1,
                                                                                               &v3);
    _revoke_impl___event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__AEAAXUIFrameworkElement_Xaml_UI_Windows_3__Z(
      (__int64)a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
