/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806242E8
 * Callers:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18062B6F4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1806493B0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop_::_1_::dtor$10 @ 0x1806DB150 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Sw_ea_1806DB150.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteDesktop_::_1_::dtor$6 @ 0x1806DCAA9 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchTo_ea_1806DCAA9.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18062DAA4 (-close@-$test_data_control@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::~test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>(
        void **a1)
{
  tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>(a1);
}
