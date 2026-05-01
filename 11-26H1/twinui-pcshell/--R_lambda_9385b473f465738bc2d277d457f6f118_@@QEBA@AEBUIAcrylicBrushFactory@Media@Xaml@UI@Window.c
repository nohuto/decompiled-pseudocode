/*
 * XREFs of ??R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180598984
 * Callers:
 *     ??$call@AEAV_lambda_3eb1c366f484925012f35460561e6472_@@@?$factory_cache_entry@UThemeShadow@Media@Xaml@UI@Windows@winrt@@UIThemeShadowFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3eb1c366f484925012f35460561e6472_@@@Z @ 0x180597650 (--$call@AEAV_lambda_3eb1c366f484925012f35460561e6472_@@@-$factory_cache_entry@UThemeShadow@Media.c)
 *     ??$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@?$factory_cache_entry@UAcrylicBrush@Media@Xaml@UI@Windows@winrt@@UIAcrylicBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@Z @ 0x180597784 (--$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@-$factory_cache_entry@UAcrylicBrush@Medi.c)
 *     ??$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@?$factory_cache_entry@UGrid@Controls@Xaml@UI@Windows@winrt@@UIGridFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@Z @ 0x1805978B8 (--$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@-$factory_cache_entry@UGrid@Controls@Xam.c)
 *     ??0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180598318 (--0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180598464 (--0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0ThemeShadow@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180598624 (--0ThemeShadow@Media@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180598EDC (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media.c)
 */

__int64 __fastcall _lambda_9385b473f465738bc2d277d457f6f118_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::CreateInstance(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
