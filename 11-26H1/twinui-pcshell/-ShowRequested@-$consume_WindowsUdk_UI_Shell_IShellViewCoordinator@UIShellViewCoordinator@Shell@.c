/*
 * XREFs of ?ShowRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18028B108
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800524C0 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800530D8 (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180053FE0 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180054CA0 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A3154 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C4C5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180236268 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180238378 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180244B60 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18028A2D0 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     ??$?0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x1801CFEAC (--$-0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@-$weak_ref@UIToastNotification@Not.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ShowRequested(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+20h] [rbp-48h] BYREF
  char v13[4]; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h]

  v12 = a2;
  v5 = *a1;
  v7 = *a4;
  v12 = 0LL;
  v14 = 0;
  v8 = *v5;
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v8 + 48))(v5, v7, &v12);
  winrt::check_hresult(v13, v9, &v14);
  v10 = v12;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    a2,
    (__int64)a1);
  result = a2;
  a2[1] = v10;
  return result;
}
