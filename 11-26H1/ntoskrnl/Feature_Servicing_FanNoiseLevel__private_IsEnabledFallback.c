/*
 * XREFs of Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback @ 0x14060D4B8
 * Callers:
 *     Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline @ 0x14060D47C (Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_FanNoiseLevel__private_descriptor,
           0);
}
