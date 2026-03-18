/*
 * XREFs of HalpEndOfBoot @ 0x140787690
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140BE917C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
