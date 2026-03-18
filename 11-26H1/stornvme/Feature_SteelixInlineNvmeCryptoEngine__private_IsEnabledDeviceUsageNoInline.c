/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x1400121D8
 * Callers:
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140012214 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             3LL);
}
