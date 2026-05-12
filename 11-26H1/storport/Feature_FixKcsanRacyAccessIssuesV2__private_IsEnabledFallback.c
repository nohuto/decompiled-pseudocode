/*
 * XREFs of Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback @ 0x1400AE1B4
 * Callers:
 *     Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline @ 0x1400AE178 (Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixKcsanRacyAccessIssuesV2__private_descriptor);
}
