/*
 * XREFs of ??0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x18037F390
 * Callers:
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x1802476C0 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@?$factory_cache_entry@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIDockedStartControllerFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@Z @ 0x18037F1E4 (--$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@-$factory_cache_entry@UDockedStartContro.c)
 *     ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x18037F93C (--R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementat.c)
 */

// Hidden C++ exception states: #wind=4
winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController *__fastcall winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController::DockedStartController(
        winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3[0] = &v6;
  v3[1] = &v4;
  _InterlockedIncrement64(&qword_18089B578);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory> )
  {
    _lambda_801d211dba091c701284f95d6b93acb3_::operator()(
      v3,
      &v5,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>);
    _InterlockedDecrement64(&qword_18089B578);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B578);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>::call<_lambda_801d211dba091c701284f95d6b93acb3_ &>(
      (__int64)this,
      (__int64)&v5,
      (__int64)v3);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
