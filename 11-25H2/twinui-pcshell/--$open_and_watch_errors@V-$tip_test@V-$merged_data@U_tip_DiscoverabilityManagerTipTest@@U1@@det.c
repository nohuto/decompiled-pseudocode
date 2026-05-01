/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180287A40
 * Callers:
 *     _lambda_3e036b3644723c146ee880a5a6e63477_::operator() @ 0x1805F5980 (_lambda_3e036b3644723c146ee880a5a6e63477_--operator().c)
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805F7870 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805F7A9C (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@2@XZ @ 0x180287A78 (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@detail.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180287AF8 (--1-$com_ptr_t@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_return.c)
 */

__int64 __fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::open_and_watch_errors(
    &v3,
    a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>(&v3);
  return a1;
}
