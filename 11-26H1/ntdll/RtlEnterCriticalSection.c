/*
 * XREFs of RtlEnterCriticalSection @ 0x180048D70
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     EtwpSwitchBuffer @ 0x180011380 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1800127C4 (EtwpAllocateFreeBuffers.c)
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180014CCC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x180015FD0 (RtlLockHeap.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180031F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180038890 (RtlGetProcessPreferredUILanguages.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlSleepConditionVariableCS @ 0x18004BCD0 (RtlSleepConditionVariableCS.c)
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071E44 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpHpHeapWalk @ 0x1800744FC (RtlpHpHeapWalk.c)
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     RtlpProcessHeapsInsert @ 0x18007DC3C (RtlpProcessHeapsInsert.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpProcessHeapsRemove @ 0x18007E93C (RtlpProcessHeapsRemove.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrpCheckForRetryLoading @ 0x180083B00 (LdrpCheckForRetryLoading.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrpWorkCallback @ 0x180086FF0 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180091E5C (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlTlsAlloc @ 0x1800939E0 (RtlTlsAlloc.c)
 *     RtlTlsFree @ 0x180094120 (RtlTlsFree.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18009AD18 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetEnvironmentVar @ 0x18009E600 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x18009F070 (RtlCreateEnvironmentEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18009F3E0 (RtlCreateProcessParametersInternal.c)
 *     RtlSetCurrentEnvironment @ 0x1800A0570 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x1800A06D0 (RtlSetEnvironmentStrings.c)
 *     RtlAcquirePebLock @ 0x1800A1E90 (RtlAcquirePebLock.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A4CB0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A5210 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetIoCompletionCallback @ 0x1800B7310 (RtlSetIoCompletionCallback.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800C51D0 (AVrfDllLoadNotification.c)
 *     LdrpGetLoadAsEntry @ 0x1800C603C (LdrpGetLoadAsEntry.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     RtlpSetupExtendedBlock @ 0x1800CA280 (RtlpSetupExtendedBlock.c)
 *     RtlCreateTagHeap @ 0x1800CB280 (RtlCreateTagHeap.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     LdrpSendDllNotifications @ 0x1800DEB20 (LdrpSendDllNotifications.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     LdrRegisterDllNotification @ 0x180101BF0 (LdrRegisterDllNotification.c)
 *     RtlpSetProcMergedLangList @ 0x18010279C (RtlpSetProcMergedLangList.c)
 *     RtlCompactHeap @ 0x180104800 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x180106A90 (RtlQueryTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 *     LdrUnregisterDllNotification @ 0x18010DFE0 (LdrUnregisterDllNotification.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010E544 (LdrpCreateSoftwareEnclave.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114E70 (RtlSetHeapDebuggingInformation.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x180138150 (AVrfInternalHeapFreeNotification.c)
 *     LdrpDeleteEnclave @ 0x1801396B4 (LdrpDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146F08 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149DA0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180149FF0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x18014A0D0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x18014A160 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x18014A1B0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18007A2D0 (RtlpEnterCriticalSectionContended.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // r9
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  char *v6; // rcx
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        v3 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *(_QWORD *)v6 = a1;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    if ( v3 )
    {
      *v3 |= 2u;
      if ( v3[7] < 0 )
      {
        v10[1] = 0LL;
        v10[0] = (v3 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread(-2LL, 56LL, v10, 16LL);
      }
      *(_QWORD *)v3 = 0LL;
    }
    ++*(_DWORD *)(a1 + 12);
    return 0LL;
  }
  else
  {
    return RtlpEnterCriticalSectionContended(a1);
  }
  return result;
}
