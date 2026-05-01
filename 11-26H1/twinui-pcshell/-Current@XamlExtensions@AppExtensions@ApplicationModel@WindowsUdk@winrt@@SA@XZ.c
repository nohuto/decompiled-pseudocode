/*
 * XREFs of ?Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1800A1B4C
 * Callers:
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002B850 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A1A68 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180025A54 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtensionsStatics@2345@@Z@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@2@AEBUIXamlExtensionsStatics@4562@@Z@Z @ 0x18020DD7C (--$call@P6A-AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtension.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions::Current(_QWORD *a1)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = &qword_1808DBDE8;
  _InterlockedIncrement64(&qword_1808DBDE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DBDE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBDE8);
    v3 = (__int64 *)_lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>::call<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions (*)(winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
