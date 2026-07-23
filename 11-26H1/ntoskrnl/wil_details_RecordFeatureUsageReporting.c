/*
 * XREFs of wil_details_RecordFeatureUsageReporting @ 0x1406E6930
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     RtlRecordFeatureUsage @ 0x1404CE340 (RtlRecordFeatureUsage.c)
 */

void __fastcall wil_details_RecordFeatureUsageReporting(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 v7; // rcx
  char v8; // al

  v5 = a5;
  if ( *a5 && !_InterlockedExchange(&g_wil_details_featureUsageCached, 1) && g_wil_details_featureUsageProvider )
  {
    _m_prefetchw((const void *)(g_wil_details_featureUsageProvider + 100));
    v7 = *(_DWORD *)(g_wil_details_featureUsageProvider + 100) | 1u;
    v8 = _InterlockedOr((volatile signed __int32 *)(g_wil_details_featureUsageProvider + 100), 1u);
    CmFcpManagerArmFeatureUsageProviderFlushNotification(v7, 1, (v8 & 1) == 0);
  }
  if ( v5[1] )
  {
    WORD2(a5) = *((_WORD *)v5 + 4);
    HIWORD(a5) = *((_WORD *)v5 + 2);
    LODWORD(a5) = a1;
    RtlRecordFeatureUsage((__int64)&a5, 1LL);
  }
}
