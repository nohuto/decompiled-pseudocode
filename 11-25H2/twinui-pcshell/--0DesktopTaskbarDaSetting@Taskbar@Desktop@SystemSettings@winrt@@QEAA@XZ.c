/*
 * XREFs of ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801BAF2C
 * Callers:
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801BAEB0 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805BA0DC (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z @ 0x1805BA2D4 (-SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z.c)
 * Callees:
 *     ??$call@P6A?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801BAFA4 (--$call@P6A-AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFacto.c)
 *     ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x180283934 (--$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationF.c)
 */

winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting *__fastcall winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting(
        winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting *this)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089D138);
  if ( winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
      &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_18089D138);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D138);
    v3 = _lambda_6642fb088f192eae1a0f474d97eaf06a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>::call<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
