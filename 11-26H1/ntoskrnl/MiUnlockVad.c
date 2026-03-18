/*
 * XREFs of MiUnlockVad @ 0x14027F670
 * Callers:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiLockAddressSpaceToo @ 0x140315064 (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x140315954 (MiInsertViewOfPhysicalSection.c)
 *     MiMapImageScpCfgPages @ 0x14036A450 (MiMapImageScpCfgPages.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404CC098 (MiFindPlaceholderVadToReplace.c)
 *     MiWaitForVadDeletion @ 0x140531014 (MiWaitForVadDeletion.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiCanDeleteEnclave @ 0x1406FFDA4 (MiCanDeleteEnclave.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x140873C64 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140873D98 (MiProcessPatchImageCfg.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140876C58 (MiTerminateEnclave.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MiCommitFileBackedSection @ 0x140A58878 (MiCommitFileBackedSection.c)
 *     MiResetVirtualMemory @ 0x140AB1600 (MiResetVirtualMemory.c)
 *     MiInitializeVsmEnclave @ 0x140AB7638 (MiInitializeVsmEnclave.c)
 *     MiDeleteVadHotPatchState @ 0x140B55460 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
