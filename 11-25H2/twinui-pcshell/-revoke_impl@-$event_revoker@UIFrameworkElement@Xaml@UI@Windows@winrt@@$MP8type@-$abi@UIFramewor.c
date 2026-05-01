/*
 * XREFs of ?revoke_impl@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@AEAAXUIFrameworkElement@Xaml@UI@Windows@3@@Z @ 0x1801017DC
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801018C0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?revoke@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAAXXZ @ 0x180102430 (-revoke@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UI_ea_180102430.c)
 *     ??1?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAA@XZ @ 0x1801047E4 (--1-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrame_ea_1801047E4.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@QEAA@XZ @ 0x180684BAC (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_180684BAC.c)
 * Callees:
 *     ??_9type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BBHA@AA @ 0x18058E6B4 (--_9type@-$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BBHA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBHA_AA_impl_winrt__AEAAXUIFrameworkElement_Xaml_UI_Windows_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  if ( *(_QWORD *)a2 )
     winrt::impl::abi<winrt::Windows::UI::Xaml::IUIElement,void>::type::`vcall'{368,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
