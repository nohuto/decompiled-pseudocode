/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x140B4132C
 * Callers:
 *     EtwpUpdateLastBranchTracingHalState @ 0x1404F3B18 (EtwpUpdateLastBranchTracingHalState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2
     * KeNumberProcessors_0
     * _InterlockedIncrement((volatile signed __int32 *)&stru_140E285C0.PriorityFloorCounts[8]);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E285C0.IoSelfBoostsEntry, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&stru_140E285C0.PriorityFloorCounts[12]);
  }
  while ( (int)result < v0 );
  return result;
}
