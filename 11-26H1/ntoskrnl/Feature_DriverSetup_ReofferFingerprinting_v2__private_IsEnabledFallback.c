/*
 * XREFs of Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x1406DF354
 * Callers:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x1406DF318 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DriverSetup_ReofferFingerprinting_v2__private_descriptor,
           0);
}
