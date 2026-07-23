/*
 * XREFs of HalpIsPrebootMode @ 0x140587428
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

bool HalpIsPrebootMode()
{
  return HalpPrebootMode != 0;
}
