/*
 * XREFs of Feature_SrtmAntiRollback__private_IsEnabledFallback @ 0x140609CC8
 * Callers:
 *     Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline @ 0x140609C8C (Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline @ 0x140609CEC (Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SrtmAntiRollback__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_SrtmAntiRollback__private_descriptor,
           1);
}
