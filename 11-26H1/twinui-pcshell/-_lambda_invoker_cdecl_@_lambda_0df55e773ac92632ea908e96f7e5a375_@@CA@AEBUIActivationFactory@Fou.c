/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0df55e773ac92632ea908e96f7e5a375_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18038BE20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18020A2E0 (--$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foun.c)
 */

struct IUnknown *__fastcall _lambda_0df55e773ac92632ea908e96f7e5a375_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>(
    a2,
    a1);
  return a1;
}
