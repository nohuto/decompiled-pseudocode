/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3b774df9feaf32ce198fda5ed74d0bf7_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1803337C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManagerInternal@Internal@Deployment@Management@23@XZ @ 0x180333944 (--$ActivateInstance@UPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@@IActi.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_3b774df9feaf32ce198fda5ed74d0bf7_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal>(
    a2,
    a1);
  return a1;
}
