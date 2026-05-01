/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EEB4
 * Callers:
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     __lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x180703676 (__lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063EC4C (--1-$com_ptr_t@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::~test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
