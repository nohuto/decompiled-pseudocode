/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800239E8
 * Callers:
 *     ??R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ @ 0x18002B028 (--R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
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
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v4;
}
