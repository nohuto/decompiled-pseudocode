/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805AAE8C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805AAF0C (--1-$test_data_control@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805AAF44 (--1-$test_watcher@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805ACB9C (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805AD7E0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805AD510 (-Release@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::Release(v1);
  return result;
}
