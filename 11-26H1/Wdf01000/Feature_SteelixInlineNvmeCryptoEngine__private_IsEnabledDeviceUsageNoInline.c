/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140096390
 * Callers:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x1400963CC (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

int __fastcall Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange64 & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_SteelixInlineNvmeCryptoEngine__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
