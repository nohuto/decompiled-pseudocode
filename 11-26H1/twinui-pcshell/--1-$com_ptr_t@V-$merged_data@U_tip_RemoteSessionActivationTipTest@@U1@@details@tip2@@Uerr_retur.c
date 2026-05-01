/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658A30
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18065749C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C68 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D00 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658DA0 (--1-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659F8C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D0D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D96C (-open_helper@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18065C1A0 (-Release@-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::Release(v1);
  return result;
}
