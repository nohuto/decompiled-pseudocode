/*
 * XREFs of Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x180114790
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x18005A930 (RtlpQueryRegistryDirect.c)
 * Callees:
 *     <none>
 */

__int64 Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixTruncationNonTerminatedStrings__private_featureState & 0x10) != 0 )
    return Feature_FixTruncationNonTerminatedStrings__private_featureState & 1;
  else
    return Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback(
             (unsigned int)Feature_FixTruncationNonTerminatedStrings__private_featureState,
             3LL);
}
