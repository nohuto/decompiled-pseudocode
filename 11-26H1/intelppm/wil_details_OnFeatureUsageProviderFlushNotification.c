/*
 * XREFs of wil_details_OnFeatureUsageProviderFlushNotification @ 0x14002D8C0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x140004A5C (wil_details_RecordCachedUsage.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1400088CC (wil_details_FeatureDescriptors_SkipPadding.c)
 */

void __fastcall wil_details_OnFeatureUsageProviderFlushNotification(int a1)
{
  int **i; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  if ( a1 == 1 && _InterlockedExchange(&g_wil_details_featureUsageCached, 0) )
  {
    for ( i = &Feature_ShortQosHysteresisIntel__private_descriptor; ; i = (int **)(v3 + 7) )
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
