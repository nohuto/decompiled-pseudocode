/*
 * XREFs of ??1?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x1806ABEF0
 * Callers:
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x1806AC1F8 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1806AC3F8 (--4-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase@.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AF810 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$16 @ 0x180707315 (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$16.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?revoke_impl@?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@AEAAXUIListViewBase@Controls@Xaml@UI@Windows@3@@Z @ 0x1801C1714 (-revoke_impl@-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UILis.c)
 *     ?get@?$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801C1744 (-get@-$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase>::get(
                                                                                               a1,
                                                                                               &v3);
    _revoke_impl___event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__AEAAXUIListViewBase_Controls_Xaml_UI_Windows_3__Z(
      (__int64)a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
