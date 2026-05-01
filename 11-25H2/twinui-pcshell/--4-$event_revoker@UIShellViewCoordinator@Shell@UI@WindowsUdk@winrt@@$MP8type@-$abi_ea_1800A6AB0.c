/*
 * XREFs of ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A6AB0
 * Callers:
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800A4C80 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BEBF8 (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BFBEC (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801CABAC (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18021BBE0 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180245368 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180250530 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180292C80 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$swap@U?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1800A6B3C (--$swap@U-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU-.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1800A6D40 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1801CB188 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 */

__int64 __fastcall __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v7 = v2;
  v8 = a2[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,0>(&v7, a1);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  v8 = v4;
  if ( v7 )
  {
    v6 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(&v7, &v9);
    _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
      &v7,
      v6);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  }
  return a1;
}
