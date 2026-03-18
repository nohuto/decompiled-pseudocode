/*
 * XREFs of wil_details_RegisterFeatureUsageProvider @ 0x1408551B4
 * Callers:
 *     CmInitSystem0 @ 0x140CEBD08 (CmInitSystem0.c)
 * Callees:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x140B52AB0 (CmFcManagerRegisterFeatureUsageProvider.c)
 */

__int64 __fastcall wil_details_RegisterFeatureUsageProvider(__int64 a1)
{
  __int64 result; // rax

  g_wil_details_recordFeatureUsage = (__int64)wil_details_RecordFeatureUsageReporting;
  result = CmFcManagerRegisterFeatureUsageProvider(
             a1,
             wil_details_OnFeatureUsageProviderFlushNotification,
             0LL,
             &g_wil_details_featureUsageProvider);
  if ( (_DWORD)result )
    g_wil_details_featureUsageProvider = 0LL;
  return result;
}
