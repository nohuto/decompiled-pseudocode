/*
 * XREFs of Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1402A58C8
 * Callers:
 *     SetKeyboardRate @ 0x140148D58 (SetKeyboardRate.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledFallback @ 0x1402A5900 (Feature_KeyboardLEDImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KeyboardLEDImprovements__private_featureState & 0x10) != 0 )
    return Feature_KeyboardLEDImprovements__private_featureState & 1;
  else
    return Feature_KeyboardLEDImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_KeyboardLEDImprovements__private_featureState,
             3LL);
}
