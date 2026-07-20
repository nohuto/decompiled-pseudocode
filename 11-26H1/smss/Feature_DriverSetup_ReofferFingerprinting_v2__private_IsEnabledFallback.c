/*
 * XREFs of Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x14001996C
 * Callers:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x140019938 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DriverSetup_ReofferFingerprinting_v2__private_descriptor);
}
