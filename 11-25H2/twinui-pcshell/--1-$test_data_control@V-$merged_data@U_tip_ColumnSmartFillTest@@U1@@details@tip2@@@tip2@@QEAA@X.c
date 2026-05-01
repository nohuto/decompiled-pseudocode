/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180586FA8
 * Callers:
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x180588B1C (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180589C78 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>(a1);
}
