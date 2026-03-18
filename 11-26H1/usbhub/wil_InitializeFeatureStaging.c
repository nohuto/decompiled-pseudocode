/*
 * XREFs of wil_InitializeFeatureStaging @ 0x140079078
 * Callers:
 *     DriverEntry @ 0x14004F07C (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1400521CC (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1400786FC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140079168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) )
    return 0LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 1;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; i = v2 + 56 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(
                           wil_details_ReevaluateOnFeatureConfigurationChange,
                           0LL,
                           &v4,
                           &WPP_MAIN_CB.Dpc.SystemArgument2) )
        WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
      else
        v0 = 1;
      break;
    }
  }
  g_wil_details_recordFeatureUsage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))wil_details_RecordFeatureUsageReporting;
  result = RtlRegisterFeatureUsageProvider(
             wil_details_OnFeatureUsageProviderFlushNotification,
             0LL,
             &g_wil_details_featureUsageProvider);
  if ( !(_DWORD)result )
    return 0LL;
  g_wil_details_featureUsageProvider = 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
