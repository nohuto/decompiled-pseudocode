/*
 * XREFs of RtlLeaveCriticalSection @ 0x180034960
 * Callers:
 *     RtlpFlushHeap @ 0x1800020DC (RtlpFlushHeap.c)
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
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
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
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     EtwpFlushActiveBuffers @ 0x180066A60 (EtwpFlushActiveBuffers.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 *     RtlTlsAlloc @ 0x180072BB0 (RtlTlsAlloc.c)
 *     RtlTlsFree @ 0x1800732F0 (RtlTlsFree.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrpWorkCallback @ 0x18007E360 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
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
 *     RtlReleasePebLock @ 0x1800A0FE0 (RtlReleasePebLock.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A3DE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4070 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A4170 (RtlGetCurrentDirectory_U.c)
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
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x180137EC0 (AVrfInternalHeapFreeNotification.c)
 *     LdrpDeleteEnclave @ 0x180139424 (LdrpDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149C50 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180149EA0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180149F80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x18014A040 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x18014A060 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180158DAC (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlpNotOwnerCriticalSection @ 0x180034C60 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x180035FC0 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180162270 (ZwSetEventEx.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  signed __int64 v3; // rbp
  signed __int32 LockCount; // r14d
  void *LockSemaphore; // rdi
  unsigned int v6; // ecx
  NTSTATUS v7; // eax
  char *v8; // r8
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbx
  char *v11; // rdi
  char *SchedulerSharedDataSlot; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned int v18; // r9d
  int v19; // r8d
  unsigned int v20; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp+10h] BYREF

  if ( CriticalSection->RecursionCount-- != 1 )
    return 0;
  v3 = -1LL;
  CriticalSection->OwningThread = 0LL;
  LockCount = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
  if ( LockCount != -2 )
  {
    if ( (CriticalSection->LockCount & 1) != 0 )
      RtlpNotOwnerCriticalSection(CriticalSection);
    LockSemaphore = CriticalSection->LockSemaphore;
    if ( !LockSemaphore )
    {
      EventHandle = (HANDLE)-1LL;
      if ( RtlpForceCSToUseEvents )
      {
        if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
          v3 = (signed __int64)EventHandle;
        else
          EventHandle = (HANDLE)-1LL;
      }
      LockSemaphore = (void *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)&CriticalSection->LockSemaphore,
                                v3,
                                0LL);
      if ( LockSemaphore )
      {
        if ( EventHandle != (HANDLE)-1LL )
          NtClose(EventHandle);
        EventHandle = LockSemaphore;
      }
      else
      {
        LockSemaphore = EventHandle;
      }
    }
    v6 = 0;
    while ( 1 )
    {
      if ( LockCount == _InterlockedCompareExchange(
                          &CriticalSection->LockCount,
                          (LockCount & 2 | 1) + LockCount,
                          LockCount) )
      {
        if ( (LockCount & 2) != 0 )
        {
          if ( LockSemaphore == (void *)-1LL )
          {
            _InterlockedOr(v21, 0);
            RtlpWakeByAddress(&CriticalSection->LockCount, 0LL, CriticalSection);
          }
          else
          {
            v7 = ZwSetEventEx(LockSemaphore, 0LL, CriticalSection);
            if ( v7 < 0 )
              RtlRaiseStatus(v7);
          }
        }
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v14 = 0;
          v15 = (unsigned __int64)CriticalSection & 0x7FFFFFFFFFFFFFFCLL;
          while ( v14 < 8 )
          {
            v11 = &SchedulerSharedDataSlot[8 * v14];
            if ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) == v15 )
            {
              if ( !v11 )
                return 0;
              *v11 |= 2u;
              if ( v11[7] >= 0 )
                goto LABEL_25;
              goto LABEL_24;
            }
            ++v14;
          }
        }
        return 0;
      }
      v16 = v6;
      if ( v6 )
      {
        if ( v6 < 0x1FFF )
          v16 = 2 * v6;
      }
      else
      {
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
          goto LABEL_42;
        v16 = 64;
      }
      v6 = v16;
      v17 = __rdtsc();
      v18 = 10 * (v16 + ((v16 - 1) & (unsigned int)v17)) / MEMORY[0x7FFE02D6];
      if ( v18 )
      {
        v19 = 1;
        do
        {
          _mm_pause();
          v20 = v19++;
        }
        while ( v20 < v18 );
      }
LABEL_42:
      _m_prefetchw(&CriticalSection->LockCount);
      LockCount = CriticalSection->LockCount;
    }
  }
  v8 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v8 )
  {
    v9 = 0;
    v10 = (unsigned __int64)CriticalSection & 0x7FFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      if ( v9 >= 8 )
        return 0;
      v11 = &v8[8 * v9];
      if ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) == v10 )
        break;
      ++v9;
    }
    if ( v11 )
    {
      *v11 |= 2u;
      if ( v11[7] < 0 )
      {
LABEL_24:
        ThreadInformation[1] = 0LL;
        ThreadInformation[0] = (v11 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
      }
LABEL_25:
      *(_QWORD *)v11 = 0LL;
    }
  }
  return 0;
}
