/*
 * XREFs of MiLockAweVadsExclusive @ 0x1404F877C
 * Callers:
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiAweViewInserter @ 0x140705814 (MiAweViewInserter.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407075A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiClearCloneParentForkInProgress @ 0x140714AF4 (MiClearCloneParentForkInProgress.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140275DA0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL);
  --*(_WORD *)(a1 + 486);
  ExAcquireAutoExpandPushLockExclusive(v2 + 1312, 0LL);
}
