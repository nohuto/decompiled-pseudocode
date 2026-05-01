/*
 * XREFs of ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18022A03C
 * Callers:
 *     ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x180349DF0 (-LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Wi.c)
 *     _lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e_::operator() @ 0x1804088FC (_lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e_--operator().c)
 *     _lambda_3f3a2feaac41b41164862428ee94a97b_::operator() @ 0x1804174EC (_lambda_3f3a2feaac41b41164862428ee94a97b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@V1?1???$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@23@YAJ01K2@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@@Z @ 0x180243970 (--$MakeAndInitialize@VCompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@_N@Founda.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *))
{
  HRESULT v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  DWORD dwindex; // [rsp+48h] [rbp-18h] BYREF
  HANDLE pHandles; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  v2 = ___MakeAndInitialize_VCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation__N_Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation__N_Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z_V1_1____WaitForCompletion_PEAU__IAsyncOperation__N_Foundation_Windows___23_YAJ01K2_Z___V_Details_WRL_Microsoft__YAJPEAPEAVCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation__N_Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation__N_Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z__Z(&v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1626LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v2);
    goto LABEL_14;
  }
  v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1627LL;
    goto LABEL_5;
  }
  pHandles = *(HANDLE *)(v7 + 56);
  dwindex = 0;
  v2 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1639LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v7 + 48) == 1 )
  {
    v3 = 0;
  }
  else
  {
    v9 = 0LL;
    v5 = **a1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    v3 = v5(a1, &GUID_00000036_0000_0000_c000_000000000046, &v9);
    if ( v3 >= 0 )
    {
      v8 = -2147418113;
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 64LL))(v9, &v8);
      if ( v3 >= 0 )
        v3 = v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return (unsigned int)v3;
}
