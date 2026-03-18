/*
 * XREFs of Feature_EUSB2__private_IsEnabledFallback @ 0x140044CBC
 * Callers:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EUSB2__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_EUSB2__private_descriptor);
}
