/*
 * XREFs of Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x180113F8C
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x180044EB0 (RtlpQueryRegistryDirect.c)
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
