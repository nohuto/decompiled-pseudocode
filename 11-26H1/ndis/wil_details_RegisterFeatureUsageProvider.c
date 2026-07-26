/*
 * XREFs of wil_details_RegisterFeatureUsageProvider @ 0x14013A55C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x14018EC8C (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140097978 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

__int64 wil_details_RegisterFeatureUsageProvider()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-10h]
  int v3; // [rsp+3Ch] [rbp-Ch]

  v3 = 0;
  g_wil_details_recordFeatureUsage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))wil_details_RecordFeatureUsageReporting;
  v1[0] = wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  v1[2] = 0LL;
  v1[1] = wil_details_featureDescriptors_z;
  v2 = 1;
  result = RtlRegisterFeatureUsageProvider(
             wil_details_OnFeatureUsageProviderFlushNotification,
             v1,
             &g_wil_details_featureUsageProvider);
  if ( (_DWORD)result )
    g_wil_details_featureUsageProvider = 0LL;
  return result;
}
