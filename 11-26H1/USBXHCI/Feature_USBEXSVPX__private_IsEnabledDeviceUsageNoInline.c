/*
 * XREFs of Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline @ 0x140044F64
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_USBEXSVPX__private_IsEnabledFallback @ 0x140044FA0 (Feature_USBEXSVPX__private_IsEnabledFallback.c)
 */

__int64 Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceObjectExtension & 1;
  else
    return Feature_USBEXSVPX__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceObjectExtension), 3LL);
}
