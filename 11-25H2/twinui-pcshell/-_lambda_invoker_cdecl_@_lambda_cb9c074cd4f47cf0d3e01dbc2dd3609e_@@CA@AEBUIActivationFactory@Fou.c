/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805BA5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x1805BA7DC (--$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivatio.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
    a2,
    a1);
  return a1;
}
