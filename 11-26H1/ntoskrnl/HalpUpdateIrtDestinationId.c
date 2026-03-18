/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x14058FB7C
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BEE7C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140BEBB50 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
