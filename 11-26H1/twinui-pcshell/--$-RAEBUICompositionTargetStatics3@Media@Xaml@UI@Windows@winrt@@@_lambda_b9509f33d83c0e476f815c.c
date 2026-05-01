/*
 * XREFs of ??$?RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815cbceb4935ba_@@QEBA?A_PAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180218ACC
 * Callers:
 *     ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x18022127C (--$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@-$factory_cache_entry@UCompositionTarget.c)
 *     ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x1806B0910 (-Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU-$EventHandler@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_b9509f33d83c0e476f815cbceb4935ba_::operator()<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3 const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
