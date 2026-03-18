/*
 * XREFs of ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50
 * Callers:
 *     ??0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z @ 0x14009FA00 (--0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140334D0C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140336D94 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<8>::SEMOBJ<8>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 48LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<8>();
  return a1;
}
