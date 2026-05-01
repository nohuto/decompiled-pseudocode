/*
 * XREFs of ?Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1801B5480
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B51BC (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B52A4 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtensionsStatics@2345@@Z@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@2@AEBUIXamlExtensionsStatics@4562@@Z@Z @ 0x18021BDD0 (--$call@P6A-AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtension.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions::Current(_QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089B6A8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089B6A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B6A8);
    v3 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>::call<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions (*)(winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
