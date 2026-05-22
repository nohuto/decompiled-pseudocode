/*
 * XREFs of ?GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBUWindowId@23456@@Z @ 0x18004AB8C
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x180161A18 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 * Callees:
 *     ??R_lambda_6e68f4fcde6472322112b953134f760c_@@QEBA@AEBUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x18004AC00 (--R_lambda_6e68f4fcde6472322112b953134f760c_@@QEBA@AEBUIAppViewStatics@WindowManagement@Applicat.c)
 *     ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x1800A77E8 (--$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *__fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::GetFromWindowId(
        const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_180253D28;
  _InterlockedIncrement64(&qword_180253D28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics> )
  {
    _lambda_6e68f4fcde6472322112b953134f760c_::operator()(
      &v4,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>);
    _InterlockedDecrement64(&qword_180253D28);
  }
  else
  {
    _InterlockedDecrement64(&qword_180253D28);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
