/*
 * XREFs of ?GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ @ 0x180066A28
 * Callers:
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800668F0 (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUCoreWindow@Core@UI@Windows@winrt@@AEBUICoreWindowStatic@2345@@Z@?$factory_cache_entry@UCoreWindow@Core@UI@Windows@winrt@@UICoreWindowStatic@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUCoreWindow@Core@UI@Windows@2@AEBUICoreWindowStatic@4562@@Z@Z @ 0x18023D29C (--$call@P6A-AUCoreWindow@Core@UI@Windows@winrt@@AEBUICoreWindowStatic@2345@@Z@-$factory_cache_en.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::UI::Core::CoreWindow::GetForCurrentThread(_QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089B278);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>,
      a1);
    _InterlockedDecrement64(&qword_18089B278);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B278);
    v3 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>::call<winrt::Windows::UI::Core::CoreWindow (*)(winrt::Windows::UI::Core::ICoreWindowStatic const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
