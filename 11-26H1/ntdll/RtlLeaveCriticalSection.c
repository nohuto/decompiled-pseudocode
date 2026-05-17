/*
 * XREFs of RtlLeaveCriticalSection @ 0x18004A3E0
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
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlpFlushHeap @ 0x180016FFC (RtlpFlushHeap.c)
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
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     RtlSleepConditionVariableCS @ 0x18004BCD0 (RtlSleepConditionVariableCS.c)
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x180070D6C (LdrpUnlockAndDereferenceEnclave.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071E44 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpHpHeapWalk @ 0x1800744FC (RtlpHpHeapWalk.c)
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     RtlpProcessHeapsInsert @ 0x18007DC3C (RtlpProcessHeapsInsert.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpProcessHeapsRemove @ 0x18007E93C (RtlpProcessHeapsRemove.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrpCheckForRetryLoading @ 0x180083B00 (LdrpCheckForRetryLoading.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
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
 *     RtlReleasePebLock @ 0x1800A1EB0 (RtlReleasePebLock.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A4CB0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4F40 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A5040 (RtlGetCurrentDirectory_U.c)
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
 *     RtlUnlockHeapManagerForCloning @ 0x1801445D0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146F08 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149DA0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180149FF0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x18014A0D0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x18014A190 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x18014A1B0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlpNotOwnerCriticalSection @ 0x18004A6E0 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x18004BA40 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180162370 (ZwSetEventEx.c)
 */

__int64 __fastcall RtlLeaveCriticalSection(__int64 a1)
{
  signed __int64 v3; // rbp
  signed __int32 v4; // r14d
  HANDLE v5; // rdi
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rbx
  char *v11; // rdi
  char *SchedulerSharedDataSlot; // r8
  unsigned int v14; // ecx
  __int64 v15; // rbx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned int v18; // r9d
  int v19; // r8d
  unsigned int v20; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  int v22; // [rsp+20h] [rbp-48h]
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 12))-- != 1 )
    return 0LL;
  v3 = -1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), -1, -2);
  if ( v4 != -2 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      RtlpNotOwnerCriticalSection(a1);
    v5 = *(HANDLE *)(a1 + 24);
    if ( !v5 )
    {
      Handle = (HANDLE)-1LL;
      if ( RtlpForceCSToUseEvents )
      {
        LOBYTE(v22) = 0;
        if ( (int)ZwCreateEvent(&Handle, 1048579LL, 0LL, 1LL, v22) >= 0 )
          v3 = (signed __int64)Handle;
        else
          Handle = (HANDLE)-1LL;
      }
      v5 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3, 0LL);
      if ( v5 )
      {
        if ( Handle != (HANDLE)-1LL )
          NtClose(Handle);
        Handle = v5;
      }
      else
      {
        v5 = Handle;
      }
    }
    v6 = 0;
    while ( 1 )
    {
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), (v4 & 2 | 1) + v4, v4) )
      {
        if ( (v4 & 2) != 0 )
        {
          if ( v5 == (HANDLE)-1LL )
          {
            _InterlockedOr(v21, 0);
            RtlpWakeByAddress(a1 + 8, 0LL, a1);
          }
          else
          {
            v7 = ZwSetEventEx(v5, 0LL, a1);
            if ( v7 < 0 )
              RtlRaiseStatus((unsigned int)v7);
          }
        }
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v14 = 0;
          v15 = a1 & 0x7FFFFFFFFFFFFFFCLL;
          while ( v14 < 8 )
          {
            v11 = &SchedulerSharedDataSlot[8 * v14];
            if ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) == v15 )
            {
              if ( !v11 )
                return 0LL;
              *v11 |= 2u;
              if ( v11[7] >= 0 )
                goto LABEL_25;
              goto LABEL_24;
            }
            ++v14;
          }
        }
        return 0LL;
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
      _m_prefetchw((const void *)(a1 + 8));
      v4 = *(_DWORD *)(a1 + 8);
    }
  }
  v8 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v8 )
  {
    v9 = 0;
    v10 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      if ( v9 >= 8 )
        return 0LL;
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
        v23[1] = 0LL;
        v23[0] = (v11 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread(-2LL, 56LL, v23, 16LL);
      }
LABEL_25:
      *(_QWORD *)v11 = 0LL;
    }
  }
  return 0LL;
}
