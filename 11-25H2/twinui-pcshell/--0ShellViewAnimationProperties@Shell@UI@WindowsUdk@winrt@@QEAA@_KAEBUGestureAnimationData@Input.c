/*
 * XREFs of ??0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input@234@@Z @ 0x1802A4328
 * Callers:
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180674E78 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x1806750AC (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBUGestureAnimationData@Input@UI@WindowsUdk@3@@Z @ 0x1802A43DC (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAn.c)
 *     ??$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@?$factory_cache_entry@UShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@UIShellViewAnimationPropertiesFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_048acaf127f395b888e969740535bc64_@@@Z @ 0x180674C2C (--$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@-$factory_cache_entry@UShellViewAnimatio.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties *__fastcall winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties::ShellViewAnimationProperties(
        winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties *this,
        __int64 a2,
        const struct winrt::WindowsUdk::UI::Input::GestureAnimationData *a3)
{
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  const struct winrt::WindowsUdk::UI::Input::GestureAnimationData *v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5 = &v7;
  v6 = a3;
  _InterlockedIncrement64(&qword_18089B178);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory<winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>,
      this,
      v7,
      a3,
      v5,
      v6);
    _InterlockedDecrement64(&qword_18089B178);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B178);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties,winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::call<_lambda_048acaf127f395b888e969740535bc64_ &>(
      this,
      this,
      &v5);
  }
  return this;
}
