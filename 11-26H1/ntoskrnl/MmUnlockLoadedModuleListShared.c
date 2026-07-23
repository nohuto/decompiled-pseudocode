/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140368B2C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x14040DB90 (RtlPcToFileImageInfo.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70 (MiLogSystemImageReadOnlyPageViolation.c)
 *     MiDriverPdeOkToDelete @ 0x1406E85FC (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x1407007B0 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140C076D8 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  volatile LONG *v3; // rcx

  v1 = a1;
  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (_WORD)v2 )
    v3 = (volatile LONG *)(*(_QWORD *)(384 * v2 + qword_140E2D838 + 376) + 704LL);
  else
    v3 = &PsLoadedModuleSpinLock;
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
    __writecr8(v1);
  }
}
