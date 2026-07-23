/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x1405EDB8C
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405ECF10 (KiAssignSubNodeSharedReadyQueues.c)
 *     KiFreeProcessorSchedulerStructures @ 0x1405EDBC0 (KiFreeProcessorSchedulerStructures.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeLocalSharedReadyQueue(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 37952);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 37952) = 0LL;
  }
}
