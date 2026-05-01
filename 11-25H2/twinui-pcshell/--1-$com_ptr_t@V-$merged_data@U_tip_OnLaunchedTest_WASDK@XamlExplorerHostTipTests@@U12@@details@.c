/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289B80
 * Callers:
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x180217FB4 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024E840 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180289B58 (--1-$test_watcher@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB2C (--1-$test_data_control@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@detail.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x18028983C (-Release@-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@A.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::Release(v1);
  return result;
}
