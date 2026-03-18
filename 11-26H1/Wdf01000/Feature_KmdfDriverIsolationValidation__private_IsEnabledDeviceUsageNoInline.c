/*
 * XREFs of Feature_KmdfDriverIsolationValidation__private_IsEnabledDeviceUsageNoInline @ 0x140096338
 * Callers:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 * Callees:
 *     Feature_KmdfDriverIsolationValidation__private_IsEnabledFallback @ 0x140096374 (Feature_KmdfDriverIsolationValidation__private_IsEnabledFallback.c)
 */

int __fastcall Feature_KmdfDriverIsolationValidation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KmdfDriverIsolationValidation__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_KmdfDriverIsolationValidation__private_featureState.exchange64 & 1;
  else
    return Feature_KmdfDriverIsolationValidation__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_KmdfDriverIsolationValidation__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
