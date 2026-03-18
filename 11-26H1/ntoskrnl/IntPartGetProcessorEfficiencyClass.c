/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1405F3550
 * Callers:
 *     IntPartGetClassAffinityGroup @ 0x140D01F90 (IntPartGetClassAffinityGroup.c)
 *     IntpAllocateProcessorContext @ 0x140D02508 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(struct _PROCESSOR_NUMBER *a1)
{
  return (KiInterruptSteeringFlags & 0x10) == 0
      && *(_BYTE *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)] + 35352) != 0;
}
