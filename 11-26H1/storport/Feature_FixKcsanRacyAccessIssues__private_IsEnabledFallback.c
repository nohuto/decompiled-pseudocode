/*
 * XREFs of Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback @ 0x1400AE20C
 * Callers:
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline @ 0x1400AE1D0 (Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixKcsanRacyAccessIssues__private_descriptor);
}
