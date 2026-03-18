/*
 * XREFs of HalpBlkIdlePortReadHalt @ 0x140C7C8D0
 * Callers:
 *     HalpBlkIdleLoop @ 0x140C7C7E0 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkIdlePortReadHalt(unsigned __int16 a1)
{
  __inbyte(a1);
  _enable();
  __halt();
}
