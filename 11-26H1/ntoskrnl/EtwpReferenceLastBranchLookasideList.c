/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x140B3F2FC
 * Callers:
 *     EtwpUpdateLastBranchTracingHalState @ 0x1404FA508 (EtwpUpdateLastBranchTracingHalState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

struct _SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  int v0; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement((volatile signed __int32 *)&stru_140E28440.MutantListHead.Blink);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E28440.ThreadListEntry.Blink, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement((_DWORD *)&stru_140E28440.MutantListHead.Blink + 1);
  }
  while ( (int)result < v0 );
  return result;
}
