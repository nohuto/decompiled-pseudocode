/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1803B65D0
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803BD1CC (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::NotifyFailure(
        __int64 a1)
{
  tip2::details::shared_data<0,0,0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
