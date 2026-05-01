/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C772C
 * Callers:
 *     ??R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z @ 0x1801C7500 (--R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z.c)
 *     ??R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z @ 0x18044D0E8 (--R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIShellLauncherManager@ShellLauncher@Shell@Internal@1@@Z @ 0x1801C7764 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@Foundation@Win.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return Windows::Foundation::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(a1, a2);
}
