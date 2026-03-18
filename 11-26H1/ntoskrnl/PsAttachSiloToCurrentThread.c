/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14046CE80
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407EED58 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407EF710 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1407EF83C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1407EFA1C (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1408100DC (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408154F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140828208 (EtwpUpdateFileInfoDriverRegistration.c)
 *     ExpTimeZoneInitSiloState @ 0x1408364F8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1408365C0 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14094F838 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409783B8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     MmUnloadSystemImage @ 0x140AC7670 (MmUnloadSystemImage.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x140C2100C (IovpUnloadDriver.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
