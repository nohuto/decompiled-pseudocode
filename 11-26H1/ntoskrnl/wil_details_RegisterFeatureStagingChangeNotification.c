/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x14085B4DC
 * Callers:
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140500B80 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS wil_details_RegisterFeatureStagingChangeNotification()
{
  NTSTATUS result; // eax

  result = RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             0LL,
             &g_wil_details_featureChangeNotification);
  if ( result )
    g_wil_details_featureChangeNotification = 0LL;
  return result;
}
