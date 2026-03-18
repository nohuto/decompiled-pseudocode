/*
 * XREFs of PpmQueryTime @ 0x14021B058
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1407C98E0 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A3D5AC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
