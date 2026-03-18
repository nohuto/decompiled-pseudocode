/*
 * XREFs of EtwpAdjustStackLookasideBuffers @ 0x140488894
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1404887E0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140B22C70 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustStackLookasideBuffers()
{
  PSLIST_ENTRY result; // rax
  void *v1; // rbx

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( *(int *)&stru_140E28440.PriorityFloorCounts[12] > 2
                                                       * (int)KeNumberProcessors_0
                                                       * *(_DWORD *)&stru_140E28440.PriorityFloorCounts[8] )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E28440.IoSelfBoostsEntry);
      v1 = result;
      if ( !result )
        break;
      KeFreeCalloutStack(*((PVOID *)&result[1].Next + 1));
      ExFreePoolWithTag(v1, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[12]) > 2 * (int)KeNumberProcessors_0 * *(_DWORD *)&stru_140E28440.PriorityFloorCounts[8] );
  }
  return result;
}
