/*
 * XREFs of HalpEndOfBoot @ 0x14078A1C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140BEF17C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
