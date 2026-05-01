/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289034
 * Callers:
 *     ??1?$test_watcher@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180288E10 (--1-$test_watcher@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180288E38 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@detai.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289054 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D18A0 (--1-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061C17C (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@0@XZ @ 0x180621964 (--$open@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806242B0 (--1-$test_data_control@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x18062B078 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18061C34C (-Release@-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::Release(v1);
  return result;
}
