/*
 * XREFs of Feature_1023137082__private_IsEnabledFallback @ 0x1406C9C34
 * Callers:
 *     Feature_1023137082__private_IsEnabledDeviceUsageNoInline @ 0x1406C9BF8 (Feature_1023137082__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1023137082__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1023137082__private_descriptor, 0);
}
