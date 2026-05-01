/*
 * XREFs of ??0XamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x1802A1220
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A1A68 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 * Callees:
 *     ??$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@3@XZ @ 0x1802A1298 (--$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IAc.c)
 *     ??$call@P6A?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1804522B0 (--$call@P6A-AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@AEBUIActiva.c)
 */

winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider *__fastcall winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider::XamlControlsXamlMetaDataProvider(
        winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &qword_1808DCA38;
  _InterlockedIncrement64(&qword_1808DCA38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DCA38);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCA38);
    v3 = (__int64 *)_lambda_294131ddbaaaaf7894731207a68c541a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
