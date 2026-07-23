/*
 * XREFs of Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x18013B714
 * Callers:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x18013B6E0 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DriverSetup_ReofferFingerprinting_v2__private_descriptor);
}
