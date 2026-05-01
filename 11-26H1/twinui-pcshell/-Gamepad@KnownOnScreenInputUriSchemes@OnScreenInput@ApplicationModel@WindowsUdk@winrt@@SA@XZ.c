/*
 * XREFs of ?Gamepad@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18046CA5C
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180145528 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803AF4D8 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics4@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x180466230 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@Application.c)
 */

__int64 *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Gamepad(
        __int64 *a1)
{
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64))&qword_1808DCC98;
  _InterlockedIncrement64(&qword_1808DCC98);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4> )
  {
    _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
      (__int64)a1,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>);
    _InterlockedDecrement64(&qword_1808DCC98);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCC98);
    v3 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4 const &)>(
      a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
