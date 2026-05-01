/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18065DBA0
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658CA0 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18065DE30 (-start@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@ti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18065C1E8 (-Release@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::Release(result);
  return result;
}
