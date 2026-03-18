/*
 * XREFs of CarReportRuleViolationFromNt @ 0x140C2BF1C
 * Callers:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 *     VfEnforceBiosRule @ 0x140640690 (VfEnforceBiosRule.c)
 *     ViIoInitializeTimer_Entry @ 0x1406428D0 (ViIoInitializeTimer_Entry.c)
 *     MdlInvariantPostProcessing1 @ 0x140642B44 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140642D54 (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViSpMmProbeAndLockProcessPages_Entry @ 0x140721430 (ViSpMmProbeAndLockProcessPages_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 *     ViZwCheckVirtualAddress @ 0x140C20574 (ViZwCheckVirtualAddress.c)
 *     VerifierIoAllocateIrp @ 0x140C28890 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140C289B0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140C28CF0 (VerifierPortIoAllocateIrp.c)
 *     VfTargetEtwUnregister @ 0x140C29248 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C297E4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140C29870 (ViTargetRemovingCheckEtwWmi.c)
 *     IovCheckAddressForIrp @ 0x140C2A8E0 (IovCheckAddressForIrp.c)
 *     IovStatelessIoCallDriverRules @ 0x140C2AADC (IovStatelessIoCallDriverRules.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140C30620 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140C3092C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C30AB0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140C30D1C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140C30D58 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140C31B28 (ViErrorFinishReport.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140C32A80 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140C330B8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140C33170 (ViZwCheckUnicodeString.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140C33280 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140C3855C (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140C39630 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140C39904 (Below4gb_AllocateCommonBuffer_Entry.c)
 *     Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140C39960 (Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry.c)
 *     Below4gb_MmAllocateContiguousMemory_Entry @ 0x140C399B0 (Below4gb_MmAllocateContiguousMemory_Entry.c)
 *     Below4gb_MmAllocateNodePagesForMdlEx_Entry @ 0x140C39A00 (Below4gb_MmAllocateNodePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdlEx_Entry @ 0x140C39A50 (Below4gb_MmAllocatePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdl_Entry @ 0x140C39AA0 (Below4gb_MmAllocatePagesForMdl_Entry.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140C39BE8 (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140C3A2E0 (ViWdIrpTimerDpcRoutine.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140C3C690 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140C3C910 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140C3C9A0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140C3CB70 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C3CBD0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C3CC40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140C3CE10 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140C3CE80 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C3CFE0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140C3D0F0 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140C3D150 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C3D1D0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140C3D4B0 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140C3D590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     ViMiscCheckResourceAcquire @ 0x140C3E2F0 (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140C3E3B4 (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140C3E430 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140C3E498 (ViMiscExCheckAPCsDisabled.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140C3E580 (ViRlrsMmMapLockedPages_Entry.c)
 *     VfLookasideAdd @ 0x140C3EC54 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C3ED78 (VfLookasideDelete.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C3F950 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmUnlockPages @ 0x140C3FB40 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140C3FCD0 (VerifierMmUnmapIoSpace.c)
 *     VfDeleteResource @ 0x140C406AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C407D0 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C40D80 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140C43294 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140C4345C (ExFreePoolSanityChecks.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140C43A60 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C43B34 (ViSpMmMapLockedPagesSanityChecks.c)
 *     ViSpMmProbeAndLockPages_Entry @ 0x140C43CF0 (ViSpMmProbeAndLockPages_Entry.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 *     IovCompleteRequest @ 0x140C45AF0 (IovCompleteRequest.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C46340 (VfCheckForLookaside.c)
 *     ViFreeTrackedPool @ 0x140C469AC (ViFreeTrackedPool.c)
 *     VfIoCompletionCheckState @ 0x140C46BD0 (VfIoCompletionCheckState.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C46EAC (ViMiscValidateKeWaitUsage.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140C470BC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140C47180 (ViMiscCheckReleaseSpinlock.c)
 *     ViMiscCheckKeLowerIrql @ 0x140C47208 (ViMiscCheckKeLowerIrql.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140C47AD0 (VfMiscObfReferenceObject_Exit.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CarInitializeRuleViolationDetails @ 0x140649C60 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x140649EE0 (CarQueryReportActionForTriage.c)
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
      if ( ViVerifierBugcheckAttributes[3 * i] == BugCheckCode && dword_140C183E4[3 * i] == BugCheckParameter1 )
      {
        if ( VfVerifyMode < dword_140C183E8[3 * i] )
        {
          v14 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
          result = BugCheckParameter4;
          qword_140FF2380[v14] = BugCheckParameter4;
          ViBugcheckLog[2 * v14] = BugCheckCode;
          qword_140FF2368[v14] = BugCheckParameter1;
          qword_140FF2370[v14] = BugCheckParameter2;
          qword_140FF2378[v14] = BugCheckParameter3;
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
