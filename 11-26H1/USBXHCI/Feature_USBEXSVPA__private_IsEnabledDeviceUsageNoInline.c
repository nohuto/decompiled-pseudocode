/*
 * XREFs of Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x140044F0C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_USBEXSVPA__private_IsEnabledFallback @ 0x140044F48 (Feature_USBEXSVPA__private_IsEnabledFallback.c)
 */

__int64 Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline()
{
  if ( (*(_BYTE *)(&WPP_MAIN_CB.Reserved + 1) & 0x10) != 0 )
    return *(_BYTE *)(&WPP_MAIN_CB.Reserved + 1) & 1;
  else
    return Feature_USBEXSVPA__private_IsEnabledFallback(*((unsigned int *)&WPP_MAIN_CB.Reserved + 2), 3LL);
}
