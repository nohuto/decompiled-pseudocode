/*
 * XREFs of ?GetDefault@SearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@SA@XZ @ 0x1803ABC6C
 * Callers:
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1803B082C (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ??$call@P6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISearchPolicySettingsStatics@23456@@Z@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEBUISearchPolicySettingsStatics@45672@@Z@Z @ 0x18039FF80 (--$call@P6A-AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISear.c)
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803A62D8 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings::GetDefault(_QWORD *a1)
{
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089B978);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics> )
  {
    _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
      (__int64)a1,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>);
    _InterlockedDecrement64(&qword_18089B978);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B978);
    v3 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::call<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings (*)(winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
