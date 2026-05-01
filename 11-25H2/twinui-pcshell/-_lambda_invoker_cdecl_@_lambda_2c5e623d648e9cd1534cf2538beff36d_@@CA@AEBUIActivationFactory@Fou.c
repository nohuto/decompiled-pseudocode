/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_2c5e623d648e9cd1534cf2538beff36d_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805BA540
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x1805BA8B0 (--$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivati.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_2c5e623d648e9cd1534cf2538beff36d_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
    a2,
    a1);
  return a1;
}
