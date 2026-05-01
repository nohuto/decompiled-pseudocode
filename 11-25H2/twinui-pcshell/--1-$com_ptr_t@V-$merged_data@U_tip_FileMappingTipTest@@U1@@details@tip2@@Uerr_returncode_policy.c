/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D14
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624240 (--1-$test_data_control@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18062436C (--1-$test_watcher@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180626BC8 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18062F2F0 (-start@-$tip_test@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A458 (-Release@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>::Release(v1);
  return result;
}
