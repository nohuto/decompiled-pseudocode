/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x18006EBBC
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18006EA7C (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18006F200 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v1 = 0;
  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateDataWithExplicitScope(
             (unsigned int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             0,
             (unsigned int)WinSqmCheckEscalationSetString,
             0LL,
             (__int64)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             &qword_1801CCD38,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (int)RtlpFcWnfCallback,
             (__int64)RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
