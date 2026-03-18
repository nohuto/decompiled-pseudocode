/*
 * XREFs of Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x140720E84
 * Callers:
 *     SeQueryHSTIResults @ 0x1408AB510 (SeQueryHSTIResults.c)
 * Callees:
 *     Feature_HstiUMAFix__private_IsEnabledFallback @ 0x140720EC0 (Feature_HstiUMAFix__private_IsEnabledFallback.c)
 */

__int64 Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HstiUMAFix__private_featureState & 0x10) != 0 )
    return Feature_HstiUMAFix__private_featureState & 1;
  else
    return Feature_HstiUMAFix__private_IsEnabledFallback((unsigned int)Feature_HstiUMAFix__private_featureState, 3LL);
}
