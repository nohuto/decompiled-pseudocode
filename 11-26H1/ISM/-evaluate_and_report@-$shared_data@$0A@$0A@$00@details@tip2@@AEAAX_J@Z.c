/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18010A5B0
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18010A204 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A30A4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800A3C44 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800A3F18 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     TestReport @ 0x1800A513C (TestReport.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18010AFE0 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,1>::evaluate_and_report(_DWORD *a1, __int64 a2)
{
  char v4; // al
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // edx
  int *v12; // rcx
  const struct wil::FailureInfo *error; // rax
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+30h] [rbp-D0h]
  __int128 v17; // [rsp+34h] [rbp-CCh]
  int v18; // [rsp+44h] [rbp-BCh]
  char v19; // [rsp+48h] [rbp-B8h]
  __int16 v20; // [rsp+4Ah] [rbp-B6h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int16 v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+8Ch] [rbp-74h]
  int v28; // [rsp+90h] [rbp-70h]
  void *v29; // [rsp+A0h] [rbp-60h] BYREF
  char v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+A9h] [rbp-57h] BYREF
  char v32; // [rsp+ADh] [rbp-53h]
  char v33; // [rsp+AEh] [rbp-52h] BYREF
  char v34; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v35; // [rsp+8B0h] [rbp+7B0h]
  char *v36; // [rsp+8B8h] [rbp+7B8h]
  char *v37; // [rsp+8C0h] [rbp+7C0h]

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
      v8 = (a1[5] & 0x200) == 0;
      if ( (a1[5] & 0x200) == 0 )
        v7 = v5;
      v29 = 0LL;
      v30 = 0;
      v35 = &v31;
      v37 = &v34;
      v31 = -2143256512;
      v32 = 0;
      v36 = &v33;
      if ( !v8 )
        v6 = 1;
      v9 = v7 | 4;
      if ( !v6 )
        v9 = v7;
      v10 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v29, v9);
      memset_0(&v14, 0, 0x78uLL);
      v11 = a1[45];
      v12 = a1 + 4;
      if ( v11 )
        v14 = a1[45];
      else
        v14 = *v12;
      v15 = *((_QWORD *)a1 + 3);
      v16 = a1[5];
      v17 = *((_OWORD *)a1 + 9);
      v18 = a1[16] | 0x200000;
      v19 = *((_BYTE *)a1 + 160);
      v20 = *((_WORD *)a1 + 81);
      v21 = *((_QWORD *)a1 + 21);
      v22 = a2;
      v23 = v10;
      v27 = a1[44];
      if ( v11 )
        v28 = *v12;
      else
        v28 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 2));
      if ( error )
      {
        v24 = *((_DWORD *)error + 2);
        v25 = *((_QWORD *)error + 7);
        v26 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v14);
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v14);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v29);
      return;
    }
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
}
