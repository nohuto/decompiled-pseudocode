/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180633108
 * Callers:
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x18063347C (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     __lambda_1cf95a55fff0866401cd411783285d2a_::operator()_::_1_::dtor$2 @ 0x1806DB59B (__lambda_1cf95a55fff0866401cd411783285d2a_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D74 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::~test_watcher<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
