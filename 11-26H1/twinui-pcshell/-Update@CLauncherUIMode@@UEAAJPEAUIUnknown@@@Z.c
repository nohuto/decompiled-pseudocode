/*
 * XREFs of ?Update@CLauncherUIMode@@UEAAJPEAUIUnknown@@@Z @ 0x18039C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@XZ @ 0x18039A244 (--$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIServiceProvider@@@WRL@Micro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherUIMode::Update(CLauncherUIMode *this, struct IUnknown *a2)
{
  __int64 v3; // rbx
  int (__fastcall *v4)(__int64, void *, GUID *, __int64 *); // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  CWRLObjectWithGITSite::Site<IServiceProvider>((__int64)this - 96, &v7);
  v3 = v7;
  if ( v7 )
  {
    v6 = 0LL;
    v4 = *(int (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v6);
    if ( v4(v3, &unk_1807A0BF8, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v6) >= 0 )
      (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v6 + 24LL))(v6, a2);
    Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return 0LL;
}
