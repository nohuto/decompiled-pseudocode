/*
 * XREFs of ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803BCA58
 * Callers:
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803BB678 (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     TestReport @ 0x18018E6E0 (TestReport.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CD1E4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18028B7E0 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18028C144 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?serialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1803BDC04 (-serialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<1,1,1>::evaluate_and_report(_DWORD *a1, __int64 a2)
{
  tip2::details *v4; // rcx
  _QWORD *v5; // rax
  char v6; // al
  unsigned __int8 v7; // al
  char v8; // dl
  unsigned int v9; // ecx
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  const struct wil::FailureInfo *error; // rax
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h]
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

  v4 = (tip2::details *)(a1 + 2);
  if ( !*((_QWORD *)v4 + 2) )
  {
    v5 = a1 + 42;
    if ( *((_BYTE *)a1 + 160) != 3 || *v5 )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16420;
      *v5 = 0LL;
    }
  }
  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         v4,
         *((const struct tip2::test_state **)a1 + 5),
         *((const struct tip2::test_requirement **)a1 + 7),
         *((const struct tip2::test_requirement **)a1 + 6)) )
  {
    (***(void (__fastcall ****)(_QWORD))a1)(*(_QWORD *)a1);
  }
  v6 = *((_BYTE *)a1 + 160);
  if ( v6 != 5 )
  {
    if ( v6 )
    {
      if ( v6 != 2 && v6 != 3 && ((a1[5] & 0x1000) == 0 || v6 == 4) )
        goto LABEL_17;
    }
    else
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16394;
      *((_QWORD *)a1 + 21) = 0LL;
    }
    if ( (a1[16] & 0x800) != 0 )
    {
      v7 = 1;
LABEL_18:
      v8 = v7;
      v9 = v7 | 2;
      v10 = (a1[5] & 0x200) == 0;
      if ( (a1[5] & 0x200) == 0 )
        v9 = v7;
      v30 = 0LL;
      v31 = 0;
      v36 = &v32;
      v38 = &v35;
      v32 = -2143256512;
      v33 = 0;
      v37 = &v34;
      if ( !v10 )
        v8 = 1;
      v11 = v9 | 4;
      if ( !v8 )
        v11 = v9;
      v12 = tip2::details::shared_data<1,1,1>::serialize_data(a1, &v30, v11);
      memset_0(&v15, 0, 0x78uLL);
      v13 = a1[45];
      if ( v13 )
        v15 = a1[45];
      else
        v15 = a1[4];
      v16 = *((_QWORD *)a1 + 3);
      v17 = a1[5];
      v18 = *((_OWORD *)a1 + 9);
      v19 = a1[16] | 0x200000;
      v20 = *((_BYTE *)a1 + 160);
      v21 = *((_WORD *)a1 + 81);
      v22 = *((_QWORD *)a1 + 21);
      v23 = a2;
      v24 = v12;
      v28 = a1[44];
      if ( v13 )
        v29 = a1[4];
      else
        v29 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 2));
      if ( error )
      {
        v25 = *((_DWORD *)error + 2);
        v26 = *((_QWORD *)error + 7);
        v27 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v15);
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v15);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v30);
      return;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
}
