/*
 * XREFs of ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1801B3FDC
 * Callers:
 *     ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x1801B3AE0 (--$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA-AV-$unique_ptr@V.c)
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1801B3F74 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x1806ABC98 (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 * Callees:
 *     ??$call@P6A?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUISettings@ViewManagement@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1801B4054 (--$call@P6A-AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@.c)
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUISettings@ViewManagement@UI@23@XZ @ 0x1801B4208 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::UI::ViewManagement::UISettings *__fastcall winrt::Windows::UI::ViewManagement::UISettings::UISettings(
        winrt::Windows::UI::ViewManagement::UISettings *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &qword_1808DC078;
  _InterlockedIncrement64(&qword_1808DC078);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DC078);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC078);
    v3 = (__int64 *)_lambda_77e8a3ab06a5cb26a73e1a01080e75dd_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::UISettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
