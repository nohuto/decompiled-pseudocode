/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x14072D0F0
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x14072D0D0 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x1405FCE30 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
