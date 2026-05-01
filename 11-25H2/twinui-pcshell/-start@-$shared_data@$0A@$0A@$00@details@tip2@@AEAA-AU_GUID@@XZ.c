/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1806746B0
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806652BC (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     TestCreate @ 0x1801962CC (TestCreate.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1801D28F8 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D77D0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180674510 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,1>::start(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  char v8; // al
  __int64 v9; // rax
  __int128 v10; // xmm0
  struct _RTL_CRITICAL_SECTION *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *v13; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+48h] [rbp-B8h]
  int v15; // [rsp+49h] [rbp-B7h] BYREF
  char v16; // [rsp+4Dh] [rbp-B3h]
  _BYTE v17[2043]; // [rsp+4Eh] [rbp-B2h] BYREF
  char v18; // [rsp+849h] [rbp+749h] BYREF
  int *v19; // [rsp+850h] [rbp+750h]
  _BYTE *v20; // [rsp+858h] [rbp+758h]
  char *v21; // [rsp+860h] [rbp+760h]

  v4 = 0LL;
  v12[0] = 0LL;
  wil::EnterCriticalSection(v12, (struct _RTL_CRITICAL_SECTION *)(a1 + 192));
  memset_0(v17, 0, 0x802uLL);
  v7 = (*(_DWORD *)(a1 + 64) & 0x800) == 0;
  v19 = &v15;
  v21 = &v18;
  v20 = v17;
  v13 = 0LL;
  v14 = 0;
  v15 = -2143256512;
  v16 = 0;
  if ( v7 || (v8 = 1, (*(_DWORD *)(a1 + 20) & 0x8000) != 0) )
    v8 = 0;
  if ( v8 )
    v4 = tip2::details::shared_data<0,0,1>::serialize_data((_QWORD *)a1, (struct tson::write_buffer *)&v13, 1u);
  LOBYTE(v6) = *(_BYTE *)(a1 + 32);
  v9 = TestCreate(*(_DWORD *)(a1 + 16), v5, v6, *(_DWORD *)(a1 + 20), v4, (_OWORD *)(a1 + 144));
  wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
    (__int64 *)(a1 + 232),
    v9);
  v10 = *(_OWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = v10;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v12);
  return a2;
}
