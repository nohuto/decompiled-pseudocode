/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140213808
 * Callers:
 *     ?UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z @ 0x140213740 (-UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140213840 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
