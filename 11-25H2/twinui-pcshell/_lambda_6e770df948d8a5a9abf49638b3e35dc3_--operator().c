/*
 * XREFs of _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x18067A0FC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___::_ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___ @ 0x180679BB4 (wil--details--ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___--_ScopeExitFn__lambda_6e77.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18067BA60 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180679C9C (--1-$test_data_control@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18067A068 (--C-$tip_test@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@.c)
 *     ?Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18067C170 (-Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator()(XamlSwitcherTelemetry::ShowGamingTaskView **a1)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)*a1 + 22);
  XamlSwitcherTelemetry::ShowGamingTaskView::Stop(a1[1], 0);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::operator->(
                (__int64)*a1 + 856,
                (__int64 *)&v3)
           + 265) = 1;
  tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>(&v3);
  return CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)*a1);
}
