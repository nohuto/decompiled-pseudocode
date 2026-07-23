/*
 * XREFs of VfDriverLock @ 0x140C4C814
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1406442E0 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x140645100 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverEnableVerifierForAll @ 0x140C261A0 (VfDriverEnableVerifierForAll.c)
 *     VfSetVerifierInformation @ 0x140C2684C (VfSetVerifierInformation.c)
 *     MmIsDriverSuspectForVerifier @ 0x140C271B0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C2E31C (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C2E500 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140C3B084 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140C3B11C (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140C3EDD4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C3EE74 (VfSuspectDriversUnloadCallback.c)
 *     VfSetVerifierInformationEx @ 0x140C3FB28 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140C4C400 (VfSuspectDriversGetVerifierInformation.c)
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversParseRegistryString @ 0x140CE5798 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140CE5950 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
