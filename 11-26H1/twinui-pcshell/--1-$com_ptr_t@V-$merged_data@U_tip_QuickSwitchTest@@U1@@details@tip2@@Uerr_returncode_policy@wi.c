/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499C08
 * Callers:
 *     ??1?$test_watcher@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180499CE4 (--1-$test_watcher@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049A2EC (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18049E07C (-start@-$tip_test@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@X.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18049CE20 (-Release@-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>::Release(v1);
  return result;
}
