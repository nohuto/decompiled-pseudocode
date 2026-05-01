/*
 * XREFs of ??R_lambda_7b7c9298bfeaa6f21443744179c3c395_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802230F0
 * Callers:
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802B4E7C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802B4E7C.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1803CEF00 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803CF530 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactorySt_ea_1803CF530.c)
 */

__int64 __fastcall _lambda_7b7c9298bfeaa6f21443744179c3c395_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
