/*
 * XREFs of C1Halt @ 0x14000E610
 * Callers:
 *     C1Idle @ 0x140005E40 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1400061A0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
