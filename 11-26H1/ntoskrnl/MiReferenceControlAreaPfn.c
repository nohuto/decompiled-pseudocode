/*
 * XREFs of MiReferenceControlAreaPfn @ 0x14036E930
 * Callers:
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiAddMemorySubsectionRefs @ 0x1406ECA10 (MiAddMemorySubsectionRefs.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiReferenceControlAreaPfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    a2 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) += v4;
  if ( a2 )
    *(_DWORD *)(a2 + 104) += v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *(_DWORD *)(a1 + 72) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
}
