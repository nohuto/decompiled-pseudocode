/*
 * XREFs of CmpGetPhaseAccessBit @ 0x140B6CCD4
 * Callers:
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
