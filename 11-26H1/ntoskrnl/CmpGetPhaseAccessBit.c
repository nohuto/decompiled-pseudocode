/*
 * XREFs of CmpGetPhaseAccessBit @ 0x140B700A4
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
