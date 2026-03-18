/*
 * XREFs of MiDeleteCloneDescriptor @ 0x1404AFC48
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1404AFB30 (MiDecrementCloneBlockReference.c)
 *     MiDeleteCloneTree @ 0x1405267A4 (MiDeleteCloneTree.c)
 * Callees:
 *     MiRemoveClone @ 0x1404AFC88 (MiRemoveClone.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(__int64 a1, struct _SLIST_ENTRY *a2)
{
  MiRemoveClone();
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1040) + 1216LL), a2 + 5);
}
