/*
 * XREFs of ?revoke_impl@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@AEAAXUIUIElement@Xaml@UI@Windows@3@@Z @ 0x1802A9530
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801C1220 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@QEAA@XZ @ 0x1806ABFF0 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1806ABFF0.c)
 * Callees:
 *     ??_9type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BBIA@AA @ 0x1806ACC60 (--_9type@-$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BBIA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_winrt__AEAAXUIUIElement_Xaml_UI_Windows_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  if ( *(_QWORD *)a2 )
     winrt::impl::abi<winrt::Windows::UI::Xaml::IUIElement,void>::type::`vcall'{384,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
