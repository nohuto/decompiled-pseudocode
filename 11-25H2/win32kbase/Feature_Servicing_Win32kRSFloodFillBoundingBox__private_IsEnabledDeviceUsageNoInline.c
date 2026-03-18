/*
 * XREFs of Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledDeviceUsageNoInline @ 0x1401C4AC0
 * Callers:
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?Feature_Servicing_Win32kRSFloodFillBoundingBox_ffi_IsEnabled@@YA_NXZ @ 0x1401C4490 (-Feature_Servicing_Win32kRSFloodFillBoundingBox_ffi_IsEnabled@@YA_NXZ.c)
 * Callees:
 *     Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledFallback @ 0x1401C4AF8 (Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Win32kRSFloodFillBoundingBox__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Win32kRSFloodFillBoundingBox__private_featureState & 1;
  else
    return Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Win32kRSFloodFillBoundingBox__private_featureState,
             3LL);
}
