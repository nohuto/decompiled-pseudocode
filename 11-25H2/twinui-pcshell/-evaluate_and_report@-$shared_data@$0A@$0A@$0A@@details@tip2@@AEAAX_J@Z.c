/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18028B7E8
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18028AF88 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     TestReport @ 0x18019644C (TestReport.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x1801964A0 (tip_details_GetKernelBaseModuleHandle.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D77D0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18028BA7C (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18028C10C (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?evaluate@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028C1D4 (-evaluate@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 *a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  const struct wil::FailureInfo *error; // rax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v14; // rcx
  const struct tip2::test_requirement *v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+40h] [rbp-C0h]
  __int128 v19; // [rsp+44h] [rbp-BCh]
  int v20; // [rsp+54h] [rbp-ACh]
  char v21; // [rsp+58h] [rbp-A8h]
  __int16 v22; // [rsp+5Ah] [rbp-A6h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int16 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+9Ch] [rbp-64h]
  int v30; // [rsp+A0h] [rbp-60h]
  void *v31; // [rsp+B0h] [rbp-50h] BYREF
  char v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+B9h] [rbp-47h] BYREF
  char v34; // [rsp+BDh] [rbp-43h]
  char v35; // [rsp+BEh] [rbp-42h] BYREF
  char v36; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v37; // [rsp+8C0h] [rbp+7C0h]
  char *v38; // [rsp+8C8h] [rbp+7C8h]
  char *v39; // [rsp+8D0h] [rbp+7D0h]

  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 1),
         (const struct tip2::test_state *)a1[5],
         (const struct tip2::test_requirement *)a1[7],
         (const struct tip2::test_requirement *)a1[6],
         v15) )
  {
    tip2::details::shared_data<0,0,0>::evaluate(a1);
  }
  v4 = *((_BYTE *)a1 + 160);
  if ( v4 )
  {
    if ( (unsigned __int8)(v4 - 2) > 1u && ((*((_DWORD *)a1 + 5) & 0x1000) == 0 || v4 == 4) )
      goto LABEL_11;
  }
  else
  {
    *((_BYTE *)a1 + 160) = 3;
    *((_WORD *)a1 + 81) = 16394;
    a1[21] = 0LL;
  }
  if ( (a1[8] & 0x800) != 0 )
  {
    v5 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v5 = 0;
LABEL_12:
  v6 = v5;
  v7 = v5 | 2;
  if ( (*((_DWORD *)a1 + 5) & 0x200) == 0 )
    v7 = v5;
  v31 = 0LL;
  v32 = 0;
  v37 = &v33;
  v39 = &v36;
  v33 = -2143256512;
  v34 = 0;
  v38 = &v35;
  if ( (*((_DWORD *)a1 + 5) & 0x200) != 0 )
    v6 = 1;
  v8 = v7 | 4;
  if ( !v6 )
    v8 = v7;
  v9 = tip2::details::shared_data<0,0,0>::serialize_data(a1, &v31, v8);
  memset_0(&v16, 0, 0x78uLL);
  v10 = *((_DWORD *)a1 + 45);
  if ( v10 )
    v16 = *((_DWORD *)a1 + 45);
  else
    v16 = *((_DWORD *)a1 + 4);
  v17 = a1[3];
  v18 = *((_DWORD *)a1 + 5);
  v19 = *((_OWORD *)a1 + 9);
  v20 = *((_DWORD *)a1 + 16) | 0x200000;
  v21 = *((_BYTE *)a1 + 160);
  v22 = *((_WORD *)a1 + 81);
  v23 = a1[21];
  v24 = a2;
  v25 = v9;
  v29 = *((_DWORD *)a1 + 44);
  if ( v10 )
    v30 = *((_DWORD *)a1 + 4);
  else
    v30 = 0;
  error = tip2::test_state::last_error((tip2::test_state *)(a1 + 1));
  if ( error )
  {
    v26 = *((_DWORD *)error + 2);
    v27 = *((_QWORD *)error + 7);
    v28 = *((_WORD *)error + 32);
  }
  ProcAddress = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport
    || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestReport"),
        (`TestReport'::`2'::s_pfnTestReport = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(int *))ProcAddress)(&v16);
  }
  v14 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v14, 0LL, 0LL, 0LL, &v16) )
    {
      v22 = 16398;
      v21 = 3;
      TestReport((__int64)&v16);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v16);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v31);
}
