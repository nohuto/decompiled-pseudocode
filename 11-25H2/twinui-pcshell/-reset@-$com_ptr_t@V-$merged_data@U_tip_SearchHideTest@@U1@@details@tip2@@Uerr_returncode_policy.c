/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802CEBEC
 * Callers:
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800159CC (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1800AEDA0 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C936C (--1-$test_data_control@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802CABD0 (-CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x18028A7D8 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release(result);
  return result;
}
