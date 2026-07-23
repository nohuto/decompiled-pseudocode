/*
 * XREFs of Feature_DeviceFilter_FilterConvertToString__private_IsEnabledFallback @ 0x14071E8E4
 * Callers:
 *     Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline @ 0x14071E8A8 (Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DeviceFilter_FilterConvertToString__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DeviceFilter_FilterConvertToString__private_descriptor,
           0);
}
