/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180619000
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B230 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::HandlePhysicalDeviceAccess_::_1_::dtor$1 @ 0x1806DA9BD (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--HandlePhysicalDeviceAccess_-.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180618DA0 (--1-$com_ptr_t@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
