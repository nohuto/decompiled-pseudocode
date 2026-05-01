/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x18018E734
 * Callers:
 *     TestCreate @ 0x18018E560 (TestCreate.c)
 *     TestQueryData @ 0x18018E5FC (TestQueryData.c)
 *     TestClose @ 0x18018E68C (TestClose.c)
 *     TestReport @ 0x18018E6E0 (TestReport.c)
 *     TestUnlockData @ 0x1801ACAE4 (TestUnlockData.c)
 *     TestOpen @ 0x1801CC070 (TestOpen.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180282C10 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F090 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     ?persist_cached_test_results@tip2@@YAXXZ @ 0x1806431B0 (-persist_cached_test_results@tip2@@YAXXZ.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x180659308 (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180668320 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUTransitionScreen@7CloudDesktop@3456@@Z @ 0x180669500 (-OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180669DD0 (-Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@U.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A060 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066A4F0 (-ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066A5F8 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 * Callees:
 *     <none>
 */

HMODULE tip_details_GetKernelBaseModuleHandle()
{
  HMODULE result; // rax

  result = (HMODULE)g_tip_details_kernelbaseModuleHandle;
  if ( !g_tip_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_tip_details_kernelbaseModuleHandle = (__int64)result;
  }
  return result;
}
