/*
 * XREFs of ViPoolDelayFreeTrimThreadRoutine @ 0x140B8A530
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall __noreturn ViPoolDelayFreeTrimThreadRoutine(_SLIST_HEADER *StartContext)
{
  PSLIST_ENTRY v2; // rax
  _SLIST_ENTRY *Next; // rbx

  while ( 1 )
  {
    do
    {
      KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
      ++*((_DWORD *)&StartContext[3].HeaderX64 + 3);
      v2 = RtlpInterlockedFlushSList(StartContext);
    }
    while ( !v2 );
    do
    {
      Next = v2->Next;
      ExFreePoolWithTag(v2, 0);
      v2 = Next;
    }
    while ( Next );
  }
}
