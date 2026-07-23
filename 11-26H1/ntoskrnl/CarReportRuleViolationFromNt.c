/*
 * XREFs of CarReportRuleViolationFromNt @ 0x140C31F2C
 * Callers:
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 *     VfEnforceBiosRule @ 0x140644270 (VfEnforceBiosRule.c)
 *     ViIoInitializeTimer_Entry @ 0x1406464B0 (ViIoInitializeTimer_Entry.c)
 *     MdlInvariantPostProcessing1 @ 0x140646724 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140646934 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViSpMmProbeAndLockProcessPages_Entry @ 0x140726000 (ViSpMmProbeAndLockProcessPages_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     VerifierIoAllocateIrp @ 0x140C2E8A0 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140C2E9C0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140C2ED00 (VerifierPortIoAllocateIrp.c)
 *     VfTargetEtwUnregister @ 0x140C2F258 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C2F7F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140C2F880 (ViTargetRemovingCheckEtwWmi.c)
 *     IovCheckAddressForIrp @ 0x140C308F0 (IovCheckAddressForIrp.c)
 *     IovStatelessIoCallDriverRules @ 0x140C30AEC (IovStatelessIoCallDriverRules.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140C36630 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140C3693C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C36AC0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140C36D2C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140C36D68 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140C38A90 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140C390C8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140C39180 (ViZwCheckUnicodeString.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140C39290 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140C3E56C (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140C3F640 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140C3F914 (Below4gb_AllocateCommonBuffer_Entry.c)
 *     Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140C3F970 (Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry.c)
 *     Below4gb_MmAllocateContiguousMemory_Entry @ 0x140C3F9C0 (Below4gb_MmAllocateContiguousMemory_Entry.c)
 *     Below4gb_MmAllocateNodePagesForMdlEx_Entry @ 0x140C3FA10 (Below4gb_MmAllocateNodePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdlEx_Entry @ 0x140C3FA60 (Below4gb_MmAllocatePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdl_Entry @ 0x140C3FAB0 (Below4gb_MmAllocatePagesForMdl_Entry.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140C3FBF8 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140C402F0 (ViWdIrpTimerDpcRoutine.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140C426A0 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140C42920 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140C429B0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140C42B80 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C42BE0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C42C50 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140C42E20 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140C42E90 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C42FF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140C43100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140C43160 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C431E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140C434C0 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140C435A0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     ViMiscCheckResourceAcquire @ 0x140C44300 (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140C443C4 (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140C44440 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140C444A8 (ViMiscExCheckAPCsDisabled.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140C44590 (ViRlrsMmMapLockedPages_Entry.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C44D88 (VfLookasideDelete.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C45960 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmUnlockPages @ 0x140C45B50 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140C45CE0 (VerifierMmUnmapIoSpace.c)
 *     VfDeleteResource @ 0x140C466BC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C46D90 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140C492A4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140C4946C (ExFreePoolSanityChecks.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140C49A70 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C49B44 (ViSpMmMapLockedPagesSanityChecks.c)
 *     ViSpMmProbeAndLockPages_Entry @ 0x140C49D00 (ViSpMmProbeAndLockPages_Entry.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     IovCompleteRequest @ 0x140C4BB00 (IovCompleteRequest.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C4C350 (VfCheckForLookaside.c)
 *     ViFreeTrackedPool @ 0x140C4C9BC (ViFreeTrackedPool.c)
 *     VfIoCompletionCheckState @ 0x140C4CBE0 (VfIoCompletionCheckState.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C4CEBC (ViMiscValidateKeWaitUsage.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140C4D0CC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140C4D190 (ViMiscCheckReleaseSpinlock.c)
 *     ViMiscCheckKeLowerIrql @ 0x140C4D218 (ViMiscCheckKeLowerIrql.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140C4DAE0 (VfMiscObfReferenceObject_Exit.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CarInitializeRuleViolationDetails @ 0x14064D840 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x14064DAC0 (CarQueryReportActionForTriage.c)
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CarReportRuleViolationFromNt(
        int BugCheckCode,
        __int64 BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4,
        unsigned int a6,
        __int64 a7)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v14; // rcx
  _DWORD v15[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-68h] BYREF
  int v17; // [rsp+90h] [rbp-18h]

  memset_0(v16, 0, 0x58uLL);
  CurrentIrql = KeGetCurrentIrql();
  result = CarInitializeRuleViolationDetails(v16);
  if ( (VfRuleClasses & 0x400000) == 0 || CurrentIrql <= 2u )
  {
    for ( i = 0LL; (unsigned int)i < 0xD; i = (unsigned int)(i + 1) )
    {
      if ( ViVerifierBugcheckAttributes[3 * i] == BugCheckCode && dword_140C1E3E4[3 * i] == BugCheckParameter1 )
      {
        if ( VfVerifyMode < dword_140C1E3E8[3 * i] )
        {
          v14 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
          result = BugCheckParameter4;
          qword_140FF3380[v14] = BugCheckParameter4;
          ViBugcheckLog[2 * v14] = BugCheckCode;
          qword_140FF3368[v14] = BugCheckParameter1;
          qword_140FF3370[v14] = BugCheckParameter2;
          qword_140FF3378[v14] = BugCheckParameter3;
          return result;
        }
        break;
      }
    }
    if ( CurrentIrql > 2u
      || ViLegacyVolatile
      || (int)CarQueryReportActionForTriage(BugCheckCode, BugCheckParameter1, v15) < 0 )
    {
      KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    }
    v16[2] = BugCheckParameter4;
    v17 = BugCheckCode;
    v16[0] = BugCheckParameter2;
    v16[1] = BugCheckParameter3;
    return CarReportDifPluginRuleViolation(a6, BugCheckParameter1, a7, (__int64)v16);
  }
  return result;
}
