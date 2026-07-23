/*
 * XREFs of Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x18013B75C
 * Callers:
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x18013B728 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DriverStore_EnumerateBlockedDrivers__private_descriptor);
}
