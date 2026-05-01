/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180289B58
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180217FB4 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024E840 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::OnLaunched_::_1_::dtor$2 @ 0x1806B57D0 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlApplication_ea_1806B57D0.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::OnLaunched_::_1_::dtor$2 @ 0x1806C59D3 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1806C59D3.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289B80 (--1-$com_ptr_t@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::~test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
