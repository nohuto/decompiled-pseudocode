/*
 * XREFs of ??R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802C8488
 * Callers:
 *     ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x1801FEEAC (--$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1802C84BC (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExten.c)
 */

__int64 __fastcall _lambda_17915759651d00fc5bcd487b5cca7e74_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2]);
  return a2;
}
