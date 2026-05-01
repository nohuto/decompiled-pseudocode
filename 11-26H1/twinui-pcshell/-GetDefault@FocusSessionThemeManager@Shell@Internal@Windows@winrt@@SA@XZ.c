/*
 * XREFs of ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18029C810
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x180233090 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManagerStatics@2345@@Z@?$factory_cache_entry@UFocusSessionThemeManager@Shell@Internal@Windows@winrt@@UIFocusSessionThemeManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUFocusSessionThemeManager@Shell@Internal@Windows@2@AEBUIFocusSessionThemeManagerStatics@4562@@Z@Z @ 0x18020FBA4 (--$call@P6A-AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManag.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::FocusSessionThemeManager::GetDefault(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **))&qword_1808D9F18;
  _InterlockedIncrement64(&qword_1808D9F18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808D9F18);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9F18);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::call<winrt::Windows::Internal::Shell::FocusSessionThemeManager (*)(winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
