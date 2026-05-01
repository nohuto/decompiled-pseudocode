/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289760
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180108F20 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18022CE80 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802897C4 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289740 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_retu.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x1806817E4 (--0-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x180682984 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x118uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>(v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (void *)v4;
    if ( v5 )
      tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
