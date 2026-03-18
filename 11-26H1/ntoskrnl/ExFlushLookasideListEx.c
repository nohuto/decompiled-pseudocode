/*
 * XREFs of ExFlushLookasideListEx @ 0x1404BCCD0
 * Callers:
 *     ExDeleteLookasideListEx @ 0x1404BCBF0 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      guard_dispatch_icall_no_overrides(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
