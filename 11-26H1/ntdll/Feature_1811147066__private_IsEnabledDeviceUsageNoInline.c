/*
 * XREFs of Feature_1811147066__private_IsEnabledDeviceUsageNoInline @ 0x18013F1A0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180117380 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     <none>
 */

__int64 Feature_1811147066__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1811147066__private_featureState & 0x10) != 0 )
    return Feature_1811147066__private_featureState & 1;
  else
    return Feature_1811147066__private_IsEnabledFallback((unsigned int)Feature_1811147066__private_featureState, 3LL);
}
