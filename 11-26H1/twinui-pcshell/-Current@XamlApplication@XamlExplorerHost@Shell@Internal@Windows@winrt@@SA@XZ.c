/*
 * XREFs of ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B640C
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x1801F68EC (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180025A54 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEBUIXamlApplicationStatics@23456@@Z@?$factory_cache_entry@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@2@AEBUIXamlApplicationStatics@45672@@Z@Z @ 0x18049FAF4 (--$call@P6A-AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEBUIXamlApplicatio.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(_QWORD *a1)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = &qword_1808DCE98;
  _InterlockedIncrement64(&qword_1808DCE98);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DCE98);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCE98);
    v3 = (__int64 *)_lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::call<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication (*)(winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
