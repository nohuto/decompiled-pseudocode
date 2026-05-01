/*
 * XREFs of ??R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x18063F6A4
 * Callers:
 *     ??$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@Z @ 0x18063C7A8 (--$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ?FindUriSchemeHandlersAsync@Launcher@System@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x180640110 (-FindUriSchemeHandlersAsync@Launcher@System@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 * Callees:
 *     ?FindUriSchemeHandlersAsync@?$consume_Windows_System_ILauncherStatics2@UILauncherStatics2@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806400AC (-FindUriSchemeHandlersAsync@-$consume_Windows_System_ILauncherStatics2@UILauncherStatics2@System.c)
 */

__int64 __fastcall _lambda_adc4b1de82694fc8d054373ced810589_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_System_ILauncherStatics2<winrt::Windows::System::ILauncherStatics2>::FindUriSchemeHandlersAsync(
    a3,
    a2,
    *a1);
  return a2;
}
