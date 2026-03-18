/*
 * XREFs of MiReferenceControlAreaPfn @ 0x14036CB90
 * Callers:
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiAddMemorySubsectionRefs @ 0x1406E7D60 (MiAddMemorySubsectionRefs.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    *(_DWORD *)(a1 + 72) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
}
