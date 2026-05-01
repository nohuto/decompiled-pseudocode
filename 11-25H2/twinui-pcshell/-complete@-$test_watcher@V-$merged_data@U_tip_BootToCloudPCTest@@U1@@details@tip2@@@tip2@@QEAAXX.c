/*
 * XREFs of ?complete@?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802D0738
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180643340 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::complete(
        __int64 a1)
{
  tip2::details::shared_data<1,0,0>::complete_without_lock(*(_QWORD *)(a1 + 48) + 8LL);
}
