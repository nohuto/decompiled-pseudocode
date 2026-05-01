/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D54
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180621A40 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806242E8 (--1-$test_data_control@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806243BC (--1-$test_watcher@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18062DE18 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@AEB.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1806493B0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A4E8 (-Release@-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::Release(v1);
  return result;
}
