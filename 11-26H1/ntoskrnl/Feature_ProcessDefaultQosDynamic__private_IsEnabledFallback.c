/*
 * XREFs of Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback @ 0x1405F93D0
 * Callers:
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405F9394 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_ProcessDefaultQosDynamic__private_descriptor,
           0);
}
