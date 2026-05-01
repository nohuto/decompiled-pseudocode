/*
 * XREFs of ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1800DB030
 * Callers:
 *     ?unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18021E710 (-unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x180245740 (-ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180253A10 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180364AC0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x18036BA20 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1803965D0 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ??1InputAppViewCoodinatorHandler@@UEAA@XZ @ 0x180468AB4 (--1InputAppViewCoodinatorHandler@@UEAA@XZ.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805DCF60 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     ?shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805F8760 (-shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIPro.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_9TouchKeyboardExperienceManager@@$BDI@AA @ 0x180344D70 (--_9TouchKeyboardExperienceManager@@$BDI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v3 = v1;
  v4 = 0LL;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,
      &v4);
    if ( v4 )
       TouchKeyboardExperienceManager::`vcall'{56,{flat}}(v4, a1[1]);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  if ( v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v3);
}
