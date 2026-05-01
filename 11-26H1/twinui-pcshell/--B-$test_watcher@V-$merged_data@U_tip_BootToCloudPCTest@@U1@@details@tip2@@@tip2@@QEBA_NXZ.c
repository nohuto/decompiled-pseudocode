/*
 * XREFs of ??B?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18063F044
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

bool __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::operator bool(
        __int64 a1)
{
  return tip2::details::shared_data<1,0,0>::is_running(*(_QWORD *)(a1 + 48) + 8LL);
}
