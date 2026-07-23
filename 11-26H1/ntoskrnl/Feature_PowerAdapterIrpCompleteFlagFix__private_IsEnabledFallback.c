/*
 * XREFs of Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback @ 0x14060F880
 * Callers:
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x14060F844 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_PowerAdapterIrpCompleteFlagFix__private_descriptor,
           0);
}
