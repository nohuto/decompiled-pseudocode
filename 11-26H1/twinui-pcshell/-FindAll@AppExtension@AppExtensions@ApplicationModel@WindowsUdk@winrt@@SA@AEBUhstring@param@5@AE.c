/*
 * XREFs of ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801DAEA0
 * Callers:
 *     ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x180511BB4 (-ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CFC68 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ??$call_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@V_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x1801DAED0 (--$call_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionSta.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
        const struct winrt::param::hstring *a1,
        const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics,_lambda_6efd2761bda3320a8aa70aa0ac08757d_>(
    a1,
    v5);
  return a1;
}
