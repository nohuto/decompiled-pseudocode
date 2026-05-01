/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18030E1E8
 * Callers:
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180312814 (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18034D148 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU-$IAsyncOperation@_N@Foundation@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
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
    if ( !memcmp_0(&GUID_bafa21d8_b071_4cd8_853e_341203e557d3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v6;
    }
    else
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
             v6,
             &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v4;
}
