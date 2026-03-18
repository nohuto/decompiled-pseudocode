/*
 * XREFs of ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F60B8
 * Callers:
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     DrvReleaseHDEV @ 0x1403465C8 (DrvReleaseHDEV.c)
 *     EngLoadImage @ 0x140346920 (EngLoadImage.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<19>::SEMOBJ<19>(HSEMAPHORE *a1, HSEMAPHORE *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<19>();
  return a1;
}
