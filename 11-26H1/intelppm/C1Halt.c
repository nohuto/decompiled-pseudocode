/*
 * XREFs of C1Halt @ 0x140010320
 * Callers:
 *     C1Idle @ 0x140009AF0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x140009E50 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
