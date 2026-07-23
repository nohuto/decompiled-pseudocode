/*
 * XREFs of wil_details_OnFeatureUsageProviderFlushNotification @ 0x140B5AF90
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404F78A8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_RecordCachedUsage @ 0x1404FA400 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil_details_OnFeatureUsageProviderFlushNotification(int a1)
{
  __int64 *i; // rcx
  __int64 *v2; // rax
  __int64 *v3; // rbx

  if ( a1 == 1 && _InterlockedExchange(&g_wil_details_featureUsageCached, 0) )
  {
    for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v3 + 7 )
    {
      v2 = wil_details_FeatureDescriptors_SkipPadding(i);
      v3 = v2;
      if ( !v2 )
        break;
      if ( (*(_DWORD *)v2[1] & 1) != 0 )
        wil_details_RecordCachedUsage(*((_DWORD *)v2 + 6), v2[1]);
    }
  }
}
