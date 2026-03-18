/*
 * XREFs of ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     ??0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z @ 0x14009FA00 (--0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreDesktopSwitch @ 0x140230AF8 (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJ<3>::SEMOBJ<3>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx

  v3 = *a2 + 728LL;
  *a1 = v3;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v3);
  return a1;
}
