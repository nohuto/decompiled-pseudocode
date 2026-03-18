/*
 * XREFs of IntPartAllocateAndZeroMemory @ 0x14004E394
 * Callers:
 *     IntPartArbInit @ 0x1400BFF80 (IntPartArbInit.c)
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1400D092C (ProcessorpSelectProcessorSetFromPartitions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntPartAllocateAndZeroMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1232102209LL);
}
