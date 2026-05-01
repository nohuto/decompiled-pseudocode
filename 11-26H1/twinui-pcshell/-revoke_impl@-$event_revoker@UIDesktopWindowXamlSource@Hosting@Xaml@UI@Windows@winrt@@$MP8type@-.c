/*
 * XREFs of ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x1801C1694
 * Callers:
 *     ??1?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180027664 (--1-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIDes.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800F8858 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801C1220 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1801E4BF4 (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ??1?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18022F484 (--1-$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase.c)
 *     ??4?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802A5010 (--4-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@-$abi.c)
 *     ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802A8518 (--4-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIDes.c)
 *     ??1?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1802C1784 (--1-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@-$abi.c)
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x18044CEB4 (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@She_ea_18044CEB4.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180468C54 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ??_9ITabletModeController@@$BFA@AA @ 0x18036B6D0 (--_9ITabletModeController@@$BFA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  if ( *(_QWORD *)a2 )
     ITabletModeController::`vcall'{80,{flat}}(*(_QWORD *)a2, *(_QWORD *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
