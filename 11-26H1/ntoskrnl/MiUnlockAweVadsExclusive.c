/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1405251E0
 * Callers:
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiAweViewInserter @ 0x140700B44 (MiAweViewInserter.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407028D4 (MiRemoveUserPhysicalPagesView.c)
 *     MiClearCloneParentForkInProgress @ 0x14070FDF8 (MiClearCloneParentForkInProgress.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408789FC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL) + 1312LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
