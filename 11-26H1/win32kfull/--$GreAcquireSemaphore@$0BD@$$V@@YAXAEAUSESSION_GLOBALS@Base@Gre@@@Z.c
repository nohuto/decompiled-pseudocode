/*
 * XREFs of ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B2C
 * Callers:
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<19,>(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"DriverMgmt", *a1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  return GrepAcquireLockValidate<19>();
}
