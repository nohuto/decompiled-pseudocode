/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x1800D6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v2; // esi
  int (__fastcall *v3)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, HSTRING, unsigned int *); // rdi
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  v2 = 6;
  v16 = 0LL;
  v3 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a1 + 352LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  if ( v3(a1, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v16) >= 0 )
  {
    v15 = 0LL;
    v4 = v16;
    v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( v5(v4, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v15) >= 0 )
    {
      v14 = 0;
      v9 = v15;
      v10 = *(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v15 + 368LL);
      string = 0LL;
      v11 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v11 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
        JUMPOUT(0x1800D6BF4LL);
      }
      if ( v10(v9, string, &v14) >= 0 )
        v2 = v14;
    }
    v6 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v2;
}
