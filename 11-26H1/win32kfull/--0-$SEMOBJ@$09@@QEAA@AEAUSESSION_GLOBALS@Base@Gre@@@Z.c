/*
 * XREFs of ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14025549C
 * Callers:
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     GreCreateHalftonePalette @ 0x1403317EC (GreCreateHalftonePalette.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x140182B04 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<10>::SEMOBJ<10>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 1352LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<10>();
  return a1;
}
