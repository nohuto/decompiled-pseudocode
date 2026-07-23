/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14046FB80
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407F5270 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x140815B6C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14081B6A4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14082E448 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x14083C800 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140917BB8 (EtwpTrackGuidEntryRegistrations.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14093A3C8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1409CB178 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140C2701C (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
