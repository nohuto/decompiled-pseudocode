/*
 * XREFs of ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x1801FEE28
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180274D70 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x1801FEEAC (--$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1802C84BC (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExten.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        const struct winrt::param::hstring *a1,
        const struct winrt::param::hstring *a2,
        const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *a3,
        __int64 a4)
{
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v6[2] = a4;
  _InterlockedIncrement64(&qword_18089B6E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
      (unsigned int)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      a4);
    _InterlockedDecrement64(&qword_18089B6E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B6E8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_17915759651d00fc5bcd487b5cca7e74_ &>(
      a1,
      a1,
      v6);
  }
  return a1;
}
