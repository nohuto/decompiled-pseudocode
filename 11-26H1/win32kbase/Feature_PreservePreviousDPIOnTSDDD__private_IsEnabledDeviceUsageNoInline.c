/*
 * XREFs of Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x140152324
 * Callers:
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 *     ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x1401524EC (-bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x1401FBAE0 (-StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback @ 0x1401C6074 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback.c)
 */

__int64 Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PreservePreviousDPIOnTSDDD__private_featureState & 0x10) != 0 )
    return Feature_PreservePreviousDPIOnTSDDD__private_featureState & 1;
  else
    return Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback(
             (unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_featureState,
             3LL);
}
