/*
 * XREFs of MmLockLoadedModuleListShared @ 0x140368BB4
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
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 MmLockLoadedModuleListShared()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx
  __int64 v2; // rax
  volatile LONG *v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v1 = KeGetCurrentIrql();
    if ( (_BYTE)v1 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1, 15LL);
  }
  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (_WORD)v2 )
    v3 = (volatile LONG *)(*(_QWORD *)(384 * v2 + qword_140E2D838 + 376) + 704LL);
  else
    v3 = &PsLoadedModuleSpinLock;
  ExAcquireSpinLockSharedAtDpcLevel(v3);
  return CurrentIrql;
}
