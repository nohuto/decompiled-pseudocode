/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800D4664
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D43B8 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180079984 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestReport @ 0x18008D0BC (TestReport.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800D4954 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  tip2::details *v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rcx
  char v6; // al
  unsigned __int8 v7; // al
  char v8; // dl
  int v9; // ecx
  bool v10; // zf
  unsigned int v11; // r8d
  __int64 v12; // rdi
  int v13; // edx
  int *v14; // rcx
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  void (__fastcall ***v20)(_QWORD); // rcx
  const struct tip2::test_requirement *v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+44h] [rbp-BCh]
  int v26; // [rsp+54h] [rbp-ACh]
  char v27; // [rsp+58h] [rbp-A8h]
  __int16 v28; // [rsp+5Ah] [rbp-A6h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int16 v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int v36; // [rsp+A0h] [rbp-60h]
  void *v37; // [rsp+B0h] [rbp-50h] BYREF
  char v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+B9h] [rbp-47h] BYREF
  char v40; // [rsp+BDh] [rbp-43h]
  char v41; // [rsp+BEh] [rbp-42h] BYREF
  char v42; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v43; // [rsp+8C0h] [rbp+7C0h]
  char *v44; // [rsp+8C8h] [rbp+7C8h]
  char *v45; // [rsp+8D0h] [rbp+7D0h]

  v4 = (tip2::details *)(a1 + 8);
  if ( !*((_BYTE *)v4 + 152)
    && tip2::details::evaluate_flags(
         v4,
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v21) )
  {
    v5 = *(void (__fastcall ****)(_QWORD))a1;
    if ( tip2::details::g_test_interface_exception_guard )
    {
      if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v5, 0LL, 0LL, 0LL, 0LL)
        && !*(_BYTE *)(a1 + 160) )
      {
        *(_BYTE *)(a1 + 160) = 3;
        *(_WORD *)(a1 + 162) = 16395;
        *(_QWORD *)(a1 + 168) = 0LL;
      }
    }
    else
    {
      (**v5)(v5);
    }
  }
  v6 = *(_BYTE *)(a1 + 160);
  if ( v6 != 5 )
  {
    if ( v6 )
    {
      if ( v6 != 2 && v6 != 3 && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v6 == 4) )
        goto LABEL_17;
    }
    else
    {
      *(_BYTE *)(a1 + 160) = 3;
      *(_WORD *)(a1 + 162) = 16394;
      *(_QWORD *)(a1 + 168) = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
    {
      v7 = 1;
LABEL_18:
      v8 = v7;
      v9 = v7 | 2;
      v10 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      if ( (*(_DWORD *)(a1 + 20) & 0x200) == 0 )
        v9 = v7;
      v37 = 0LL;
      v38 = 0;
      v43 = &v39;
      v45 = &v42;
      v39 = -2143256512;
      v40 = 0;
      v44 = &v41;
      if ( !v10 )
        v8 = 1;
      v11 = v9 | 4;
      if ( !v8 )
        v11 = v9;
      v12 = tip2::details::shared_data<0,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v37, v11);
      memset_0(&v22, 0, 0x78uLL);
      v13 = *(_DWORD *)(a1 + 180);
      v14 = (int *)(a1 + 16);
      if ( v13 )
        v22 = *(_DWORD *)(a1 + 180);
      else
        v22 = *v14;
      v23 = *(_QWORD *)(a1 + 24);
      v24 = *(_DWORD *)(a1 + 20);
      v25 = *(_OWORD *)(a1 + 144);
      v26 = *(_DWORD *)(a1 + 64) | 0x200000;
      v27 = *(_BYTE *)(a1 + 160);
      v28 = *(_WORD *)(a1 + 162);
      v29 = *(_QWORD *)(a1 + 168);
      v30 = a2;
      v31 = v12;
      v35 = *(_DWORD *)(a1 + 176);
      if ( v13 )
        v36 = *v14;
      else
        v36 = 0;
      v15 = 0;
      v16 = 0LL;
      v17 = *(_QWORD *)(a1 + 72);
      v18 = v17 + 168LL * *(_QWORD *)(a1 + 88);
      if ( v17 != v18 )
      {
        do
        {
          v19 = *(_DWORD *)(v17 + 8);
          if ( v15 != v19 )
            v16 = v17;
          v17 += 168LL;
          if ( v15 == v19 )
            v19 = v15;
          v15 = v19;
        }
        while ( v17 != v18 );
        if ( v16 )
        {
          v32 = *(_DWORD *)(v16 + 8);
          v33 = *(_QWORD *)(v16 + 56);
          v34 = *(_WORD *)(v16 + 64);
        }
      }
      TestReport((__int64)&v22);
      v20 = *(void (__fastcall ****)(_QWORD))a1;
      if ( tip2::details::g_test_interface_exception_guard )
      {
        if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v20, 0LL, 0LL, 0LL, &v22) )
        {
          v28 = 16398;
          v27 = 3;
          TestReport((__int64)&v22);
        }
      }
      else
      {
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD), int *))(*v20)[3])(v20, &v22);
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v37);
      return;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
}
