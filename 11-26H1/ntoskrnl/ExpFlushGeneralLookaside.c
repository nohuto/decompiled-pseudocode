/*
 * XREFs of ExpFlushGeneralLookaside @ 0x1404B6384
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1404B62D0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404B6330 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(_SLIST_HEADER *a1)
{
  __int64 v1; // rdx
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      guard_dispatch_icall_no_overrides(v2, v1);
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
