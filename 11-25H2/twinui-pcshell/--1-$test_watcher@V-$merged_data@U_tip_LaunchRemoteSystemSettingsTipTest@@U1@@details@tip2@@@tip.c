/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180633090
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___::Invoke @ 0x180634D00 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___lambda_5.c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x1806353EC (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___::Invoke_::_1_::dtor$0 @ 0x1806DB759 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___lambda_.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::LaunchRemoteSystemSettings_::_1_::dtor$0 @ 0x1806DB78F (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--LaunchRemoteSystem.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180632DC8 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_re.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
