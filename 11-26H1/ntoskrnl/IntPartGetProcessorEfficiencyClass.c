/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1405F5F10
 * Callers:
 *     IntPartGetClassAffinityGroup @ 0x140D08330 (IntPartGetClassAffinityGroup.c)
 *     IntpAllocateProcessorContext @ 0x140D088A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(_PROCESSOR_NUMBER *a1)
{
  return (KiInterruptSteeringFlags & 0x10) == 0
      && *(_BYTE *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)] + 35352) != 0;
}
