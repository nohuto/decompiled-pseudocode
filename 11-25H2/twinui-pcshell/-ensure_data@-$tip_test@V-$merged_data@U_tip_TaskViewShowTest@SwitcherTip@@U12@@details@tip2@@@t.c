/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802BE56C
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1801082A0 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1801F7450 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x1802BE530 (--C-$tip_test@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA-.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF2E8 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ??0?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18067E798 (--0-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18067EDDC (--4-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 */

_QWORD *__fastcall tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::ensure_data(
        _QWORD *a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x120uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>(v2);
    wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::operator=(
      a1,
      &v5);
    wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>(&v5);
  }
  return a1;
}
