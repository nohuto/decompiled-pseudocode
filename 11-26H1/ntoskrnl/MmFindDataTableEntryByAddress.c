/*
 * XREFs of MmFindDataTableEntryByAddress @ 0x140366EA0
 * Callers:
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x140419600 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x140419660 (RtlPcToFileImageInfo.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiIsDriverPage @ 0x1404BD140 (MiIsDriverPage.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404C3220 (MiLogSystemImageReadOnlyPageViolation.c)
 *     ViAddVerifierSpecialThunks @ 0x14064081C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x140640934 (ViAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x1406FBAE0 (MmGetImageRetpolineCodePage.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14087BAA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140C014C8 (MmMarkImageForHiberPhase.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 *     MiBuildImportsForBootDrivers @ 0x140CFFA0C (MiBuildImportsForBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D04EDC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D05314 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiImageContainsVa @ 0x1404BD1D8 (MiImageContainsVa.c)
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
  Flink = stru_140E2D150.SuspendEvent.Header.WaitListHead.Flink;
  if ( !stru_140E2D150.SuspendEvent.Header.WaitListHead.Flink )
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
