/*
 * XREFs of RtlSubscribeForFeatureUsageNotification @ 0x180148CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSubscribeForFeatureUsageNotification(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  return RtlpFcUpdateUsageSubscriptions((__int64)SubscriptionDetails, SubscriptionCount, 0);
}
