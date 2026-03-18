/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C6728
 * Callers:
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401F7ED0 (DrvGetRenderAdapterLuidFromHDEV.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<8>();
}
