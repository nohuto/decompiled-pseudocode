/*
 * XREFs of Feature_1811147066__private_IsEnabledDeviceUsageNoInline @ 0x14061C670
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1409FD020 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_1811147066__private_IsEnabledFallback @ 0x14061C6AC (Feature_1811147066__private_IsEnabledFallback.c)
 */

__int64 Feature_1811147066__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1811147066__private_featureState & 0x10) != 0 )
    return Feature_1811147066__private_featureState & 1;
  else
    return Feature_1811147066__private_IsEnabledFallback((unsigned int)Feature_1811147066__private_featureState, 3LL);
}
