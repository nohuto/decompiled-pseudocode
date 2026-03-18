/*
 * XREFs of Feature_USBEXSVPA__private_IsEnabledFallback @ 0x140044F48
 * Callers:
 *     Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x140044F0C (Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_USBEXSVPA__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_USBEXSVPA__private_descriptor);
}
