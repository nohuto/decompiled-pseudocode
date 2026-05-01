/*
 * XREFs of ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1800DAFC4
 * Callers:
 *     ?unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18021E710 (-unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x180245740 (-ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180253A10 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180364AC0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x18036BA20 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x18038C1C0 (-Close@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1803965D0 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ??1InputAppViewCoodinatorHandler@@UEAA@XZ @ 0x180468AB4 (--1InputAppViewCoodinatorHandler@@UEAA@XZ.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805DCF60 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     ?shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805F8760 (-shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIPro.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1800DB0D8 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??_9type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA @ 0x1802C1460 (--_9type@-$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BEI@AA.c)
 */

void __fastcall _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v4 = v1;
  v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(
                                                                                             &v4,
                                                                                             &v5);
  if ( *(_QWORD *)v3 )
     winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}}(
      *(_QWORD *)v3,
      a1[1]);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v3);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
}
