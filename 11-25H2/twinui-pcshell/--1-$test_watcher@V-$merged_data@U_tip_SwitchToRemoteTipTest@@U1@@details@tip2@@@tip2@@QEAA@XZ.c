/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806243BC
 * Callers:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18062B6F4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1806493B0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteDesktop_::_1_::dtor$1 @ 0x1806DB13E (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchTo_ea_1806DB13E.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D54 (--1-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::~test_watcher<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
