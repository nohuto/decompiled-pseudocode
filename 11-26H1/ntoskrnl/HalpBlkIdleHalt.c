/*
 * XREFs of HalpBlkIdleHalt @ 0x140C7C8C0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140C7C7E0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
