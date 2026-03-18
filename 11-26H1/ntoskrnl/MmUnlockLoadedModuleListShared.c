/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140366D8C
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  volatile LONG *v3; // rcx

  v1 = a1;
  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (_WORD)v2 )
    v3 = (volatile LONG *)(*(_QWORD *)(384 * v2 + qword_140E2D6B8 + 376) + 704LL);
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
