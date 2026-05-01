/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18039DC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x1802484B8 (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 */

struct IUnknown *__fastcall _lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
    a2,
    a1);
  return a1;
}
