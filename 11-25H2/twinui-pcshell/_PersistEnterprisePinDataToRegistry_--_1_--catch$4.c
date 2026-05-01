/*
 * XREFs of _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x1806DD4D4
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18066526C (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659A0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x180665E64 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 */

__int64 __fastcall PersistEnterprisePinDataToRegistry_::_1_::catch_4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  wil *v4; // rcx
  const char *v5; // rdx
  const char *v6; // rax
  int v7; // r9d

  v3 = *tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          *(_QWORD *)(a2 + 72),
          (__int64 *)(a2 + 80));
  wil::ResultFromCaughtException(v4);
  v6 = tip2::details::reason_string(
         (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::persist_enterprise_pin_data_failed",
         v5);
  tip2::details::shared_data<0,0,1>::set_flag_value<long>(v3 + 8, 10LL, (__int64)v6, v7);
  tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)(a2 + 80));
  return 0LL;
}
