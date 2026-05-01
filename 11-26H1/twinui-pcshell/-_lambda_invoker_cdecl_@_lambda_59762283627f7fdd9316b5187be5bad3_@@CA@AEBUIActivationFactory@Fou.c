/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_59762283627f7fdd9316b5187be5bad3_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805361A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1802C4370 (--$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFa.c)
 */

struct IUnknown *__fastcall _lambda_59762283627f7fdd9316b5187be5bad3_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions>(
    a2,
    a1);
  return a1;
}
