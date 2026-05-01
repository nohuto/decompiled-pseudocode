/*
 * XREFs of ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x18048660C
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180486180 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AllUpViewUriHandler::ShowAllUpView(__int64 a1, unsigned int a2)
{
  LPVOID v3; // rbx
  __int64 (__fastcall *v4)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
  CoCreateInstance(
    &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
    0LL,
    0x404u,
    &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
    ppv);
  v9 = 0LL;
  v3 = ppv[0];
  v4 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v5 = v4(v3, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 0LL, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 69LL;
  }
  else
  {
    v7 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
  return v6;
}
