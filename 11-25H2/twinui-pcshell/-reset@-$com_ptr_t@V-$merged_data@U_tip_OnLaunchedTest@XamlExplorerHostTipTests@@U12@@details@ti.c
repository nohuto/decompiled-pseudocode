/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028AB64
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@2@XZ @ 0x180289C28 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB2C (--1-$test_data_control@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@detail.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x18028983C (-Release@-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@A.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::Release(result);
  return result;
}
