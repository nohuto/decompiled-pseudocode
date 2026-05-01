/*
 * XREFs of _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1807061DE
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068B958 (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068C0C0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x18068C55C (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 */

__int64 __fastcall ShouldAddEnterprisePinToOutput_::_1_::catch_26(wil *a1, __int64 a2)
{
  int v3; // ebx
  const char *v4; // rdx
  tip2::details *v5; // rax
  _QWORD *v6; // r9

  v3 = wil::ResultFromCaughtException(a1);
  tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
    *(_QWORD *)(a2 + 48),
    (__int64 *)(a2 + 32));
  v5 = tip2::details::reason_string(
         (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_generation_eval_failure",
         v4);
  tip2::details::shared_data<0,0,1>::set_flag_value<long>(*v6 + 8LL, 7LL, (__int64)v5, v3);
  tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)(a2 + 32));
  return 0LL;
}
