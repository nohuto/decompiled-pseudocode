/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14008B288
 * Callers:
 *     Feature_WdfUmdfDma__private_IsEnabledFallback @ 0x14008A6DC (Feature_WdfUmdfDma__private_IsEnabledFallback.c)
 *     Feature_KmdfDriverIsolationValidation__private_IsEnabledFallback @ 0x140096374 (Feature_KmdfDriverIsolationValidation__private_IsEnabledFallback.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x1400963CC (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14008AE54 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AFCC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14008B0D4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        const wil_details_FeatureDescriptor *descriptor,
        unsigned __int64 a4)
{
  char exchange64; // bl
  wil_details_FeatureStateCache v7; // rdi

  exchange64 = observedState.exchange64;
  if ( (observedState.exchange64 & 2) != 0 )
  {
    v7.exchange64 = observedState.exchange;
  }
  else
  {
    v7.exchange64 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                      descriptor->featureStateCache,
                      observedState,
                      descriptor).exchange64;
    exchange64 = v7.exchange64;
  }
  if ( kind )
  {
    wil_details_FeatureReporting_ReportUsageToService(descriptor, v7, kind, a4);
    if ( (unsigned int)(kind - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v7, kind, descriptor);
  }
  return exchange64 & 1;
}
