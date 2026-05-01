/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801BE144
 * Callers:
 *     ??R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z @ 0x1801BDF08 (--R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z.c)
 *     ??R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z @ 0x180459758 (--R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  *a2 = 0LL;
  v6 = 0LL;
  v4 = RoActivateInstance(a1, &v6);
  if ( v4 >= 0 )
  {
    if ( !memcmp_0(&GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v6;
    }
    else
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
             v6,
             &GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v4;
}
