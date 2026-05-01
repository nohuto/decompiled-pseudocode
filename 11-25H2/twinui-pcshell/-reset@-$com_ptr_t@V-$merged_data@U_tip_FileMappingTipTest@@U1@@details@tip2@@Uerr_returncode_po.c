/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF14
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624240 (--1-$test_data_control@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18062F2F0 (-start@-$tip_test@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A458 (-Release@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>::Release(result);
  return result;
}
