/*
 * XREFs of VfDriverLock @ 0x140B7A4D4
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140604200 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x140605114 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140B72D10 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140B7A058 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B7A270 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B7A3D4 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B7A904 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140B86E5C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140B86EF4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140B8A588 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B8A8B4 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140B8AB5C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140B8AEC4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B8AF64 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B8C51C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B8C654 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C2AA74 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140C2AC20 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
