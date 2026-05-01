/*
 * XREFs of ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1800A6C98
 * Callers:
 *     ?unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18022D9B0 (-unsubscribe_from_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x180251150 (-ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18025A850 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x18035DCB0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180364810 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x18038F2B0 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ??1InputAppViewCoodinatorHandler@@UEAA@XZ @ 0x18045C7AC (--1InputAppViewCoodinatorHandler@@UEAA@XZ.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805B9430 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     ?shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805D3D00 (-shutdown_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIPro.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_9TouchKeyboardExperienceManager@@$BDI@AA @ 0x180342540 (--_9TouchKeyboardExperienceManager@@$BDI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v4 = v1;
  if ( v1 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,
      &v5);
    v3 = v5;
    if ( v5 )
       TouchKeyboardExperienceManager::`vcall'{56,{flat}}(v5, a1[1]);
  }
  else
  {
    v3 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  if ( v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
}
