/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1400431E4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     DrvGetHDEV @ 0x14004D9C0 (DrvGetHDEV.c)
 *     DrvDestroyMDEV @ 0x14006E2AC (DrvDestroyMDEV.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14006E3D0 (DrvCleanupAndDestroyMDEV.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140085148 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ldevLoadInternal @ 0x140101720 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x140101E40 (ldevUnloadImage.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x14014E210 (DrvInitializeDxgkrnlDpiCache.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C3EE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3F70 (-vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3FF0 (-vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvCleanupGraphicsDevices @ 0x1401CCBD4 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401CD1E0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CDE60 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1401CE0F0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreDrvConnect @ 0x1401D18C0 (GreDrvConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore((__int64)L"DriverMgmt", a2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  if ( (v7 & -(__int64)(v8 != 0)) != 0 && (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0x1B))-- == 1 )
    *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~0x80000uLL;
  return a1(a2);
}
