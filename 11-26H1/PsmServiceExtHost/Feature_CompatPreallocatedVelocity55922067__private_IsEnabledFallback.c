/*
 * XREFs of Feature_CompatPreallocatedVelocity55922067__private_IsEnabledFallback @ 0x1800941E8
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline @ 0x1800941B4 (Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922067__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompatPreallocatedVelocity55922067__private_descriptor);
}
