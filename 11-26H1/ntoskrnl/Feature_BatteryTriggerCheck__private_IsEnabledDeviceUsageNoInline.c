/*
 * XREFs of Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline @ 0x14060F7E8
 * Callers:
 *     PopRecalculateCBTriggerLevels @ 0x1409C3354 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     Feature_BatteryTriggerCheck__private_IsEnabledFallback @ 0x14060F824 (Feature_BatteryTriggerCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_BatteryTriggerCheck__private_featureState & 0x10) != 0 )
    return Feature_BatteryTriggerCheck__private_featureState & 1;
  else
    return Feature_BatteryTriggerCheck__private_IsEnabledFallback(
             (unsigned int)Feature_BatteryTriggerCheck__private_featureState,
             3LL);
}
