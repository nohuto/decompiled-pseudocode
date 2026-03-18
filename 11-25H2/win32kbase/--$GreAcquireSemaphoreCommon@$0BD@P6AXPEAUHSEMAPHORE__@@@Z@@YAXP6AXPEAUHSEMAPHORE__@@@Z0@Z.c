/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14004E2D4
 * Callers:
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401CD1E0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CDE60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<19>();
}
