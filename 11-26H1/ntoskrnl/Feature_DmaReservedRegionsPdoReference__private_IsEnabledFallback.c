/*
 * XREFs of Feature_DmaReservedRegionsPdoReference__private_IsEnabledFallback @ 0x14058C0DC
 * Callers:
 *     Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline @ 0x14058C0A0 (Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DmaReservedRegionsPdoReference__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DmaReservedRegionsPdoReference__private_descriptor,
           0);
}
