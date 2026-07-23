/*
 * XREFs of MiLockVad @ 0x14027E130
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiMapImageScpCfgPages @ 0x14036C1F0 (MiMapImageScpCfgPages.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404C5AC8 (MiFindPlaceholderVadToReplace.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiCanDeleteEnclave @ 0x140704A74 (MiCanDeleteEnclave.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x140879FC4 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x14087A0F8 (MiProcessPatchImageCfg.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x14087D03C (MiTerminateEnclave.c)
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140B42284 (MiDeleteInsertedCloneVads.c)
 *     MiDeleteVadHotPatchState @ 0x140B57CFC (MiDeleteVadHotPatchState.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

int __fastcall MiLockVad(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v4 = (unsigned __int64 *)(a2 + 40);
  v6 = (AutoBoost *)KeAbPreAcquire(a2 + 40, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  result = *(_DWORD *)(a1 + 1448) | 0x80;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
