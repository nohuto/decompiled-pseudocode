/*
 * XREFs of ?begin_update@?$shared_data@$00$00$00@details@tip2@@AEAA_NXZ @ 0x1803BB548
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1803B65F0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_.c)
 * Callees:
 *     TestQueryData @ 0x18018E5FC (TestQueryData.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803BB9D8 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 */

char __fastcall tip2::details::shared_data<1,1,1>::begin_update(__int64 a1)
{
  int v2; // eax
  bool v3; // zf
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // eax
  void *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v2 = *(_DWORD *)(a1 + 232) + 1;
  v3 = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  *(_DWORD *)(a1 + 232) = v2;
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 && v2 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 184);
    v9 = 0LL;
    *(_OWORD *)pv = 0LL;
    v11 = 0LL;
    v6 = (unsigned int)TestQueryData(v4, 1u, v5, &v9);
    v7 = pv[1];
    if ( !v6 )
    {
      CoTaskMemFree(pv[1]);
      return 0;
    }
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( v7 )
    {
      tip2::details::shared_data<1,1,1>::deserialize_data(a1, &v9);
      v7 = pv[1];
    }
    else
    {
      *(_DWORD *)(a1 + 184) = pv[0];
    }
    CoTaskMemFree(v7);
  }
  return 1;
}
