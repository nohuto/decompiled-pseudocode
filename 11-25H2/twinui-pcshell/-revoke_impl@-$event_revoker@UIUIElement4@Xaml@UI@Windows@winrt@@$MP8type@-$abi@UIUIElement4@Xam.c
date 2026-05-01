/*
 * XREFs of ?revoke_impl@?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@AEAAXUIUIElement4@Xaml@UI@Windows@3@@Z @ 0x1802A9130
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801018C0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAA@XZ @ 0x180684B6C (--1-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xaml@UI@Windo.c)
 * Callees:
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BII@AA @ 0x1802F5B70 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BII@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__AEAAXUIUIElement4_Xaml_UI_Windows_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 a3)
{
  if ( *(_QWORD *)a2 )
     Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{136,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8),
      a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
