/*
 * XREFs of Feature_CompatPreallocatedVelocity55922063__private_IsEnabledFallback @ 0x180094110
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline @ 0x1800940DC (Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922063__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompatPreallocatedVelocity55922063__private_descriptor);
}
