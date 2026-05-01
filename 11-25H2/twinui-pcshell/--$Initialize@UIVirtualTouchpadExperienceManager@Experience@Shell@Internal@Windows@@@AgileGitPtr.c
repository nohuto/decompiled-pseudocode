/*
 * XREFs of ??$Initialize@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1802AE518
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BFBEC (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AgileGitPtr::Initialize<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int AgileReference; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0LL;
  v9 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, v3, &v9);
    v4 = v9;
  }
  v6 = 0LL;
  v9 = 0LL;
  v7 = *a1;
  *a1 = v4;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v9;
  }
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return AgileReference;
}
