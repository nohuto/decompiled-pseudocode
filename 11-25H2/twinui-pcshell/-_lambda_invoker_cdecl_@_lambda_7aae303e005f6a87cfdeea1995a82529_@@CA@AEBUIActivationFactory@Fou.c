/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7aae303e005f6a87cfdeea1995a82529_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180573980
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UBorder@Controls@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUBorder@Controls@Xaml@UI@23@XZ @ 0x180573C60 (--$ActivateInstance@UBorder@Controls@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windo.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_7aae303e005f6a87cfdeea1995a82529_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Xaml::Controls::Border>(a2, a1);
  return a1;
}
