/*
 * XREFs of MmReleaseLoadLock @ 0x14049E200
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x1406443FC (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x140644514 (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x140645100 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140775CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x140873ACC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x14087B164 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140B32F4C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 *     VfDriverEnableVerifierForAll @ 0x140C261A0 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C2E500 (ViDriverReApplyVerifierForAll.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140C4C620 (MmEnableOrDisableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CFA8B8 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140D05DAC (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D0B5E4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14049E290 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLock(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 1LL);
}
