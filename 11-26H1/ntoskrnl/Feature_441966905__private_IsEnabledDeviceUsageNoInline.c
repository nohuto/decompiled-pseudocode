/*
 * XREFs of Feature_441966905__private_IsEnabledDeviceUsageNoInline @ 0x1405CC02C
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     Feature_441966905__private_IsEnabledFallback @ 0x1405CC068 (Feature_441966905__private_IsEnabledFallback.c)
 */

__int64 Feature_441966905__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_441966905__private_featureState & 0x10) != 0 )
    return Feature_441966905__private_featureState & 1;
  else
    return Feature_441966905__private_IsEnabledFallback((unsigned int)Feature_441966905__private_featureState, 3LL);
}
