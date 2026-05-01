/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18069A814
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18069A450 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     TestReport @ 0x18018E6E0 (TestReport.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CD1E4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18028B7E0 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18028C144 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18069B244 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,1>::evaluate_and_report(_DWORD *a1, __int64 a2)
{
  char v4; // al
  unsigned __int8 v5; // al
  char v6; // si
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // edx
  int *v11; // rcx
  const struct wil::FailureInfo *error; // rax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+30h] [rbp-D0h]
  __int128 v16; // [rsp+34h] [rbp-CCh]
  int v17; // [rsp+44h] [rbp-BCh]
  char v18; // [rsp+48h] [rbp-B8h]
  __int16 v19; // [rsp+4Ah] [rbp-B6h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int16 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+8Ch] [rbp-74h]
  int v27; // [rsp+90h] [rbp-70h]
  void *v28; // [rsp+A0h] [rbp-60h] BYREF
  char v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+A9h] [rbp-57h] BYREF
  char v31; // [rsp+ADh] [rbp-53h]
  _BYTE v32[2043]; // [rsp+AEh] [rbp-52h] BYREF
  char v33; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v34; // [rsp+8B0h] [rbp+7B0h]
  _BYTE *v35; // [rsp+8B8h] [rbp+7B8h]
  char *v36; // [rsp+8C0h] [rbp+7C0h]

  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 2),
         *((const struct tip2::test_state **)a1 + 5),
         *((const struct tip2::test_requirement **)a1 + 7),
         *((const struct tip2::test_requirement **)a1 + 6)) )
  {
    (***(void (__fastcall ****)(_QWORD))a1)(*(_QWORD *)a1);
  }
  v4 = *((_BYTE *)a1 + 160);
  if ( v4 != 5 )
  {
    if ( v4 )
    {
      if ( v4 != 2 && v4 != 3 && ((a1[5] & 0x1000) == 0 || v4 == 4) )
        goto LABEL_13;
    }
    else
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16394;
      *((_QWORD *)a1 + 21) = 0LL;
    }
    if ( (a1[16] & 0x800) != 0 )
    {
      v5 = 1;
LABEL_14:
      v6 = v5;
      v7 = v5 | 2;
      if ( (a1[5] & 0x200) == 0 )
        v7 = v5;
      memset_0(v32, 0, 0x802uLL);
      v28 = 0LL;
      v29 = 0;
      v34 = &v30;
      v36 = &v33;
      v30 = -2143256512;
      v31 = 0;
      v35 = v32;
      if ( (a1[5] & 0x200) != 0 )
        v6 = 1;
      v8 = v7 | 4;
      if ( !v6 )
        v8 = v7;
      v9 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v28, v8);
      memset_0(&v13, 0, 0x78uLL);
      v10 = a1[45];
      v11 = a1 + 4;
      if ( v10 )
        v13 = a1[45];
      else
        v13 = *v11;
      v14 = *((_QWORD *)a1 + 3);
      v15 = a1[5];
      v16 = *((_OWORD *)a1 + 9);
      v17 = a1[16] | 0x200000;
      v18 = *((_BYTE *)a1 + 160);
      v19 = *((_WORD *)a1 + 81);
      v20 = *((_QWORD *)a1 + 21);
      v21 = a2;
      v22 = v9;
      v26 = a1[44];
      if ( v10 )
        v27 = *v11;
      else
        v27 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 2));
      if ( error )
      {
        v23 = *((_DWORD *)error + 2);
        v24 = *((_QWORD *)error + 7);
        v25 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v13);
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v13);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v28);
      return;
    }
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
}
