/*
 * XREFs of MiUnfreezeIoPfnNode @ 0x1406F9AAC
 * Callers:
 *     MiDbgLockIoPage @ 0x140702D80 (MiDbgLockIoPage.c)
 *     MiDbgUnmapPhysicalAddress @ 0x14070393C (MiDbgUnmapPhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
