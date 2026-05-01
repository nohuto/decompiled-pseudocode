/*
 * XREFs of ??$AsWeak@VCJumpViewExperienceManager@@@WRL@Microsoft@@YAJPEAVCJumpViewExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B2E9C
 * Callers:
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180055AA0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180181D80 (-QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<CJumpViewExperienceManager>(CJumpViewExperienceManager *a1, void **a2)
{
  int v3; // ebx
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  void *v10; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  v3 = CJumpViewExperienceManager::QueryInterface(a1, &GUID_00000038_0000_0000_c000_000000000046, &v10);
  if ( v3 >= 0 )
  {
    v9 = 0LL;
    v5 = v10;
    v6 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v9);
    if ( v6 >= 0 )
    {
      v7 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v8 = 0LL;
      v10 = *a2;
      *a2 = (void *)v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      if ( v5 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
      return 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      if ( v5 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
      return (unsigned int)v6;
    }
  }
  else
  {
    if ( v10 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    return (unsigned int)v3;
  }
}
