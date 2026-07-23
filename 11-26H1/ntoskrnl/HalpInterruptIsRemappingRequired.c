/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x1404E1048
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140783C20 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
