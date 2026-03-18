/*
 * XREFs of Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401B4C80
 * Callers:
 *     RIMIsEssentialUsage @ 0x14016A53C (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1401B4BE8 (RIMCheckPressureUsageStatus.c)
 * Callees:
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback @ 0x1401B4CBC (Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback.c)
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
