/*
 * XREFs of wil_details_RegisterFeatureUsageProvider @ 0x14085B514
 * Callers:
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404F78A8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x140B55350 (CmFcManagerRegisterFeatureUsageProvider.c)
 */

__int64 wil_details_RegisterFeatureUsageProvider()
{
  __int64 v0; // rcx
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-10h]
  int v4; // [rsp+3Ch] [rbp-Ch]

  v4 = 0;
  g_wil_details_recordFeatureUsage = (__int64)wil_details_RecordFeatureUsageReporting;
  v2[0] = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  v2[2] = 0LL;
  v2[1] = &wil_details_featureDescriptors_z;
  v3 = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(), _QWORD *, __int64 *))CmFcManagerRegisterFeatureUsageProvider)(
             v0,
             wil_details_OnFeatureUsageProviderFlushNotification,
             v2,
             &g_wil_details_featureUsageProvider);
  if ( (_DWORD)result )
    g_wil_details_featureUsageProvider = 0LL;
  return result;
}
