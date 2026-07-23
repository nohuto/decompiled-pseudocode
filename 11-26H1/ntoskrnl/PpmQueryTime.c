/*
 * XREFs of PpmQueryTime @ 0x14021C9E8
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1407CC980 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409F8FCC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
