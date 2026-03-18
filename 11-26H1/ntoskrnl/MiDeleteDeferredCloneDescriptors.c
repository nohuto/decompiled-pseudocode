/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiDeleteCloneTree @ 0x1405267A4 (MiDeleteCloneTree.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     MiFreeCloneDescriptor @ 0x140B44944 (MiFreeCloneDescriptor.c)
 */

PSLIST_ENTRY __fastcall MiDeleteDeferredCloneDescriptors(ULONG_PTR BugCheckParameter1)
{
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *Next; // rbx

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
