/*
 * XREFs of ??R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1801D4C10
 * Callers:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1801D4C3C (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ??$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@Z @ 0x180440F60 (--$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x1804414F8 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180288170 (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 */

__int64 __fastcall _lambda_9da9a377ea2426f3d5421a6be20021de_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Microsoft_UI_Xaml_IApplicationFactory<winrt::Microsoft::UI::Xaml::IApplicationFactory>::CreateInstance(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
