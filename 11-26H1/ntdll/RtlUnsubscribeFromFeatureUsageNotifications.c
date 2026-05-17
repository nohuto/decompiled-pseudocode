/*
 * XREFs of RtlUnsubscribeFromFeatureUsageNotifications @ 0x180148E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnsubscribeFromFeatureUsageNotifications(__int64 a1, unsigned __int64 a2)
{
  return RtlpFcUpdateUsageSubscriptions(a1, a2, 1u);
}
