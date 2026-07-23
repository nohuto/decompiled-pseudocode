/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x140527850
 * Callers:
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiAweViewInserter @ 0x140705814 (MiAweViewInserter.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407075A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiClearCloneParentForkInProgress @ 0x140714AF4 (MiClearCloneParentForkInProgress.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027C120 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL) + 1312LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v3, v2);
}
