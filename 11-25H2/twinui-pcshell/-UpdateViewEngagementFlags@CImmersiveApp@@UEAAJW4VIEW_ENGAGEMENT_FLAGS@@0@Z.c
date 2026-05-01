/*
 * XREFs of ?UpdateViewEngagementFlags@CImmersiveApp@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x1801F76A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::UpdateViewEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  *(_DWORD *)(a1 + 800) |= a2;
  *(_DWORD *)(a1 + 804) = a3 | ~a3 & *(_DWORD *)(a1 + 804);
  if ( a2 )
  {
    v13 = 0LL;
    v5 = a1 + 16;
    v6 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)(a1 + 16) + 352LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v6(v5, 1LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v13) >= 0 )
    {
      v12 = 0LL;
      v7 = v13;
      v8 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      if ( v8(v7, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v12) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 608LL))(v12, a2, a3);
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return 0LL;
}
