/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_2826ff66a09a806add86d8b989844be9_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18058E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPhysicalGestureRecognizer@Input@UI@23@XZ @ 0x18058EC10 (--$ActivateInstance@UPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Found.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_2826ff66a09a806add86d8b989844be9_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Input::PhysicalGestureRecognizer>(a2);
  return a1;
}
