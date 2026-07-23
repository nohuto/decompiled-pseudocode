/*
 * XREFs of RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1404E1C04
 * Callers:
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14080FC18 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140AC0FD8 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140AC1430 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUsageSubscriptionToUsageSubscription(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1LL;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  v2 = *(_WORD *)(a2 + 4);
  if ( *(_WORD *)(a1 + 4) > v2 )
    return 1LL;
  if ( *(_WORD *)(a1 + 4) < v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > *(_DWORD *)(a2 + 8) )
    return 1LL;
  if ( v3 >= *(_DWORD *)(a2 + 8) )
  {
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 <= *(_DWORD *)(a2 + 12) )
      return (unsigned int)-(v4 < *(_DWORD *)(a2 + 12));
    return 1LL;
  }
  return 0xFFFFFFFFLL;
}
