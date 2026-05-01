/*
 * XREFs of ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803BB678
 * Callers:
 *     ??1?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEAA@XZ @ 0x1803AE220 (--1-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEA.c)
 * Callees:
 *     TestQueryData @ 0x18018E5FC (TestQueryData.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803BB9D8 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 *     ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803BCA58 (-evaluate_and_report@-$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z.c)
 */

void __fastcall tip2::details::shared_data<1,1,1>::complete_helper(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 232) == 0;
  v6 = 0LL;
  *(_OWORD *)pv = 0LL;
  v8 = 0LL;
  if ( !v2 )
    a2 |= 8u;
  v4 = *(_DWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = 0LL;
  if ( (unsigned int)TestQueryData(v5, a2, v4, &v6) )
  {
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( pv[1] )
      tip2::details::shared_data<1,1,1>::deserialize_data(a1, &v6);
    else
      *(_DWORD *)(a1 + 184) = pv[0];
    tip2::details::shared_data<1,1,1>::evaluate_and_report(a1, v8);
  }
  CoTaskMemFree(pv[1]);
}
