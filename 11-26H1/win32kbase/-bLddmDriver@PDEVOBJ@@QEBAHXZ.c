/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518
 * Callers:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C (-DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0 (DrvGetRenderAdapterLuidFromHDEV.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401F9D30 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( !v1 || v1 == -4 )
    return 0LL;
  else
    return (*(_DWORD *)(v1 + 160) >> 23) & 1;
}
