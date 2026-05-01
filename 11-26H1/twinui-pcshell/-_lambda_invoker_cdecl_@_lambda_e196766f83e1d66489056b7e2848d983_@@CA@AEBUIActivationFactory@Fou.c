/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e196766f83e1d66489056b7e2848d983_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18061D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULauncherOptions@System@23@XZ @ 0x18061D588 (--$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Window.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_e196766f83e1d66489056b7e2848d983_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::System::LauncherOptions>(a2, a1);
  return a1;
}
