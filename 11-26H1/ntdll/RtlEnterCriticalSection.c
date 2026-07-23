/*
 * XREFs of RtlEnterCriticalSection @ 0x1800332F0
 * Callers:
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18001D2F0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180022E00 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlSleepConditionVariableCS @ 0x180036250 (RtlSleepConditionVariableCS.c)
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     EtwpSwitchBuffer @ 0x18005CAB0 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x18005DEF4 (EtwpAllocateFreeBuffers.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     EtwpFlushActiveBuffers @ 0x180066A60 (EtwpFlushActiveBuffers.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 *     RtlTlsAlloc @ 0x180072BB0 (RtlTlsAlloc.c)
 *     RtlTlsFree @ 0x1800732F0 (RtlTlsFree.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrpWorkCallback @ 0x18007E360 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18007E890 (RtlLockProcessHeapOnProcessTerminate.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800952F8 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetEnvironmentVar @ 0x18009D730 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x18009E1A0 (RtlCreateEnvironmentEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18009E510 (RtlCreateProcessParametersInternal.c)
 *     RtlSetCurrentEnvironment @ 0x18009F6A0 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x18009F800 (RtlSetEnvironmentStrings.c)
 *     RtlAcquirePebLock @ 0x1800A0FC0 (RtlAcquirePebLock.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A3DE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A4340 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetIoCompletionCallback @ 0x1800B4830 (RtlSetIoCompletionCallback.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800C2990 (AVrfDllLoadNotification.c)
 *     LdrpGetLoadAsEntry @ 0x1800C37FC (LdrpGetLoadAsEntry.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     RtlpSetupExtendedBlock @ 0x1800C7A00 (RtlpSetupExtendedBlock.c)
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     LdrpSendDllNotifications @ 0x1800DBA90 (LdrpSendDllNotifications.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800EC350 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     LdrRegisterDllNotification @ 0x180101340 (LdrRegisterDllNotification.c)
 *     RtlpSetProcMergedLangList @ 0x180101EEC (RtlpSetProcMergedLangList.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x180106490 (RtlQueryTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 *     LdrUnregisterDllNotification @ 0x18010DB30 (LdrUnregisterDllNotification.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010E094 (LdrpCreateSoftwareEnclave.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x180137EC0 (AVrfInternalHeapFreeNotification.c)
 *     LdrpDeleteEnclave @ 0x180139424 (LdrpDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149C50 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180149EA0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180149F80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x18014A010 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x18014A060 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180158DAC (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180068AF0 (RtlpEnterCriticalSectionContended.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // r9
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  PRTL_CRITICAL_SECTION *v6; // rcx
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v6 = (PRTL_CRITICAL_SECTION *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v6 )
      {
        v3 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *v6 = CriticalSection;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    if ( v3 )
    {
      *v3 |= 2u;
      if ( v3[7] < 0 )
      {
        ThreadInformation[1] = 0LL;
        ThreadInformation[0] = (v3 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
      }
      *(_QWORD *)v3 = 0LL;
    }
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended(CriticalSection);
  }
  return result;
}
