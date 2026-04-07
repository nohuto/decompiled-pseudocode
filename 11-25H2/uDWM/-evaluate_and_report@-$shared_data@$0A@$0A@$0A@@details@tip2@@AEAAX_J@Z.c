/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800D7574
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D72E0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008ABFC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097020 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestReport @ 0x1800998E0 (TestReport.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800D7854 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx
  char v5; // cl
  unsigned __int8 v6; // al
  char v7; // dl
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  void (__fastcall ***v17)(_QWORD); // rcx
  const struct tip2::test_requirement *v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+44h] [rbp-BCh]
  int v23; // [rsp+54h] [rbp-ACh]
  char v24; // [rsp+58h] [rbp-A8h]
  __int16 v25; // [rsp+5Ah] [rbp-A6h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int16 v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-64h]
  int v33; // [rsp+A0h] [rbp-60h]
  void *v34; // [rsp+B0h] [rbp-50h] BYREF
  char v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+B9h] [rbp-47h] BYREF
  char v37; // [rsp+BDh] [rbp-43h]
  char v38; // [rsp+BEh] [rbp-42h] BYREF
  char v39; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v40; // [rsp+8C0h] [rbp+7C0h]
  char *v41; // [rsp+8C8h] [rbp+7C8h]
  char *v42; // [rsp+8D0h] [rbp+7D0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v18) )
  {
    v4 = *(void (__fastcall ****)(_QWORD))a1;
    if ( tip2::details::g_test_interface_exception_guard )
    {
      if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v4, 0LL, 0LL, 0LL, 0LL)
        && !*(_BYTE *)(a1 + 160) )
      {
        *(_BYTE *)(a1 + 160) = 3;
        *(_WORD *)(a1 + 162) = 16395;
        *(_QWORD *)(a1 + 168) = 0LL;
      }
    }
    else
    {
      (**v4)(v4);
    }
  }
  v5 = *(_BYTE *)(a1 + 160);
  if ( v5 )
  {
    if ( (unsigned __int8)(v5 - 2) > 1u && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v5 == 4) )
      goto LABEL_15;
  }
  else
  {
    *(_BYTE *)(a1 + 160) = 3;
    *(_WORD *)(a1 + 162) = 16394;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
  {
    v6 = 1;
    goto LABEL_16;
  }
LABEL_15:
  v6 = 0;
LABEL_16:
  v7 = v6;
  v8 = v6 | 2;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) == 0 )
    v8 = v6;
  v34 = 0LL;
  v35 = 0;
  v40 = &v36;
  v42 = &v39;
  v36 = -2143256512;
  v37 = 0;
  v41 = &v38;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) != 0 )
    v7 = 1;
  v9 = v8 | 4;
  if ( !v7 )
    v9 = v8;
  v10 = tip2::details::shared_data<0,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v34, v9);
  memset_0(&v19, 0, 0x78uLL);
  v11 = *(_DWORD *)(a1 + 180);
  if ( v11 )
    v19 = *(_DWORD *)(a1 + 180);
  else
    v19 = *(_DWORD *)(a1 + 16);
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *(_DWORD *)(a1 + 20);
  v22 = *(_OWORD *)(a1 + 144);
  v23 = *(_DWORD *)(a1 + 64) | 0x200000;
  v24 = *(_BYTE *)(a1 + 160);
  v25 = *(_WORD *)(a1 + 162);
  v26 = *(_QWORD *)(a1 + 168);
  v27 = a2;
  v28 = v10;
  v32 = *(_DWORD *)(a1 + 176);
  if ( v11 )
    v33 = *(_DWORD *)(a1 + 16);
  else
    v33 = 0;
  v12 = 0;
  v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 72);
  v15 = v14 + 168LL * *(_QWORD *)(a1 + 88);
  if ( v14 != v15 )
  {
    do
    {
      v16 = *(_DWORD *)(v14 + 8);
      if ( v12 != v16 )
        v13 = v14;
      v14 += 168LL;
      if ( v12 == v16 )
        v16 = v12;
      v12 = v16;
    }
    while ( v14 != v15 );
    if ( v13 )
    {
      v29 = *(_DWORD *)(v13 + 8);
      v30 = *(_QWORD *)(v13 + 56);
      v31 = *(_WORD *)(v13 + 64);
    }
  }
  TestReport((__int64)&v19);
  v17 = *(void (__fastcall ****)(_QWORD))a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v17, 0LL, 0LL, 0LL, &v19) )
    {
      v25 = 16398;
      v24 = 3;
      TestReport((__int64)&v19);
    }
  }
  else
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD), int *))(*v17)[3])(v17, &v19);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v34);
}
