/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802889A4
 * Callers:
 *     ??1?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028880C (--1-$test_watcher@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180288834 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@det.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x180288880 (-open_helper@-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@t.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802888F0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@t.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180619934 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180619FDC (--1-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18061C730 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802889C4 (-Release@-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>::Release(v1);
  return result;
}
