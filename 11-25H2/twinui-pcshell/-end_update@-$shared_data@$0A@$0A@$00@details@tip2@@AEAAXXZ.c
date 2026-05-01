/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180673914
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659A0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x18066E230 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 * Callees:
 *     TestUnlockData @ 0x1801B407C (TestUnlockData.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D77D0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180674510 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::end_update(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h]
  __int128 v8; // [rsp+40h] [rbp-C0h]
  void *v9; // [rsp+50h] [rbp-B0h] BYREF
  char v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+59h] [rbp-A7h] BYREF
  char v12; // [rsp+5Dh] [rbp-A3h]
  _BYTE v13[2043]; // [rsp+5Eh] [rbp-A2h] BYREF
  char v14; // [rsp+859h] [rbp+759h] BYREF
  int *v15; // [rsp+860h] [rbp+760h]
  _BYTE *v16; // [rsp+868h] [rbp+768h]
  char *v17; // [rsp+870h] [rbp+770h]

  v2 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( *(_QWORD *)(a1 + 232) && (v2 & 0x100) == 0 )
  {
    v6 = 0LL;
    *(_OWORD *)pv = 0LL;
    v8 = 0LL;
    memset_0(v13, 0, 0x802uLL);
    v9 = 0LL;
    v4 = (*(_DWORD *)(a1 + 20) & 0x8000) == 0;
    v15 = &v11;
    v17 = &v14;
    v16 = v13;
    v10 = 0;
    v11 = -2143256512;
    v12 = 0;
    if ( v4 )
      v5 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v9, 1LL);
    else
      v5 = 0LL;
    TestUnlockData(*(_QWORD *)(a1 + 232), v3, v5, &v6);
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9);
    CoTaskMemFree(pv[1]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
