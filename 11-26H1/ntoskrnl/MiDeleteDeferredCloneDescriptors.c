/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1404F5510
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiDeleteCloneTree @ 0x140528E14 (MiDeleteCloneTree.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 */

PSLIST_ENTRY __fastcall MiDeleteDeferredCloneDescriptors(ULONG_PTR BugCheckParameter1)
{
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *Next; // rbx

  result = RtlpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(BugCheckParameter1 + 1040) + 1216LL));
  if ( result )
  {
    do
    {
      Next = result->Next;
      MiFreeCloneDescriptor(BugCheckParameter1, &result[-5]);
      result = Next;
    }
    while ( Next );
  }
  return result;
}
