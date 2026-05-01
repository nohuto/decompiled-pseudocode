/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180618DC0
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18061846C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FA0 (--1-$test_data_control@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@ti.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180619028 (--1-$test_watcher@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18061DD10 (-start@-$tip_test@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18061C394 (-Release@-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>::Release(v1);
  return result;
}
