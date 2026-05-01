/*
 * XREFs of ?Gamepad@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1804604BC
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180098170 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803A62D8 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics4@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x180459FE4 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics4@OnScreenInput@Application.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Gamepad(
        _QWORD *a1)
{
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089C618);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4> )
  {
    _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
      (__int64)a1,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>);
    _InterlockedDecrement64(&qword_18089C618);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C618);
    v3 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4 const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
