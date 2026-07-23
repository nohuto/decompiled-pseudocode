/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1405922FC
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140BF1B50 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
