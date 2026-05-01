/*
 * XREFs of ??0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input@234@@Z @ 0x18029D9D8
 * Callers:
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069BBD8 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18069BE40 (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 * Callees:
 *     ??R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18029DA58 (--R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shel.c)
 *     ??$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@?$factory_cache_entry@UShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@UIShellViewAnimationPropertiesFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_048acaf127f395b888e969740535bc64_@@@Z @ 0x18069B96C (--$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@-$factory_cache_entry@UShellViewAnimatio.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties *__fastcall winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties::ShellViewAnimationProperties(
        winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties *this,
        __int64 a2,
        const struct winrt::WindowsUdk::UI::Input::GestureAnimationData *a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5[0] = &v6;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DB8C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory> )
  {
    _lambda_048acaf127f395b888e969740535bc64_::operator()(
      v5,
      this,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>);
    _InterlockedDecrement64(&qword_1808DB8C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB8C8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::call<_lambda_048acaf127f395b888e969740535bc64_ &>(
      this,
      this,
      v5);
  }
  return this;
}
