/*
 * XREFs of Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140055CAC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x140262F80 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     NtGdiRestoreDC @ 0x140263D60 (NtGdiRestoreDC.c)
 *     DrvReleaseHDEV @ 0x140323F48 (DrvReleaseHDEV.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledFallback @ 0x1402FDDA4 (Feature_GDI_GlobalsOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GDI_GlobalsOptimization__private_featureState & 0x10) != 0 )
    return Feature_GDI_GlobalsOptimization__private_featureState & 1;
  else
    return Feature_GDI_GlobalsOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_GDI_GlobalsOptimization__private_featureState,
             3LL);
}
