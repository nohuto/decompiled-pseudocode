/*
 * XREFs of MmFindDataTableEntryByAddress @ 0x140368C40
 * Callers:
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x14040DB90 (RtlPcToFileImageInfo.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70 (MiLogSystemImageReadOnlyPageViolation.c)
 *     ViAddVerifierSpecialThunks @ 0x1406443FC (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x140644514 (ViAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x1407007B0 (MmGetImageRetpolineCodePage.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140881EA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140C076D8 (MmMarkImageForHiberPhase.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 *     MiBuildImportsForBootDrivers @ 0x140D05DAC (MiBuildImportsForBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D0B5E4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiImageContainsVa @ 0x1404B69B8 (MiImageContainsVa.c)
 */

struct _LIST_ENTRY *__fastcall MmFindDataTableEntryByAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v3; // r8
  __int64 v5; // r10
  __int64 i; // r8
  __int64 *v7; // r8

  v1 = a1;
  if ( !PsLoadedModuleList )
  {
    v5 = KeLoaderBlock_0 + 16;
    for ( i = *(_QWORD *)(KeLoaderBlock_0 + 16); i != v5; i = *v7 )
    {
      if ( (unsigned int)MiImageContainsVa(i, v1) )
        return (struct _LIST_ENTRY *)v7;
    }
    return 0LL;
  }
  Flink = stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Flink;
  if ( !stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Flink )
    return 0LL;
  do
  {
    v3 = Flink[-10].Flink;
    if ( a1 > (unsigned __int64)v3 + (unsigned int)(LODWORD(Flink[-9].Flink) - 1) )
    {
      Flink = Flink->Blink;
    }
    else
    {
      if ( a1 >= (unsigned __int64)v3 )
        break;
      Flink = Flink->Flink;
    }
  }
  while ( Flink );
  if ( !Flink )
    return 0LL;
  return Flink - 13;
}
