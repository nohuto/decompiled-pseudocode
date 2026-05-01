/*
 * XREFs of ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C80BC
 * Callers:
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180249160 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18024FE40 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282748 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180282B00 (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180399060 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805AB9E8 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805AE3A0 (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1801C8164 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x1801C81D0 (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
        const struct winrt::param::hstring *a1,
        const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18089B708);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      a1,
      a2,
      a3);
    _InterlockedDecrement64(&qword_18089B708);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B708);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      a1,
      a1,
      v5);
  }
  return a1;
}
