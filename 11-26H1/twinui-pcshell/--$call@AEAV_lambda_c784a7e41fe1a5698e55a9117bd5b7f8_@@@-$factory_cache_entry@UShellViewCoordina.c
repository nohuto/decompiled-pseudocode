/*
 * XREFs of ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x180053E20
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800524C0 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800530D8 (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180053FE0 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 *     ?subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800541D0 (-subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x18005432C (--0TouchEdgeGestureManager@@QEAA@XZ.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800547DC (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180054CA0 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180055AA0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18028A2D0 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1800547B4 (--R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@.c)
 *     ??$get_activation_factory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180054BA8 (--$get_activation_factory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AU.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  v10[0] = 1;
  v10[1] = 40;
  v11 = L"WindowsUdk.UI.Shell.ShellViewCoordinator";
  v9 = v10;
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>(&v12, &v9);
  v5 = (signed __int64)v12;
  v13 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  if ( !v13 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
  if ( v7 )
  {
    v13 = &qword_1808DB788;
    _InterlockedIncrement64(&qword_1808DB788);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
            v5,
            0LL) )
    {
      v5 = 0LL;
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    _lambda_cdfc71d4e5fb339911b9247de9cec5c2_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>);
    _InterlockedDecrement64(&qword_1808DB788);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    _lambda_cdfc71d4e5fb339911b9247de9cec5c2_::operator()(a3, a2, &v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  return a2;
}
