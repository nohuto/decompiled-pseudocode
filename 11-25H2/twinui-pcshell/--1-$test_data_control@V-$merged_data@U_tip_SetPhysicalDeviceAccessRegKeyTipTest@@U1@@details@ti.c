/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FA0
 * Callers:
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator() @ 0x180619440 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061D808 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::~test_data_control<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>(a1);
}
