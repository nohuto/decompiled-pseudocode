/*
 * XREFs of ??1?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAA@XZ @ 0x180684B6C
 * Callers:
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180684DF4 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1806850E8 (--4-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xaml@UI@Windo.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$18 @ 0x1806DE758 (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$18.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802A90E4 (-get@-$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@AEAAXUIUIElement4@Xaml@UI@Windows@3@@Z @ 0x1802A9130 (-revoke_impl@-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xam.c)
 */

void __fastcall __1__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement4>::get(
                                                                                               a1,
                                                                                               &v4);
    _revoke_impl___event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__AEAAXUIUIElement4_Xaml_UI_Windows_3__Z(
      (__int64)a1,
      v2,
      v3);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
