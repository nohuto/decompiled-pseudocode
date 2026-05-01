/*
 * XREFs of ??0ThemeShadow@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180598624
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$call@AEAV_lambda_3eb1c366f484925012f35460561e6472_@@@?$factory_cache_entry@UThemeShadow@Media@Xaml@UI@Windows@winrt@@UIThemeShadowFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3eb1c366f484925012f35460561e6472_@@@Z @ 0x180597650 (--$call@AEAV_lambda_3eb1c366f484925012f35460561e6472_@@@-$factory_cache_entry@UThemeShadow@Media.c)
 *     ??R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180598984 (--R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Window.c)
 */

winrt::Windows::UI::Xaml::Media::ThemeShadow *__fastcall winrt::Windows::UI::Xaml::Media::ThemeShadow::ThemeShadow(
        winrt::Windows::UI::Xaml::Media::ThemeShadow *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v3[0] = &v6;
  v3[1] = &v5;
  _InterlockedIncrement64(&qword_1808DD318);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory> )
  {
    _lambda_9385b473f465738bc2d277d457f6f118_::operator()(
      v3,
      &v4,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>);
    _InterlockedDecrement64(&qword_1808DD318);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD318);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::ThemeShadow,winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>::call<_lambda_3eb1c366f484925012f35460561e6472_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))this,
      (__int64)&v4,
      (__int64)v3);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
