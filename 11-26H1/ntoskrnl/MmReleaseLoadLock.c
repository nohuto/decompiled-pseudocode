/*
 * XREFs of MmReleaseLoadLock @ 0x1404A4B70
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x14064081C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x140640934 (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x140641520 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14086D6FC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x14087272C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     MmInsertSecureImageActivePatch @ 0x140874B1C (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x140874D80 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140B30D4C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 *     VfDriverEnableVerifierForAll @ 0x140C20194 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C284F8 (ViDriverReApplyVerifierForAll.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140C46610 (MmEnableOrDisableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CF4538 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140CFFA0C (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D04EDC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D05314 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1404A4C00 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLock(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 1LL);
}
