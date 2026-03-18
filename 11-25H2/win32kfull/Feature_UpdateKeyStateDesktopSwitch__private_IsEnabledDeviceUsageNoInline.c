/*
 * XREFs of Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline @ 0x140288700
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ClearKeyboardStates @ 0x140247ACC (ClearKeyboardStates.c)
 * Callees:
 *     Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledFallback @ 0x140288738 (Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledFallback.c)
 */

__int64 Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UpdateKeyStateDesktopSwitch__private_featureState & 0x10) != 0 )
    return Feature_UpdateKeyStateDesktopSwitch__private_featureState & 1;
  else
    return Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledFallback(
             (unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_featureState,
             3LL);
}
