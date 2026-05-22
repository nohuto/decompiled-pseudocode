/*
 * XREFs of ??R_lambda_6e68f4fcde6472322112b953134f760c_@@QEBA@AEBUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x18004AC00
 * Callers:
 *     ?GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBUWindowId@23456@@Z @ 0x18004AB8C (-GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBU.c)
 *     ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x1800A77E8 (--$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 * Callees:
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18004AC28 (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 */

__int64 __fastcall _lambda_6e68f4fcde6472322112b953134f760c_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
    a3,
    a2,
    *a1);
  return a2;
}
