/*
 * XREFs of IntPartCriticalFailure @ 0x1405F3528
 * Callers:
 *     IntPartCreate @ 0x140D02274 (IntPartCreate.c)
 *     IntpAssignProcessorsToPartitions @ 0x140D0240C (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140D024B8 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140D02508 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
