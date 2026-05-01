/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DD980
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x18027AC74 (--$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationF.c)
 */

struct IUnknown *__fastcall _lambda_6642fb088f192eae1a0f474d97eaf06a_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
    a2,
    a1);
  return a1;
}
