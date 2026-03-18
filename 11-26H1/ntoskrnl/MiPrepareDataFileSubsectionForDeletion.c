/*
 * XREFs of MiPrepareDataFileSubsectionForDeletion @ 0x1404B5148
 * Callers:
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x14030BE90 (MiIncrementSubsectionViewCount.c)
 */

void __fastcall MiPrepareDataFileSubsectionForDeletion(__int64 *BugCheckParameter2, int a2)
{
  __int64 v2; // rdi
  KIRQL v4; // bl

  v2 = *BugCheckParameter2;
  v4 = 17;
  if ( !a2 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  MiIncrementSubsectionViewCount(BugCheckParameter2, 0);
  if ( v4 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), v4);
}
