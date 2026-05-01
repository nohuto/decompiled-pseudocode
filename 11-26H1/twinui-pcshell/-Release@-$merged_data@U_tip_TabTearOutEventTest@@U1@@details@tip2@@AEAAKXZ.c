/*
 * XREFs of ?Release@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805A7668
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A6958 (--1-$com_ptr_t@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A8894 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A9298 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805A995C (-reset@-$com_ptr_t@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A69E0 (--1-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>::~merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
