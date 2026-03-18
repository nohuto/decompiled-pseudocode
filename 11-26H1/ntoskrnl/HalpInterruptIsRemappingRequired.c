/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x1404E7C88
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140781120 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BEE7C0 (HalpInterruptSwapProcessorIdentifiers.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
