/*
 * XREFs of ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA418
 * Callers:
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB658 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::InitializeCursor3D(MPCHolographicInputManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, char *); // rbx
  char *v4; // rsi
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _BYTE *, __int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, GUID *, char *); // rsi
  int v11; // eax
  int v12; // [rsp+20h] [rbp-648h]
  __int64 v13[2]; // [rsp+30h] [rbp-638h] BYREF
  _BYTE v14[4]; // [rsp+40h] [rbp-628h] BYREF
  int v15; // [rsp+44h] [rbp-624h]
  int v16; // [rsp+48h] [rbp-620h]
  wil::details::in1diag3 *retaddr; // [rsp+668h] [rbp+0h]

  v2 = *((_QWORD *)this + 410);
  v3 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL);
  v4 = (char *)this + 3336;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 417);
  v5 = v3(v2, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x406,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v5,
      v12);
  v13[0] = 0LL;
  memset_0(v14, 0, 0x60CuLL);
  v16 = 1548;
  v15 = 514;
  v6 = *(_QWORD *)v4;
  v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64 *))(**(_QWORD **)v4 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  v8 = v7(v6, v14, 1LL, v13);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v8,
      v12);
  v9 = v13[0];
  v10 = **(__int64 (__fastcall ***)(__int64, GUID *, char *))v13[0];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 416);
  v11 = v10(v9, &GUID_a906d320_9167_4955_a961_8a982929b899, (char *)this + 3328);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v11,
      v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
}
