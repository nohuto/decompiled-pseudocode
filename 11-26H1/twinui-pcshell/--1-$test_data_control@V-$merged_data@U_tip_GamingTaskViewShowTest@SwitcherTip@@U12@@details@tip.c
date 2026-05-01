/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806A07F4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___ @ 0x1806A06C8 (wil--details--ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___--_ScopeExitFn__lambda_b59f.c)
 *     _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x1806A0C58 (_lambda_6e770df948d8a5a9abf49638b3e35dc3_--operator().c)
 *     ?DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A150C (-DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A2870 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806A4A84 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@U.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>(a1);
}
