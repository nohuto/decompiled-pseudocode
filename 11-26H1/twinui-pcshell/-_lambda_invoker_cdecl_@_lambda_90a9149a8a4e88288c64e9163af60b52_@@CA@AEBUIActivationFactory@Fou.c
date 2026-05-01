/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_90a9149a8a4e88288c64e9163af60b52_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180596FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAccessibilitySettings@ViewManagement@UI@23@XZ @ 0x1805971C0 (--$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_90a9149a8a4e88288c64e9163af60b52_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::AccessibilitySettings>(
    a2,
    a1);
  return a1;
}
