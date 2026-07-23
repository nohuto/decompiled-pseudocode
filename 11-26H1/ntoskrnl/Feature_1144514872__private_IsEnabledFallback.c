/*
 * XREFs of Feature_1144514872__private_IsEnabledFallback @ 0x1406CA224
 * Callers:
 *     Feature_1144514872__private_IsEnabledDeviceUsageNoInline @ 0x1406CA1E8 (Feature_1144514872__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1144514872__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_1144514872__private_descriptor, 0);
}
