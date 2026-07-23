/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x18008F00C
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18008EECC (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18008F650 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v1 = 0;
  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateDataWithExplicitScope(
             (int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             0,
             (int)WinSqmCheckEscalationSetString,
             0LL,
             (PCWNF_TYPE_ID)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             &qword_1801CBD78,
             *(__int64 *)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (int)RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
