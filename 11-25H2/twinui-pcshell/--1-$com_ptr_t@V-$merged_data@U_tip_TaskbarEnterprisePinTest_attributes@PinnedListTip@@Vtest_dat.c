/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180665924
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806652BC (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659A0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659D8 (--1-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180665A00 (--1-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180673A64 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18066EE34 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::Release(v1);
  return result;
}
