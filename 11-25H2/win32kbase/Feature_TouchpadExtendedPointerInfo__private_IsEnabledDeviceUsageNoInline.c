/*
 * XREFs of Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401E2140
 * Callers:
 *     RIMCheckPressureUsageStatus @ 0x14017FB54 (RIMCheckPressureUsageStatus.c)
 *     RIMIsEssentialUsage @ 0x140180360 (RIMIsEssentialUsage.c)
 * Callees:
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback @ 0x1401E2178 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadExtendedPointerInfo__private_featureState & 0x10) != 0 )
    return Feature_TouchpadExtendedPointerInfo__private_featureState & 1;
  else
    return Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadExtendedPointerInfo__private_featureState,
             3LL);
}
