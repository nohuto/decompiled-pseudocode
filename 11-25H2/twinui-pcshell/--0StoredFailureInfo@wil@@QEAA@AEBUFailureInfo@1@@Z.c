/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1802CBE70
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802DE7F0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?log_failure@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803B3D9C (-log_failure@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803B3E0C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x18066E230 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180182360 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(
        wil::StoredFailureInfo *this,
        const struct wil::FailureInfo *a2)
{
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(this, a2);
  return this;
}
