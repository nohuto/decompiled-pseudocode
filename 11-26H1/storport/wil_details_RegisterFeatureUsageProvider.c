/*
 * XREFs of wil_details_RegisterFeatureUsageProvider @ 0x14018F95C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1401C4078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1400AE5D0 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

__int64 wil_details_RegisterFeatureUsageProvider()
{
  __int64 result; // rax
  _QWORD v1[5]; // [rsp+20h] [rbp-28h] BYREF

  g_wil_details_recordFeatureUsage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))wil_details_RecordFeatureUsageReporting;
  v1[0] = wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  v1[2] = 0LL;
  v1[1] = wil_details_featureDescriptors_z;
  result = RtlRegisterFeatureUsageProvider(
             wil_details_OnFeatureUsageProviderFlushNotification,
             v1,
             &g_wil_details_featureUsageProvider);
  if ( (_DWORD)result )
    g_wil_details_featureUsageProvider = 0LL;
  return result;
}
