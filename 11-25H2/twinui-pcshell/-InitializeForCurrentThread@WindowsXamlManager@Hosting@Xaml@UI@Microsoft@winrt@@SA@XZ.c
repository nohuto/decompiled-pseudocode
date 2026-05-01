/*
 * XREFs of ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18043EF7C
 * Callers:
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x18043E530 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180447410 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18043E000 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics.c)
 */

_QWORD *__fastcall winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(_QWORD *a1)
{
  const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089C348);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089C348);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C348);
    v3 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
