/*
 * XREFs of HalpIsPrebootMode @ 0x140584F08
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BEB450 (HalpInterruptInitSystem.c)
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

bool HalpIsPrebootMode()
{
  return HalpPrebootMode != 0;
}
