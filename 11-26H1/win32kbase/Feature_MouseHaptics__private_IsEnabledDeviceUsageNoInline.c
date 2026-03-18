/*
 * XREFs of Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14021B4D4
 * Callers:
 *     InputHapticsTrigger @ 0x14021BBB0 (InputHapticsTrigger.c)
 * Callees:
 *     Feature_MouseHaptics__private_IsEnabledFallback @ 0x14021B510 (Feature_MouseHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MouseHaptics__private_featureState & 0x10) != 0 )
    return Feature_MouseHaptics__private_featureState & 1;
  else
    return Feature_MouseHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_MouseHaptics__private_featureState,
             3LL);
}
