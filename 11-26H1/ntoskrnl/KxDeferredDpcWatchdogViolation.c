/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x140728520
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x140728500 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x1405FA410 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
