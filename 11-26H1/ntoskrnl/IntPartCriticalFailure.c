/*
 * XREFs of IntPartCriticalFailure @ 0x1405F5EE8
 * Callers:
 *     IntPartCreate @ 0x140D08614 (IntPartCreate.c)
 *     IntpAssignProcessorsToPartitions @ 0x140D087AC (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140D08858 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140D088A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
