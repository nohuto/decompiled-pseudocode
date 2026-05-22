/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A3A10
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800A35AC (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A30A4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?evaluate@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800A38E4 (-evaluate@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800A3C44 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800A3F18 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?on_result@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z @ 0x1800A3FD0 (-on_result@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800A496C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestReport @ 0x1800A513C (TestReport.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  char v4; // al
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // edx
  _DWORD *v12; // rcx
  __int128 v13; // xmm0
  int v14; // eax
  const struct wil::FailureInfo *error; // rax
  const struct tip2::test_requirement *v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+30h] [rbp-D0h]
  __int128 v18; // [rsp+34h] [rbp-CCh]
  int v19; // [rsp+44h] [rbp-BCh]
  char v20; // [rsp+48h] [rbp-B8h]
  __int16 v21; // [rsp+4Ah] [rbp-B6h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int16 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+90h] [rbp-70h]
  void *v30; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+A9h] [rbp-57h] BYREF
  char v33; // [rsp+ADh] [rbp-53h]
  char v34; // [rsp+AEh] [rbp-52h] BYREF
  char v35; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v36; // [rsp+8B0h] [rbp+7B0h]
  char *v37; // [rsp+8B8h] [rbp+7B8h]
  char *v38; // [rsp+8C0h] [rbp+7C0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v16[0]) )
  {
    tip2::details::shared_data<0,0,0>::evaluate(a1);
  }
  v4 = *(_BYTE *)(a1 + 160);
  if ( v4 != 5 )
  {
    if ( v4 )
    {
      if ( v4 != 2 && v4 != 3 && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v4 == 4) )
        goto LABEL_13;
    }
    else
    {
      *(_BYTE *)(a1 + 160) = 3;
      *(_WORD *)(a1 + 162) = 16394;
      *(_QWORD *)(a1 + 168) = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
    {
      v5 = 1;
LABEL_14:
      v6 = v5;
      v36 = &v32;
      v7 = v5 | 2;
      v30 = 0LL;
      v8 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      v38 = &v35;
      if ( v8 )
        v7 = v5;
      v37 = &v34;
      if ( !v8 )
        v6 = 1;
      v31 = 0;
      v32 = -2143256512;
      v9 = v7 | 4;
      v33 = 0;
      if ( !v6 )
        v9 = v7;
      v10 = tip2::details::shared_data<0,0,0>::serialize_data(a1, &v30, v9);
      memset_0(v16, 0, 0x78uLL);
      v11 = *(_DWORD *)(a1 + 180);
      v12 = (_DWORD *)(a1 + 16);
      if ( v11 )
        LODWORD(v16[0]) = *(_DWORD *)(a1 + 180);
      else
        LODWORD(v16[0]) = *v12;
      v13 = *(_OWORD *)(a1 + 144);
      v16[1] = *(const struct tip2::test_requirement **)(a1 + 24);
      v17 = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 64) | 0x200000;
      v23 = a2;
      v19 = v14;
      v20 = *(_BYTE *)(a1 + 160);
      v21 = *(_WORD *)(a1 + 162);
      v22 = *(_QWORD *)(a1 + 168);
      v28 = *(_DWORD *)(a1 + 176);
      v24 = v10;
      v18 = v13;
      if ( v11 )
        v29 = *v12;
      else
        v29 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 8));
      if ( error )
      {
        v25 = *((_DWORD *)error + 2);
        v26 = *((_QWORD *)error + 7);
        v27 = *((_WORD *)error + 32);
      }
      TestReport(v16);
      tip2::details::shared_data<0,0,0>::on_result(a1, v16);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v30);
      return;
    }
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
}
