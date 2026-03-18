/*
 * XREFs of ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520
 * Callers:
 *     ??$GrepAcquireLockValidate@$0CG@@@YAXXZ @ 0x1400132C8 (--$GrepAcquireLockValidate@$0CG@@@YAXXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140014884 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     ?AcquireLockShared@GreInnermostPushLock@@QEBAXXZ @ 0x140014F80 (-AcquireLockShared@GreInnermostPushLock@@QEBAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030 (--$GrepAcquireLockValidate@$0CF@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x140015634 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B36C (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14001C604 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CE94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CF68 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14001D2CC (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14003D720 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140044510 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x140045220 (MultiUserGreTrackAddEngResource.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0CD@@@YAXXZ @ 0x1400453DC (--$GrepAcquireLockValidate@$0CD@@@YAXXZ.c)
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x1400454D0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     GreIsDisconnectDeviceAttached @ 0x1400587A4 (GreIsDisconnectDeviceAttached.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     GreSfmOpenTokenEvent @ 0x1400B1D10 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1400B2E90 (GreSfmGetNotificationTokens.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?vUnlock@?$SEMOBJ@$06@@QEAAXXZ @ 0x1400C7108 (-vUnlock@-$SEMOBJ@$06@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C796C (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400FE8B0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ulIndexToRGB @ 0x140117310 (ulIndexToRGB.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14013B2A8 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140143538 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSfmDwmShutdown @ 0x140158FF0 (GreSfmDwmShutdown.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401896B8 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140190918 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ??$GrepAcquireLockValidate@$0CB@@@YAXXZ @ 0x1401C3FF4 (--$GrepAcquireLockValidate@$0CB@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x1401C4C68 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401EDE88 (-bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0 (DrvGetRenderAdapterLuidFromHDEV.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     GreDrvConnect @ 0x1401FACD0 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401FB020 (HDXDrvEscape.c)
 * Callees:
 *     <none>
 */

struct _GRETHREAD *GreGetCurrentThreadCrossSessionCheck(void)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v2; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v2 = *ThreadWin32Thread) != 0 )
  {
    return (struct _GRETHREAD *)(v2 + 8);
  }
  else
  {
    return 0LL;
  }
}
