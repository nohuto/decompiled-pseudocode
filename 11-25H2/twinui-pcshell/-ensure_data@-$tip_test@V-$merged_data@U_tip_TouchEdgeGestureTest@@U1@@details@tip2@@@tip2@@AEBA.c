/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289144
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801F1EA0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@1@XZ @ 0x1802889B0 (--C-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@2@XZ @ 0x180288ADC (-watch_errors@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     _lambda_e144cef1f387178a308841941c02025f_::_lambda_e144cef1f387178a308841941c02025f_ @ 0x180570E80 (_lambda_e144cef1f387178a308841941c02025f_--_lambda_e144cef1f387178a308841941c02025f_.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C7514 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??0?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@QEAA@XZ @ 0x180570EFC (--0-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805712B8 (-Release@-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x140uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>(v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (void *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
