/*
 * XREFs of ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     hdevEnumerateDisplayOnly @ 0x14004BB30 (hdevEnumerateDisplayOnly.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x140072CEC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140074AC0 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140087710 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400878A0 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     DxgkEngAssertGdiOutput @ 0x140117BE0 (DxgkEngAssertGdiOutput.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401271A0 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401D06A0 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1401770D0 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3CA0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

PDEV *__fastcall hdevEnumerate<1>(PDEV *this)
{
  __int64 *v2; // rdi
  PDEV *v3; // rsi
  PDEV *v4; // rcx
  PDEV *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 **)(W32GetSessionState(this) + 88);
  GreAcquireSemaphore<19,>(v2);
  v3 = 0LL;
  v6 = this;
  if ( this )
    v4 = *(PDEV **)this;
  else
    v4 = (PDEV *)v2[481];
  while ( v4 )
  {
    if ( (*((_DWORD *)v4 + 10) & 1) != 0 )
    {
      v3 = v4;
      PDEV::IncrementClientReferenceCount(v4);
      break;
    }
    v4 = *(PDEV **)v4;
  }
  if ( this )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *v2);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v6);
      return v3;
    }
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      PDEV::DecrementClientReferenceCountFastOpt(this, (struct Gre::Base::SESSION_GLOBALS *)v2);
    else
      PDEV::DecrementClientReferenceCount(this);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *v2);
  return v3;
}
