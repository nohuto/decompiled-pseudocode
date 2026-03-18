/*
 * XREFs of EtwTraceGreLockReleaseSemaphore @ 0x140044440
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140044510 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x140045220 (MultiUserGreTrackAddEngResource.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x1400454D0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     GreSfmOpenTokenEvent @ 0x1400B1D10 (GreSfmOpenTokenEvent.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?vUnlock@?$SEMOBJ@$06@@QEAAXXZ @ 0x1400C7108 (-vUnlock@-$SEMOBJ@$06@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14010E4D0 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ulIndexToRGB @ 0x140117310 (ulIndexToRGB.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GreSfmDwmShutdown @ 0x140158FF0 (GreSfmDwmShutdown.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401896B8 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140190918 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401EDE88 (-bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401F3274 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0 (DrvGetRenderAdapterLuidFromHDEV.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     GreDrvConnect @ 0x1401FACD0 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401FB020 (HDXDrvEscape.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockReleaseSemaphore(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, a2, a1);
  }
  return result;
}
