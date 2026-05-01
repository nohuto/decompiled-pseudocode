/*
 * XREFs of ?Release@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180281B9C
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802822F4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTip.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180282490 (--1-$com_ptr_t@V-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802824B0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@ti.c)
 * Callees:
 *     ??1?$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x180281BE4 (--1-$merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@U12@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest,XamlExplorerHostTipTests::_tip_OnLaunchedTest>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
