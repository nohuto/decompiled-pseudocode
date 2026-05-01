/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806A082C
 * Callers:
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A2598 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _XamlGamingTaskViewHost::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180706948 (_XamlGamingTaskViewHost--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806A0758 (--1-$com_ptr_t@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::~test_watcher<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
