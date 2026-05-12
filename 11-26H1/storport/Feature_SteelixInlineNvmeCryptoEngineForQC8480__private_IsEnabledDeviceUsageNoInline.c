/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline @ 0x140078B28
 * Callers:
 *     RaidNvmeIceEnableNvmeDevice @ 0x140079FBC (RaidNvmeIceEnableNvmeDevice.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledFallback @ 0x140078B64 (Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_featureState & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngineForQC8480__private_featureState,
             3LL);
}
