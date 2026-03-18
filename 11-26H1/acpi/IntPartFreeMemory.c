/*
 * XREFs of IntPartFreeMemory @ 0x140071F84
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400BD160 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
