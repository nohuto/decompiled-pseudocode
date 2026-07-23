/*
 * XREFs of Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledFallback @ 0x1405F3EE4
 * Callers:
 *     Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledNoReportingNoInline @ 0x1405F3F04 (Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_UnexpectedWakeInterrupt__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_UnexpectedWakeInterrupt__private_descriptor,
           0);
}
