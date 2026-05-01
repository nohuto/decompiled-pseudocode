/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_ad8d6bf895fdeda767c5ede3379139c0_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DD9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1805DD9D8 (--$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActiva.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_ad8d6bf895fdeda767c5ede3379139c0_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>(
    a2,
    a1);
  return a1;
}
