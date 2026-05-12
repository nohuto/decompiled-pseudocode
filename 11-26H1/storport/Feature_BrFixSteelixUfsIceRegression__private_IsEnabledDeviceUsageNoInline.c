/*
 * XREFs of Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline @ 0x140070B48
 * Callers:
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x140071250 (RaidAdapterSendCryptoOperationSynchronously.c)
 * Callees:
 *     Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback @ 0x140070B84 (Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback.c)
 */

__int64 Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_BrFixSteelixUfsIceRegression__private_featureState & 0x10) != 0 )
    return Feature_BrFixSteelixUfsIceRegression__private_featureState & 1;
  else
    return Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback(
             (unsigned int)Feature_BrFixSteelixUfsIceRegression__private_featureState,
             3LL);
}
