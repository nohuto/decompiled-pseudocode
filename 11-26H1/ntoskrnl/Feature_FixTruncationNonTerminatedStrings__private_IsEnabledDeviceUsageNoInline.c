/*
 * XREFs of Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x1404ED38C
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x140A109F8 (RtlpQueryRegistryDirect.c)
 * Callees:
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback @ 0x140535214 (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback.c)
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
