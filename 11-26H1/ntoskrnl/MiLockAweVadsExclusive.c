/*
 * XREFs of MiLockAweVadsExclusive @ 0x1404FEF8C
 * Callers:
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiAweViewInserter @ 0x140700B44 (MiAweViewInserter.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407028D4 (MiRemoveUserPhysicalPagesView.c)
 *     MiClearCloneParentForkInProgress @ 0x14070FDF8 (MiClearCloneParentForkInProgress.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408789FC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140276830 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL);
  --*(_WORD *)(a1 + 486);
  ExAcquireAutoExpandPushLockExclusive(v2 + 1312, 0LL);
}
