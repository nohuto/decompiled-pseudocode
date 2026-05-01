/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_294131ddbaaaaf7894731207a68c541a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180445860
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@3@XZ @ 0x1802A8978 (--$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IAc.c)
 */

struct IUnknown *__fastcall _lambda_294131ddbaaaaf7894731207a68c541a_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>(
    a2,
    a1);
  return a1;
}
