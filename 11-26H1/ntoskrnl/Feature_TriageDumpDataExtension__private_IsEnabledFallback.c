/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x1405E8734
 * Callers:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405E86F8 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TriageDumpDataExtension__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_TriageDumpDataExtension__private_descriptor,
           0);
}
