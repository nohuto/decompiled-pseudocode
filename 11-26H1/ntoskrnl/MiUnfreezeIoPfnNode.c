/*
 * XREFs of MiUnfreezeIoPfnNode @ 0x1406F4E3C
 * Callers:
 *     MiDbgLockIoPage @ 0x1406FE0B0 (MiDbgLockIoPage.c)
 *     MiDbgUnmapPhysicalAddress @ 0x1406FEC6C (MiDbgUnmapPhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUnfreezeIoPfnNode(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41);
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 172));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 640));
}
