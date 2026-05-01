/*
 * XREFs of ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1803A7D98
 * Callers:
 *     _lambda_be0595b4d9b1029e6cb699cd383e8153_::operator() @ 0x1803A5F2C (_lambda_be0595b4d9b1029e6cb699cd383e8153_--operator().c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ??$call@P6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@5@@Z@?$factory_cache_entry@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@UIWebSearchProviderStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@2@@Z@Z @ 0x18039FD18 (--$call@P6A-AU-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundatio.c)
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803A62D8 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAll(_QWORD *a1)
{
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089B238);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2> )
  {
    _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
      (__int64)a1,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>);
    _InterlockedDecrement64(&qword_18089B238);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B238);
    v3 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>::call<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider> (*)(winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2 const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
