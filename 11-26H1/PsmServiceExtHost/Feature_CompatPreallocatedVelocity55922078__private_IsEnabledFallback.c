/*
 * XREFs of Feature_CompatPreallocatedVelocity55922078__private_IsEnabledFallback @ 0x180094500
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline @ 0x1800944CC (Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922078__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompatPreallocatedVelocity55922078__private_descriptor);
}
