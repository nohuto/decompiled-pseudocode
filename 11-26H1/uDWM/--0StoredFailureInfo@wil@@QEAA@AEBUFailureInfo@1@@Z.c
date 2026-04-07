/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180090754
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180092D70 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D32F0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Pri.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800928CC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
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
