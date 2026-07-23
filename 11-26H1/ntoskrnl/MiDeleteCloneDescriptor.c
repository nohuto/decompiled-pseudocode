/*
 * XREFs of MiDeleteCloneDescriptor @ 0x1404A92D8
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1404A91C0 (MiDecrementCloneBlockReference.c)
 *     MiDeleteCloneTree @ 0x140528E14 (MiDeleteCloneTree.c)
 * Callees:
 *     MiRemoveClone @ 0x1404A9318 (MiRemoveClone.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(__int64 a1, _SLIST_ENTRY *a2)
{
  MiRemoveClone();
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1040) + 1216LL), a2 + 5);
}
