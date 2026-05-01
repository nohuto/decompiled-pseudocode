/*
 * XREFs of ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x1806A9D04
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801AEED0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180281480 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_retu.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802814A0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806AA4D0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x1806A8E40 (--1-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::~merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
