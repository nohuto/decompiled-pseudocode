/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180582C9C
 * Callers:
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x180583440 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x180583C50 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805849F8 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180585A74 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>(a1);
}
