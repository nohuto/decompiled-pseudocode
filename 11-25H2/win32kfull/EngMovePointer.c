/*
 * XREFs of EngMovePointer @ 0x140322A20
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, (__int64)prcl, 0);
}
