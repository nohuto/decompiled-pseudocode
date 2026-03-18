/*
 * XREFs of VfDriverLock @ 0x140C46804
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140640700 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x140641520 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverEnableVerifierForAll @ 0x140C20194 (VfDriverEnableVerifierForAll.c)
 *     VfSetVerifierInformation @ 0x140C2083C (VfSetVerifierInformation.c)
 *     MmIsDriverSuspectForVerifier @ 0x140C211A0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C28310 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C284F8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140C35074 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140C3510C (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3878C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLoadCallback @ 0x140C38A50 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140C38DC4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C38E64 (VfSuspectDriversUnloadCallback.c)
 *     VfSetVerifierInformationEx @ 0x140C39B18 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140C463F0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversParseRegistryString @ 0x140CDF400 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140CDF5B8 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
