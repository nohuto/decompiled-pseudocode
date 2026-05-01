/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C44
 * Callers:
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x1806597D0 (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065B07C (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::LaunchRemoteSystemSettings_::_1_::dtor$3 @ 0x18070454A (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Launc_ea_18070454A.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18065CF28 (-close@-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@t.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        void **a1)
{
  tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>(a1);
}
