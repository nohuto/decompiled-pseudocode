/*
 * XREFs of EtwpAdjustLastBranchLookasideBuffers @ 0x14048259C
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140482320 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustLastBranchLookasideBuffers()
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( *(int *)&stru_140E285C0.PriorityFloorCounts[12] > 2
                                                       * (int)KeNumberProcessors_0
                                                       * *(_DWORD *)&stru_140E285C0.PriorityFloorCounts[8] )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E285C0.IoSelfBoostsEntry);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement((volatile signed __int32 *)&stru_140E285C0.PriorityFloorCounts[12]) > 2 * (int)KeNumberProcessors_0 * *(_DWORD *)&stru_140E285C0.PriorityFloorCounts[8] );
  }
  return result;
}
