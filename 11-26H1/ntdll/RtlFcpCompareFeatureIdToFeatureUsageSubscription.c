/*
 * XREFs of RtlFcpCompareFeatureIdToFeatureUsageSubscription @ 0x18016E660
 * Callers:
 *     RtlpFcGetFeatureHasSubscriptionsFromBuffer @ 0x18016E488 (RtlpFcGetFeatureHasSubscriptionsFromBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFcpCompareFeatureIdToFeatureUsageSubscription(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
