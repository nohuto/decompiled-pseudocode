/*
 * XREFs of EtwTraceGreLockReleaseSemaphore @ 0x140045890
 * Callers:
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x14000DAF0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140043A70 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x140043B3C (--1-$SEMOBJEXORSHARED@$01@@QEAA@XZ.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004507C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x140045580 (GreReleaseHmgrSemaphore.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045680 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140045770 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140045DD0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ??1MLOCKOBJ@@QEAA@XZ @ 0x140045EA4 (--1MLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046440 (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046508 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x140046870 (-W32kReleaseDynamicModeChangeLockShared@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046B64 (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046DC8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400479D0 (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x14004DA74 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14006E3D0 (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSfmGetNotificationTokens @ 0x140073330 (GreSfmGetNotificationTokens.c)
 *     DrvDisableMDEV @ 0x140074C10 (DrvDisableMDEV.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400867D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     GreIsDisconnectDeviceAttached @ 0x14008E108 (GreIsDisconnectDeviceAttached.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ulIndexToRGB @ 0x140090D30 (ulIndexToRGB.c)
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400D6250 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     DxgkEngVisRgnUniq @ 0x1400F3650 (DxgkEngVisRgnUniq.c)
 *     ??$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F7538 (--$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14013F37C (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140152808 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14015CBF0 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14015DE94 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C5B00 (-bGarbageCollect@XEPALOBJ2@@QEAA_NXZ.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GreDrvConnect @ 0x1401D18C0 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401D1C00 (HDXDrvEscape.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401D2378 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14015E824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EtwTraceGreLockReleaseSemaphore(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r8d
  bool v7; // zf

  result = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    v7 = gbLockEtw == 0;
  }
  else
  {
    result = W32GetSessionState(v5);
    v5 = *(_QWORD *)(result + 88);
    v7 = *(_DWORD *)(v5 + 16) == 0;
  }
  if ( !v7 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    return McTemplateK0pz_EtwWriteTransfer(v5, (unsigned int)&LockRelease, v6, a2, a1);
  return result;
}
