/*
 * XREFs of Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback @ 0x140086F20
 * Callers:
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x140086EE4 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Usb4PerAdapterPowerQueue__private_descriptor);
}
