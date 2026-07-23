/*
 * XREFs of HalpBlkIdleHalt @ 0x140C828C0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140C827E0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
