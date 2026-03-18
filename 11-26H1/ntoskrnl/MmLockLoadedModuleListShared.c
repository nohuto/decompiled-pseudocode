/*
 * XREFs of MmLockLoadedModuleListShared @ 0x140366E14
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x140419600 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x140419660 (RtlPcToFileImageInfo.c)
 *     MiIsDriverPage @ 0x1404BD140 (MiIsDriverPage.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404C3220 (MiLogSystemImageReadOnlyPageViolation.c)
 *     MiDriverPdeOkToDelete @ 0x1406E3950 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x1406FBAE0 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140C014C8 (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    v3 = (volatile LONG *)(*(_QWORD *)(384 * v2 + qword_140E2D6B8 + 376) + 704LL);
  else
    v3 = &PsLoadedModuleSpinLock;
  ExAcquireSpinLockSharedAtDpcLevel(v3);
  return CurrentIrql;
}
