/*
 * XREFs of NtSetSystemInformation @ 0x140833840
 * Callers:
 *     DifNtSetSystemInformationWrapper @ 0x14068DA90 (DifNtSetSystemInformationWrapper.c)
 *     WmipRegisterFirmwareProviders @ 0x140CE0368 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MiGetThreadPartition @ 0x14046BE90 (MiGetThreadPartition.c)
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     VslProvisionDumpEncryption @ 0x1405C3894 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x1405C73A4 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405E3CEC (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1405E4A98 (KeProcessorProfileControlArea.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405E8E50 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F3CC8 (KeModifySystemAllowedCpuSets.c)
 *     KeSetTagCpuSets @ 0x1405F3F1C (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405F75C0 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x140614AB8 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x140614F64 (PsSetExeModerationState.c)
 *     VfVolatileApplyDifVerification @ 0x1406478F4 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140647AAC (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 *     ExpSetBootLoaderMetadata @ 0x1406CAC98 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x1406CADF8 (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x1406CBD38 (ExPoolSetLimit.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwLoadDriver @ 0x1407255B0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x140726B90 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140726F30 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvlQuerySetBootPagesInfo @ 0x140776180 (HvlQuerySetBootPagesInfo.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     VslRelaxQuotas @ 0x140792ABC (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407B4A6C (PnpIommuBlockUnblockDevice.c)
 *     KeInitializeEntropySystem @ 0x1407BBA6C (KeInitializeEntropySystem.c)
 *     ObSetRefTraceInformation @ 0x1407C4514 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14083306C (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140833208 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1408335D4 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x140835A80 (ExSetLeapSecondEnabled.c)
 *     WheaCrashDumpInitializationComplete @ 0x140849650 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x140851298 (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x140854CD4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140854F40 (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x140856C28 (CmReconcileAndValidateAllHives.c)
 *     MmCreateMirror @ 0x140868750 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x14086AD20 (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x14087DFD4 (MmScrubMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsChangeQuantumTable @ 0x140966954 (PsChangeQuantumTable.c)
 *     PsLookupProcessThreadByCid @ 0x140A10460 (PsLookupProcessThreadByCid.c)
 *     MmLoadSystemImage @ 0x140A26990 (MmLoadSystemImage.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A885F0 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_140AB5C94 @ 0x140AB5C94 (sub_140AB5C94.c)
 *     MmUnloadSystemImage @ 0x140AC7670 (MmUnloadSystemImage.c)
 *     PfSnSetPrefetcherInformation @ 0x140ACA1BC (PfSnSetPrefetcherInformation.c)
 *     SmSetStoreInformation @ 0x140B2E9E0 (SmSetStoreInformation.c)
 *     ExpInitializeSessionDriver @ 0x140B35F98 (ExpInitializeSessionDriver.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfSetVerifierInformation @ 0x140C2083C (VfSetVerifierInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140C21304 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140C2146C (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140C214D4 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     VfFaultsSetParameters @ 0x140C34AA4 (VfFaultsSetParameters.c)
 *     VfRemoveVerifierEntry @ 0x140C39AF0 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformationEx @ 0x140C39B18 (VfSetVerifierInformationEx.c)
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 *     BgkSetBootGraphicsInformation @ 0x140C4F794 (BgkSetBootGraphicsInformation.c)
 */

__int64 __fastcall NtSetSystemInformation(int a1, __int64 p_Buf1, unsigned int a3)
{
  SIZE_T v3; // r15
  char v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 PreviousMode; // r12
  ULONG v10; // r8d
  __int64 v11; // rcx
  unsigned int updated; // edi
  __int64 v13; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  char UCharFromUser; // al
  __int64 ULong64FromUser; // rax
  char v20; // al
  unsigned int v21; // eax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  void *v26; // rax
  __int64 result; // rax
  _DWORD *v28; // rax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int ULongFromUser; // eax
  void *v35; // rcx
  PVOID v36; // rcx
  int v37; // ebx
  unsigned int v38; // eax
  unsigned int v39; // ebx
  int v40; // eax
  char v41; // bl
  int SystemImage; // eax
  __int64 v43; // r15
  _DWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // r8
  _KPROCESS *v50; // rbx
  int v51; // ebx
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  _KPROCESS *Process; // rcx
  __int16 v56; // ax
  int v57; // ebx
  int v58; // ebx
  int v59; // ebx
  int v60; // ebx
  int v61; // ebx
  int v62; // ebx
  UNICODE_STRING *v63; // rcx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  int v70; // ebx
  int v71; // eax
  struct _KLOCK_ENTRIES *v72; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v74; // rax
  void *v75; // rdx
  AutoBoost *v76; // rdi
  __int64 ThreadPartition; // rax
  __int64 v79; // r10
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  int v84; // ebx
  int v85; // ebx
  int v86; // ebx
  int v87; // ebx
  int v88; // r15d
  int v89; // eax
  char v90; // bl
  __int64 v91; // r8
  struct _KLOCK_ENTRIES *v92; // r9
  void *Pool2; // rax
  void *v94; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r8
  unsigned int v96; // r15d
  struct _LIST_ENTRY *v97; // rbx
  __int64 v98; // r8
  int v99; // r15d
  int v100; // r9d
  void *v101; // rax
  _KPROCESS *v102; // rbx
  int v103; // ebx
  int v104; // ebx
  int v105; // ebx
  int v106; // ebx
  unsigned int v107; // r15d
  unsigned __int64 v108; // rbx
  void *v109; // rdx
  int v110; // ebx
  __int64 v111; // rcx
  int v112; // eax
  unsigned __int8 Object; // [rsp+20h] [rbp-358h]
  int v114; // [rsp+30h] [rbp-348h] BYREF
  _DWORD v115[7]; // [rsp+34h] [rbp-344h] BYREF
  LUID PrivilegeValue[2]; // [rsp+50h] [rbp-328h] BYREF
  PVOID v117; // [rsp+60h] [rbp-318h] BYREF
  char v118; // [rsp+68h] [rbp-310h]
  unsigned int v119; // [rsp+6Ch] [rbp-30Ch] BYREF
  unsigned __int64 v120; // [rsp+70h] [rbp-308h] BYREF
  UNICODE_STRING v121; // [rsp+80h] [rbp-2F8h] BYREF
  int v122; // [rsp+90h] [rbp-2E8h]
  unsigned __int64 v123[18]; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v124; // [rsp+128h] [rbp-250h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+130h] [rbp-248h] BYREF
  int v126; // [rsp+144h] [rbp-234h]
  unsigned int v127; // [rsp+148h] [rbp-230h]
  int v128; // [rsp+150h] [rbp-228h]
  void *v129; // [rsp+188h] [rbp-1F0h]
  int v130; // [rsp+1D8h] [rbp-1A0h]
  __int128 v131; // [rsp+1E0h] [rbp-198h] BYREF
  _KPROCESS *v132; // [rsp+1F0h] [rbp-188h]
  __int64 v133; // [rsp+210h] [rbp-168h]
  __int64 v134; // [rsp+218h] [rbp-160h]
  void *v135; // [rsp+220h] [rbp-158h]
  UNICODE_STRING Buf1; // [rsp+230h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+240h] [rbp-138h] BYREF
  __int128 v138; // [rsp+250h] [rbp-128h]
  __int128 v139; // [rsp+260h] [rbp-118h]
  struct _LIST_ENTRY *v140; // [rsp+270h] [rbp-108h]

  v3 = a3;
  v121 = 0LL;
  v120 = 0LL;
  v6 = 1;
  PrivilegeValue[0] = 0LL;
  v124 = 0LL;
  v117 = 0LL;
  memset_0(&Buf1, 0, 0x100uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOWORD(v114) = PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 == 89 )
    {
      v10 = 2;
    }
    else if ( a1 != 151 || (v10 = 1, (_DWORD)v3 != 1) )
    {
      v10 = 4;
    }
    ProbeForRead((volatile void *)p_Buf1, v3, v10);
    v11 = 2LL;
  }
  else
  {
    v11 = 2LL;
  }
  updated = 0;
  if ( a1 <= 126 )
  {
    if ( a1 == 126 )
    {
      if ( PreviousMode )
        return 3221225569LL;
      if ( (_DWORD)v3 != 32 )
        return (unsigned int)-1073741820;
      return (unsigned int)BgkSetBootGraphicsInformation(2LL, p_Buf1);
    }
    if ( a1 <= 72 )
    {
      if ( a1 != 72 )
      {
        if ( a1 <= 39 )
        {
          if ( a1 == 39 )
          {
            if ( (_DWORD)v3 == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( PreviousMode )
                  ULongFromUser = RtlReadULongFromUser((unsigned int *)p_Buf1);
                else
                  ULongFromUser = *(_DWORD *)p_Buf1;
                v127 = ULongFromUser;
                LOBYTE(v33) = 1;
                PsChangeQuantumTable(v33, ULongFromUser);
                return 0;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          if ( a1 <= 28 )
          {
            if ( a1 != 28 )
            {
              if ( a1 != 9 )
              {
                if ( a1 != 21 )
                {
                  v13 = (unsigned int)(a1 - 24);
                  if ( a1 == 24 )
                  {
                    if ( (_DWORD)v3 == 20 )
                    {
                      if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                      {
                        Buf1 = *(UNICODE_STRING *)p_Buf1;
                        LODWORD(Src[0]) = *(_DWORD *)(p_Buf1 + 16);
                        KiMinimumDpcRate = (int)Buf1.Buffer;
                        KiMaximumDpcQueueDepth = *(_DWORD *)(&Buf1.MaximumLength + 1);
                        KiAdjustDpcThreshold = HIDWORD(Buf1.Buffer);
                        KiIdealDpcRate = (int)Src[0];
                        KeSynchronizeWithDynamicProcessors(LODWORD(Src[0]), v13, v7, v8);
                        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
                        if ( ActiveProcessorCount )
                        {
                          v15 = KiProcessorBlock;
                          v16 = ActiveProcessorCount;
                          do
                          {
                            v17 = *v15;
                            *(_DWORD *)(v17 + 14504) = KiMaximumDpcQueueDepth;
                            *(_DWORD *)(v17 + 14512) = KiMinimumDpcRate;
                            ++v15;
                            --v16;
                          }
                          while ( v16 );
                        }
                        return updated;
                      }
                      return 3221225569LL;
                    }
                    return 3221225476LL;
                  }
                  if ( a1 != 26 )
                  {
                    if ( a1 == 27 )
                    {
                      if ( (_DWORD)v3 == 8 )
                      {
                        if ( !PreviousMode )
                        {
                          MmUnloadSystemImage(*(_QWORD *)p_Buf1);
                          return 0;
                        }
                        return 3221225569LL;
                      }
                      return 3221225476LL;
                    }
                    return (unsigned int)-1073741821;
                  }
                  v40 = 1;
LABEL_147:
                  if ( (_DWORD)v3 == 48 )
                  {
                    v41 = 0;
                  }
                  else
                  {
                    if ( (_DWORD)v3 != 56 )
                      return 3221225476LL;
                    v41 = 1;
                  }
                  if ( !PreviousMode )
                  {
                    v121 = *(UNICODE_STRING *)p_Buf1;
                    SystemImage = MmLoadSystemImage((unsigned int)&v121, 0, 0, v40, (__int64)&v124, (__int64)&v120);
                    updated = SystemImage;
                    if ( SystemImage < 0 )
                    {
                      if ( SystemImage == -1073741411 )
                        return (unsigned int)-1073741554;
                    }
                    else
                    {
                      if ( v41 )
                        v43 = RtlImageDirectoryEntryToData(v120, 1, 0, v115);
                      else
                        v43 = 0LL;
                      v44 = RtlImageNtHeader(v120);
                      v45 = v120 + (unsigned int)v44[10];
                      *(_QWORD *)(p_Buf1 + 16) = v120;
                      *(_QWORD *)(p_Buf1 + 24) = v124;
                      *(_QWORD *)(p_Buf1 + 32) = v45;
                      if ( v41 )
                      {
                        *(_QWORD *)(p_Buf1 + 40) = v43;
                        *(_DWORD *)(p_Buf1 + 48) = v44[20];
                      }
                      else
                      {
                        *(_DWORD *)(p_Buf1 + 40) = v44[20];
                      }
                    }
                    return updated;
                  }
                  return 3221225569LL;
                }
                goto LABEL_185;
              }
              if ( (_DWORD)v3 == 4 )
              {
                if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                {
                  NtGlobalFlag = NtGlobalFlag & 0x6DCE640F | *(_DWORD *)p_Buf1 & 0x92319BF0;
                  *(_DWORD *)p_Buf1 = NtGlobalFlag;
                  return updated;
                }
                return (unsigned int)-1073741790;
              }
              return (unsigned int)-1073741820;
            }
            if ( (((_DWORD)v3 - 8) & 0xFFFFFFF7) != 0 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
              return 3221225569LL;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v123[0] = 0LL;
              if ( (_DWORD)v3 == 16 )
              {
                if ( PreviousMode )
                  UCharFromUser = RtlReadUCharFromUser((volatile void *)(p_Buf1 + 8));
                else
                  UCharFromUser = *(_BYTE *)(p_Buf1 + 8);
                BYTE1(v114) = UCharFromUser;
                if ( PreviousMode )
                  ULong64FromUser = RtlReadULong64FromUser((volatile void *)p_Buf1);
                else
                  ULong64FromUser = *(_QWORD *)p_Buf1;
                v123[0] = ULong64FromUser;
              }
              else
              {
                if ( PreviousMode )
                  v20 = RtlReadUCharFromUser((volatile void *)(p_Buf1 + 4));
                else
                  v20 = *(_BYTE *)(p_Buf1 + 4);
                BYTE1(v114) = v20;
                if ( PreviousMode )
                  v21 = RtlReadULongFromUser((unsigned int *)p_Buf1);
                else
                  v21 = *(_DWORD *)p_Buf1;
                v123[0] = v21;
                if ( v21 )
                  v123[0] = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v21;
              }
              if ( BYTE1(v114) )
                v123[0] = MEMORY[0xFFFFF78000000300];
              ExAcquireTimeRefreshLockExclusive(0xFFFFF78000000300uLL);
              updated = ExpUpdateTimerConfiguration(0LL, (__int64)v123, (__int64)&v114 + 1);
              ExReleaseTimeRefreshLockExclusive();
              return updated;
            }
            return 3221225506LL;
          }
          v22 = a1 - 30;
          if ( !v22 )
            return (unsigned int)MmCreateMirror();
          v23 = v22 - 1;
          if ( !v23 )
            return (unsigned int)EtwSetPerformanceTraceInformation((void *)p_Buf1, (unsigned int)v3, PreviousMode);
          v24 = v23 - 3;
          if ( v24 )
          {
            v25 = v24 - 3;
            if ( v25 )
            {
              if ( v25 != 1 )
                return (unsigned int)-1073741821;
              if ( (_DWORD)v3 != 16 )
                return 3221225476LL;
              if ( PreviousMode )
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) != 0 )
                {
                  if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
                  {
                    PrivilegeValue[0].HighPart = 0;
                    PrivilegeValue[0].LowPart = RtlReadULongFromUser((unsigned int *)p_Buf1);
                    v26 = (void *)RtlReadULong64FromUser((volatile void *)(p_Buf1 + 8));
                    PrivilegeValue[1] = (LUID)v26;
                    v121 = *(UNICODE_STRING *)&PrivilegeValue[0].LowPart;
                    if ( LOWORD(PrivilegeValue[0].LowPart) == 62 )
                    {
                      RtlCopyFromUser(&Buf1, v26, 0x3EuLL);
                      if ( !memcmp(&Buf1, L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
                      {
                        v121.Buffer = L"\\SystemRoot\\System32\\win32k.sys";
                        v121.MaximumLength = 62;
                        return ZwSetSystemInformation(38LL, (__int64)&v121);
                      }
                    }
                  }
                }
                return 3221225569LL;
              }
              v121 = *(UNICODE_STRING *)p_Buf1;
              if ( !memcmp(*(const void **)(p_Buf1 + 8), L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
              {
                v120 = *(_QWORD *)(*(_QWORD *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup + 48LL);
                v28 = RtlImageNtHeader(v120);
                if ( !v28 )
                {
                  MmUnloadSystemImage(*(ULONG_PTR *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup);
                  return 3221225595LL;
                }
                updated = ExpInitializeSessionDriver(v120 + (unsigned int)v28[10]);
                if ( (updated & 0x80000000) != 0
                  && !(unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
                {
                  MmUnloadSystemImage(*(ULONG_PTR *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup);
                }
                return updated;
              }
              return 3221225659LL;
            }
            if ( (_DWORD)v3 != 16 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)CmSetRegistryQuotaInformation(p_Buf1);
          }
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
            || PsIsCurrentThreadInServerSilo() )
          {
            return 3221225569LL;
          }
          if ( (_DWORD)v3 == 4 )
          {
            if ( PreviousMode )
            {
              if ( (p_Buf1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v30 = RtlReadULongFromUser((unsigned int *)p_Buf1);
            }
            else
            {
              v30 = *(_DWORD *)p_Buf1;
            }
            v126 = v30;
            if ( !v30 )
            {
              v32 = 0LL;
              return (unsigned int)IoConfigureCrashDump(v32, 0LL);
            }
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 )
                return (unsigned int)WheaCrashDumpInitializationComplete();
              return 3221225485LL;
            }
          }
          v32 = 1LL;
          return (unsigned int)IoConfigureCrashDump(v32, 0LL);
        }
        if ( a1 <= 51 )
        {
          if ( a1 == 51 )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225506LL;
            return (unsigned int)VfSetVerifierInformation(p_Buf1, (unsigned int)v3, 0LL);
          }
          if ( a1 != 40 && a1 != 41 )
          {
            if ( a1 == 46 )
            {
              if ( (_DWORD)v3 != 8 )
                return 3221225476LL;
              if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
                return 3221225569LL;
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                if ( PreviousMode )
                  v35 = (void *)RtlReadULong64FromUser((volatile void *)p_Buf1);
                else
                  v35 = *(void **)p_Buf1;
                v129 = v35;
                if ( v35 )
                {
                  v117 = 0LL;
                  updated = ObReferenceObjectByHandle(
                              v35,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              PreviousMode,
                              &v117,
                              0LL);
                  v36 = v117;
                  if ( (updated & 0x80000000) != 0 )
                    return updated;
                }
                else
                {
                  v36 = 0LL;
                  updated = 0;
                }
                KdUpdateTimeSlipEvent(v36);
                return updated;
              }
              return 3221225506LL;
            }
            if ( (unsigned int)(a1 - 47) > 1 )
              return (unsigned int)-1073741821;
            return 3221225474LL;
          }
          if ( (_DWORD)v3 != 16 )
            return 3221225476LL;
          if ( !PreviousMode )
            goto LABEL_128;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          result = VfProbeAndCaptureUnicodeString(&v121, p_Buf1, 1LL);
          if ( (int)result < 0 )
            return result;
          p_Buf1 = (__int64)&v121;
          if ( v121.Length )
          {
LABEL_128:
            v37 = a1 - 40;
            if ( !v37 )
            {
              v38 = VfAddVerifierEntry((PCUNICODE_STRING)p_Buf1);
              goto LABEL_469;
            }
            if ( v37 == 1 )
            {
              v38 = VfRemoveVerifierEntry(p_Buf1);
LABEL_469:
              updated = v38;
              goto LABEL_470;
            }
LABEL_466:
            updated = -1073741821;
LABEL_470:
            if ( !PreviousMode )
              return updated;
            v63 = (UNICODE_STRING *)p_Buf1;
            goto LABEL_472;
          }
          return 3221225711LL;
        }
        switch ( a1 )
        {
          case '6':
            v40 = 0;
            goto LABEL_147;
          case '8':
            LOBYTE(v8) = PreviousMode;
            return (unsigned int)PfSnSetPrefetcherInformation(2LL, p_Buf1, (unsigned int)v3, v8);
          case ';':
            if ( (_DWORD)v3 == 4 )
            {
              v39 = *(_DWORD *)p_Buf1;
              updated = ExpUpdateComPlusPackage(*(_DWORD *)p_Buf1);
              if ( (updated & 0x80000000) == 0 )
                *(_DWORD *)(MmWriteableSharedUserData + 736) = v39;
              return updated;
            }
            return 3221225476LL;
        }
        if ( a1 != 69 )
        {
          if ( a1 != 71 )
            return (unsigned int)-1073741821;
          return 3221225659LL;
        }
        return (unsigned int)-1073741637;
      }
      if ( PreviousMode || !p_Buf1 || (_DWORD)v3 != 8 )
        return 3221225485LL;
      if ( !*(_DWORD *)p_Buf1 )
        return (unsigned int)-1073741637;
      v46 = (unsigned int)(*(_DWORD *)p_Buf1 - 1);
      if ( *(_DWORD *)p_Buf1 == 1
        || (v46 = (unsigned int)(*(_DWORD *)p_Buf1 - 2), *(_DWORD *)p_Buf1 == 2)
        || (v46 = (unsigned int)(*(_DWORD *)p_Buf1 - 3), *(_DWORD *)p_Buf1 == 3) )
      {
        guard_dispatch_icall_no_overrides(2LL, v46);
        return 0;
      }
      switch ( *(_DWORD *)p_Buf1 )
      {
        case 4:
          return (unsigned int)-1073741637;
        case 6:
          LOBYTE(v11) = 1;
          return (unsigned int)guard_dispatch_icall_no_overrides(v11, (unsigned int)(*(_DWORD *)p_Buf1 - 6));
        case 7:
          updated = 0;
          if ( off_140E00B38[0] == xKdEnumerateDebuggingDevices )
            return (unsigned int)-1073741822;
          return updated;
      }
      return (unsigned int)-1073741811;
    }
    if ( a1 <= 93 )
    {
      if ( a1 != 93 )
      {
        if ( a1 <= 82 )
        {
          if ( a1 != 82 )
          {
            if ( a1 != 74 )
            {
              switch ( a1 )
              {
                case 'K':
                  return (unsigned int)ExpRegisterFirmwareTableInformationHandler(p_Buf1, v3, PreviousMode);
                case 'O':
                  LOBYTE(v8) = PreviousMode;
                  return (unsigned int)PfSetSuperfetchInformation(79LL, p_Buf1, (unsigned int)v3, v8);
                case 'P':
                  if ( (unsigned int)v3 < 4 )
                    return (unsigned int)-1073741820;
                  v119 = 6;
                  if ( PreviousMode )
                    RtlCopyFromUser(&v119, (void *)p_Buf1, 4uLL);
                  else
                    RtlCopyVolatileMemory(&v119, (const void *)p_Buf1, 4uLL);
                  LOBYTE(v48) = PreviousMode;
                  return (unsigned int)MmIssueMemoryListCommand(v119, v48, -1LL);
                case 'Q':
LABEL_185:
                  LOBYTE(v114) = 0;
                  if ( (unsigned int)v3 < 0x40 )
                    return 3221225476LL;
                  if ( a1 == 21 )
                  {
                    v47 = 0;
                  }
                  else
                  {
                    v128 = *(_DWORD *)(p_Buf1 + 60);
                    v47 = v128;
                    if ( (v128 & 0xFFFFFFF0) != 0 || (v128 & 0xC) == 0xC || (v128 & 3) == 3 )
                      return 3221225712LL;
                  }
                  if ( SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
                    return MmAdjustWorkingSetSizeEx(
                             *(_QWORD *)(p_Buf1 + 24),
                             *(_QWORD *)(p_Buf1 + 32),
                             1LL,
                             1,
                             v47,
                             &v114);
                  return 3221225506LL;
                default:
                  return (unsigned int)-1073741821;
              }
            }
            return 3221225474LL;
          }
          if ( (unsigned int)v3 < 0x18 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            return 3221225569LL;
          if ( PreviousMode )
          {
            Buf1 = *(UNICODE_STRING *)p_Buf1;
            Src[0] = *(void **)(p_Buf1 + 16);
            p_Buf1 = (__int64)&Buf1;
          }
          if ( (unsigned int)(*(_DWORD *)(p_Buf1 + 16) - 1) > 0x1E )
            return 3221225485LL;
          *(_OWORD *)&PrivilegeValue[0].LowPart = *(_OWORD *)p_Buf1;
          updated = PsLookupProcessThreadByCid(PrivilegeValue, 0LL, &v117);
          if ( (updated & 0x80000000) != 0 )
            return updated;
          v50 = (_KPROCESS *)v117;
          if ( (unsigned __int8)*((_DWORD *)v117 + 1) )
          {
            updated = -1073741749;
          }
          else
          {
            KeSetActualBasePriorityThread((__int64)v117, *(unsigned int *)(p_Buf1 + 16), v49);
            updated = 259;
          }
LABEL_211:
          ObfDereferenceObject(v50);
          return updated;
        }
        v51 = a1 - 86;
        if ( !v51 )
          return (unsigned int)ObSetRefTraceInformation((void *)p_Buf1, v3);
        v52 = v51 - 1;
        if ( !v52 )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return (unsigned int)-1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            if ( PreviousMode )
              *(_QWORD *)&Buf1.Length = RtlReadULong64FromUser((volatile void *)p_Buf1);
            else
              RtlCopyVolatileMemory(&Buf1, (const void *)p_Buf1, 8uLL);
            MmSpecialPoolTag = *(_DWORD *)&Buf1.Length;
            MmSpecialPoolCatchOverruns = *(_BYTE *)(&Buf1.MaximumLength + 1) & 1;
            return updated;
          }
          return (unsigned int)-1073741820;
        }
        v53 = v52 - 2;
        if ( v53 )
        {
          v54 = v53 - 2;
          if ( !v54 )
          {
            if ( !PreviousMode )
            {
              if ( (_DWORD)v3 )
                return (unsigned int)-1073741584;
              else
                return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
            }
            return (unsigned int)-1073741790;
          }
          if ( v54 != 1 )
            return (unsigned int)-1073741821;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          if ( (_DWORD)v3 != 40 )
            return 3221225476LL;
          return (unsigned int)VfSetVerifierInformationEx(p_Buf1);
        }
        if ( PreviousMode != 1 )
          return (unsigned int)-1073741637;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( !Process[1].ReadyTime )
            return (unsigned int)DbgkRegisterErrorPort((void *)p_Buf1, (unsigned int)v3);
          v56 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v56 != 332 && v56 != 452 )
            v6 = 0;
          if ( !v6 )
            return (unsigned int)DbgkRegisterErrorPort((void *)p_Buf1, (unsigned int)v3);
          return (unsigned int)-1073741637;
        }
        return (unsigned int)-1073741727;
      }
      v57 = 172;
LABEL_240:
      if ( (_DWORD)v3 != v57 )
        return 3221225476LL;
      if ( PreviousMode && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QueueListEntry.Flink, PreviousMode) )
        return 3221225569LL;
      return (unsigned int)ExpSetTimeZoneInformation((void *)p_Buf1, v57);
    }
    if ( a1 > 106 )
    {
      v64 = a1 - 109;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
          return (unsigned int)-1073741822;
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( (_DWORD)v3 != 4 )
            return 3221225476LL;
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)p_Buf1;
            return 0;
          }
          return 3221225506LL;
        }
        if ( v66 != 2 )
          return (unsigned int)-1073741821;
        return (unsigned int)PsSetCpuQuotaInformation((volatile void *)p_Buf1, (unsigned int)v3, PreviousMode);
      }
      else
      {
        LOBYTE(v8) = PreviousMode;
        return (unsigned int)SmSetStoreInformation(2LL, p_Buf1, (unsigned int)v3, v8);
      }
    }
    if ( a1 == 106 )
      return (unsigned int)-1073741821;
    v58 = a1 - 94;
    if ( !v58 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return (unsigned int)-1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        if ( PreviousMode )
          *(_QWORD *)&Buf1.Length = RtlReadULong64FromUser((volatile void *)p_Buf1);
        else
          RtlCopyVolatileMemory(&Buf1, (const void *)p_Buf1, 8uLL);
        _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), *(unsigned int *)&Buf1.Length);
        _InterlockedAnd(
          (volatile signed __int32 *)(MmWriteableSharedUserData + 928),
          ~*(_DWORD *)(&Buf1.MaximumLength + 1));
        return updated;
      }
      return (unsigned int)-1073741820;
    }
    v59 = v58 - 1;
    if ( !v59 )
      return 3221225659LL;
    v60 = v59 - 2;
    if ( v60 )
    {
      v61 = v60 - 5;
      if ( v61 )
      {
        if ( v61 != 2 )
          return (unsigned int)-1073741821;
        return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation((unsigned int *)p_Buf1, v3, PreviousMode);
      }
      v57 = 432;
      goto LABEL_240;
    }
    if ( (_DWORD)v3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      Buf1 = *(UNICODE_STRING *)p_Buf1;
      *(_OWORD *)Src = *(_OWORD *)(p_Buf1 + 16);
      *(_QWORD *)&v138 = *(_QWORD *)(p_Buf1 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&Buf1.Buffer, 1LL);
      if ( (int)result < 0 )
        return result;
      v62 = VfProbeAndCaptureUnicodeStringBuffer(&Src[1], 1LL);
      if ( v62 < 0 )
      {
        VfFreeCapturedUnicodeString(&Buf1.Buffer);
        return (unsigned int)v62;
      }
      p_Buf1 = (__int64)&Buf1;
    }
    updated = VfFaultsSetParameters(p_Buf1);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(p_Buf1 + 8);
    v63 = (UNICODE_STRING *)(p_Buf1 + 24);
LABEL_472:
    VfFreeCapturedUnicodeString(v63);
    return updated;
  }
  if ( a1 > 199 )
  {
    if ( a1 > 225 )
    {
      if ( a1 <= 243 )
      {
        if ( a1 != 243 )
        {
          switch ( a1 )
          {
            case 226:
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225569LL;
              LOBYTE(v111) = (_DWORD)v3 == 0;
              return (unsigned int)VfPtGenerateTraceInformation(v111);
            case 228:
            case 229:
              LOBYTE(v114) = 0;
              RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
              return 3221225569LL;
            case 233:
              return (unsigned int)PnpIommuBlockUnblockDevice(p_Buf1, v3);
            case 235:
              return (unsigned int)HvlQuerySetBootPagesInfo((_DWORD *)p_Buf1, v3, PreviousMode, 0LL, 0LL);
            default:
              return (unsigned int)-1073741821;
          }
        }
        return (unsigned int)-1073741637;
      }
      if ( a1 == 245 )
      {
        if ( (_DWORD)v3 != 4 )
          return (unsigned int)-1073741820;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          ExResourceTimeoutCount = (*(_DWORD *)p_Buf1 + 3999) / 0xFA0u;
          return updated;
        }
        return (unsigned int)-1073741727;
      }
      if ( a1 == 246 )
      {
        if ( (_DWORD)v3 == 4 )
        {
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            if ( PreviousMode )
              v112 = RtlReadULongFromUser((unsigned int *)p_Buf1);
            else
              v112 = *(_DWORD *)p_Buf1;
            *(_DWORD *)&Buf1.Length = v112;
            PspBreakOnContextUnwindFailure = v112;
            return 0;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
      if ( a1 != 248 )
      {
        if ( a1 != 251 )
          return (unsigned int)-1073741821;
        return (unsigned int)ObSetRefTraceInformationEx((void *)p_Buf1, v3);
      }
    }
    else if ( a1 != 225 )
    {
      if ( a1 <= 217 )
      {
        if ( a1 == 217 )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          return (unsigned int)VfVolatileSetDifRuleClass((void *)p_Buf1, (unsigned int)v3);
        }
        v103 = a1 - 204;
        if ( v103 )
        {
          v104 = v103 - 2;
          if ( !v104 )
          {
            if ( (_DWORD)v3 != 8 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
              return 3221225569LL;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              *(_QWORD *)&Buf1.Length = *(_QWORD *)p_Buf1;
              BYTE1(v114) = LOBYTE(Buf1.Length) != 0;
              result = ExSetLeapSecondEnabled();
              updated = result;
              if ( (int)result < 0 )
                return result;
              LOBYTE(ExpSysDbgLock.ApcState.Process->Header.Lock) = BYTE1(v114);
              return updated;
            }
            return 3221225506LL;
          }
          v105 = v104 - 1;
          if ( v105 )
          {
            v106 = v105 - 3;
            if ( v106 )
            {
              if ( v106 != 2 )
                return (unsigned int)-1073741821;
              return (unsigned int)CmUpdateFeatureUsageSubscription((void *)p_Buf1, (unsigned int)v3, PreviousMode);
            }
            else
            {
              return (unsigned int)CmUpdateFeatureConfiguration((void *)p_Buf1, (unsigned int)v3, PreviousMode);
            }
          }
          if ( (_DWORD)v3 != 4 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          v122 = 0;
          if ( (*(_DWORD *)p_Buf1 & 0x2018) == 0 )
          {
            NtGlobalFlag2 = NtGlobalFlag2 & 0x2018 | *(_DWORD *)p_Buf1;
            *(_DWORD *)p_Buf1 = NtGlobalFlag2;
            return updated;
          }
          return 3221225485LL;
        }
        if ( (unsigned int)v3 < 8 )
          return 3221225476LL;
        v107 = v3 - 8;
        if ( (v107 & 7) != 0 || v107 > 0x100 )
          return 3221225476LL;
        if ( PreviousMode )
          v108 = RtlReadULong64FromUser((volatile void *)p_Buf1);
        else
          v108 = *(_QWORD *)p_Buf1;
        PrivilegeValue[0] = (LUID)v108;
        v109 = (void *)(p_Buf1 + 8);
        if ( PreviousMode )
          RtlCopyFromUser(&Buf1, v109, v107);
        else
          RtlCopyVolatileMemory(&Buf1, v109, v107);
        if ( v108 >= 2 )
          return 3221225485LL;
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( (updated & 0x80000000) != 0 )
          return updated;
        v99 = v107 >> 3;
        v100 = v108;
        return (unsigned int)KeModifySystemAllowedCpuSets(v99, (int)&Buf1, v98, v100, Object);
      }
      switch ( a1 )
      {
        case 218:
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          return (unsigned int)VfVolatileClearDifRuleClass();
        case 219:
        case 220:
          if ( (_DWORD)v3 != 16 )
            return 3221225476LL;
          if ( !PreviousMode )
            goto LABEL_464;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          result = VfProbeAndCaptureUnicodeString(&v121, p_Buf1, 1LL);
          if ( (int)result < 0 )
            return result;
          p_Buf1 = (__int64)&v121;
          if ( v121.Length )
          {
LABEL_464:
            v110 = a1 - 219;
            if ( !v110 )
            {
              v38 = VfVolatileApplyDifVerification(p_Buf1);
              goto LABEL_469;
            }
            if ( v110 == 1 )
            {
              v38 = VfVolatileRemoveDifVerification((const UNICODE_STRING *)p_Buf1);
              goto LABEL_469;
            }
            goto LABEL_466;
          }
          return 3221225711LL;
        case 223:
          return (unsigned int)ExPoolSetLimit((void *)p_Buf1, v3, PreviousMode);
      }
      if ( a1 != 224 )
        return (unsigned int)-1073741821;
    }
LABEL_455:
    if ( SepRmCapTableLock.InGlobalUpdateVpThreadPriorityList )
      return (unsigned int)guard_dispatch_icall_no_overrides((unsigned int)a1, p_Buf1);
    return (unsigned int)-1073741637;
  }
  if ( a1 == 199 )
    goto LABEL_455;
  if ( a1 <= 159 )
  {
    if ( a1 == 159 )
      return (unsigned int)-1073741637;
    if ( a1 <= 134 )
    {
      if ( a1 == 134 )
      {
        if ( (_DWORD)v3 != 32 )
          return 3221225476LL;
        return (unsigned int)sub_140AB5C94(2LL, p_Buf1);
      }
      else
      {
        v67 = a1 - 127;
        if ( !v67 )
        {
          if ( (_DWORD)v3 == 16 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              v129 = *(void **)p_Buf1;
              updated = MmScrubMemory(v83, v129, PrivilegeValue);
              v115[0] = updated;
              *(LUID *)(p_Buf1 + 8) = PrivilegeValue[0];
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v68 = v67 - 2;
        if ( v68 )
        {
          v69 = v68 - 1;
          if ( !v69 )
          {
            v117 = 0LL;
            if ( (((_DWORD)v3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)v3 != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                if ( PreviousMode )
                  RtlCopyFromUser(&Buf1, (void *)p_Buf1, v3);
                else
                  RtlCopyVolatileMemory(&Buf1, (const void *)p_Buf1, v3);
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(ThreadPartition, v80, v81, v82, *(_BYTE *)(v79 + 562), &v117, v114);
                v115[0] = updated;
                if ( PreviousMode )
                  RtlWriteULong64ToUser((_QWORD *)(p_Buf1 + 8), (__int64)v117);
                else
                  *(_QWORD *)(p_Buf1 + 8) = v117;
                return updated;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          v70 = v69 - 1;
          if ( v70 )
          {
            if ( v70 != 1 )
              return (unsigned int)-1073741821;
            if ( (_DWORD)v3 != 4 )
              return 3221225476LL;
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( PreviousMode )
            {
              v71 = RtlReadULongFromUser((unsigned int *)p_Buf1);
              *(_DWORD *)&Buf1.Length = v71;
            }
            else
            {
              RtlCopyVolatileMemory(&Buf1, (const void *)p_Buf1, 4uLL);
              LOBYTE(v71) = Buf1.Length;
            }
            if ( (v71 & 1) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v74 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr, 0LL, 0LL, v72);
              v76 = v74;
              if ( _interlockedbittestandset64(
                     (volatile signed __int32 *)&ExpPlatformBinaryLock.WaitBlockFill11[40],
                     0LL) )
              {
                ExfAcquirePushLockExclusiveEx(
                  (unsigned __int64 *)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr,
                  v74,
                  (__int64)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr);
              }
              if ( v76 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v76, v75);
                else
                  *((_BYTE *)v76 + 10) = 1;
              }
              updated = ZwLoadDriver(&DriverServiceName);
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr,
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr);
              KeAbPostRelease((unsigned __int64)&ExpPlatformBinaryLock.WaitBlock[0].SparePtr);
              KeLeaveCriticalRegion();
              return updated;
            }
            if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)ZwUnloadDriver(&DriverServiceName);
          }
          else
          {
            if ( PreviousMode )
              return 3221225506LL;
            if ( (_DWORD)v3 != 24 )
              return 3221225476LL;
            return (unsigned int)KeInitializeEntropySystem(*(_QWORD *)p_Buf1);
          }
        }
        else
        {
          return (unsigned int)KeProcessorProfileControlArea(p_Buf1, v3, PreviousMode);
        }
      }
    }
    v84 = a1 - 142;
    if ( !v84 )
    {
      if ( (_DWORD)v3 == 72 || (_DWORD)v3 == 48 )
      {
        if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
        {
          RtlCopyFromUser(&Buf1, (void *)p_Buf1, v3);
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          v94 = Pool2;
          PrivilegeValue[0] = (LUID)Pool2;
          if ( !Pool2 )
            return 3221225626LL;
          RtlCopyFromUser(Pool2, Src[1], LOWORD(Src[0]));
          Src[1] = v94;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          if ( _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentServerSiloGlobals[85].Blink,
                 *(signed __int32 *)&Buf1.Length,
                 0) )
          {
            ExFreePoolWithTag(v94, 0x50535845u);
            return 0LL;
          }
          *(UNICODE_STRING *)&CurrentServerSiloGlobals[85].Blink = Buf1;
          *(struct _LIST_ENTRY *)((char *)CurrentServerSiloGlobals + 1384) = *(struct _LIST_ENTRY *)Src;
          *(_OWORD *)&CurrentServerSiloGlobals[87].Blink = v138;
          *(_OWORD *)&CurrentServerSiloGlobals[88].Blink = v139;
          CurrentServerSiloGlobals[89].Blink = v140;
          return 0;
        }
        return 3221225569LL;
      }
      return 3221225476LL;
    }
    v85 = v84 - 8;
    if ( !v85 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return 3221225569LL;
      return (unsigned int)ExpSetBootLoaderMetadata((void *)p_Buf1, (unsigned int)v3, v91, v92);
    }
    v86 = v85 - 1;
    if ( !v86 )
    {
      PrivilegeValue[0] = (LUID)19LL;
      if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
        return 3221225569LL;
      v88 = v3 - 1;
      if ( v88 )
      {
        if ( v88 != 3 )
          return 3221225476LL;
        if ( PreviousMode )
          v89 = RtlReadULongFromUser((unsigned int *)p_Buf1);
        else
          v89 = *(_DWORD *)p_Buf1;
        v130 = v89;
      }
      else
      {
        if ( PreviousMode )
          v90 = RtlReadUCharFromUser((volatile void *)p_Buf1);
        else
          v90 = *(_BYTE *)p_Buf1;
        v118 = v90;
        if ( v90 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return 3221225569LL;
        v89 = v90 != 0 ? 1 : 5;
      }
      return (unsigned int)ExpSetSoftRebootFlags(v89);
    }
    v87 = v86 - 1;
    if ( v87 )
    {
      if ( v87 != 3 )
        return (unsigned int)-1073741821;
      return (unsigned int)CmReconcileAndValidateAllHives(2LL);
    }
    if ( (_DWORD)v3 != 8 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      v133 = RtlReadULong64FromUser((volatile void *)p_Buf1);
      return (unsigned int)ExpQueryElamCertInfo(v133);
    }
    return 3221225485LL;
  }
  if ( a1 > 177 )
  {
    if ( a1 == 187 )
    {
      if ( (_DWORD)v3 != 24 )
        return 3221225476LL;
      Buf1 = *(UNICODE_STRING *)p_Buf1;
      Src[0] = *(void **)(p_Buf1 + 16);
      result = VfProbeAndCaptureUnicodeStringBuffer(&Buf1, 1LL);
      if ( (int)result < 0 )
        return result;
      updated = PsSetExeModerationState((__int64)&Buf1, (unsigned int)Src[0]);
      v63 = &Buf1;
      goto LABEL_472;
    }
    if ( a1 != 190 )
    {
      if ( a1 == 191 )
      {
        if ( !(_DWORD)v3 )
        {
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          return (unsigned int)VslRelaxQuotas();
        }
      }
      else
      {
        if ( a1 != 194 )
          return (unsigned int)-1073741821;
        if ( !(_DWORD)v3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          updated = VslProvisionDumpEncryption();
          if ( (updated & 0x80000000) != 0 )
            return updated;
          return (unsigned int)IoProvisionCrashDumpKey();
        }
      }
      return (unsigned int)-1073741811;
    }
    goto LABEL_455;
  }
  switch ( a1 )
  {
    case 177:
      v131 = 0LL;
      v132 = 0LL;
      if ( (_DWORD)v3 != 8 )
      {
        if ( (_DWORD)v3 )
          return 3221225476LL;
        updated = 0;
        v102 = KeGetCurrentThread()->ApcState.Process;
        v115[0] = PsGetSessionIdEx((__int64)v102);
        if ( v115[0] == -1 )
          return updated;
        v132 = v102;
        return (unsigned int)PsInvokeWin32Callout(32LL, &v131, 1LL, v115);
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PreviousMode )
        v101 = (void *)RtlReadULong64FromUser((volatile void *)p_Buf1);
      else
        v101 = *(void **)p_Buf1;
      v135 = v101;
      PrivilegeValue[0] = 0LL;
      updated = ObReferenceObjectByHandle(
                  v101,
                  0x1000u,
                  (POBJECT_TYPE)PsProcessType,
                  PreviousMode,
                  (PVOID *)PrivilegeValue,
                  0LL);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v50 = (_KPROCESS *)PrivilegeValue[0];
      v115[0] = PsGetSessionIdEx(*(_QWORD *)PrivilegeValue);
      if ( v115[0] != -1 )
      {
        v132 = v50;
        updated = PsInvokeWin32Callout(32LL, &v131, 1LL, v115);
      }
      goto LABEL_211;
    case 161:
      if ( PreviousMode )
        return 3221225506LL;
      if ( (_DWORD)v3 != 8 )
        return 3221225476LL;
      return (unsigned int)KdInitialize(3LL, p_Buf1, &KdpContext);
    case 164:
      goto LABEL_455;
  }
  if ( a1 != 168 )
  {
    if ( a1 == 170 )
    {
      if ( (_DWORD)v3 != 16 )
        return 3221225476LL;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return 3221225569LL;
      return (unsigned int)KeIntSteerAssignCpuSetForGsiv(
                             *(_OWORD *)p_Buf1,
                             WORD2(*(_QWORD *)p_Buf1),
                             *(_QWORD *)(p_Buf1 + 8));
    }
    else
    {
      if ( a1 != 176 )
        return (unsigned int)-1073741821;
      if ( (unsigned int)v3 < 8 )
        return 3221225476LL;
      v96 = v3 - 8;
      if ( (v96 & 7) != 0 || v96 > 0x100 )
        return 3221225476LL;
      v97 = *(struct _LIST_ENTRY **)p_Buf1;
      v134 = *(_QWORD *)p_Buf1;
      memmove(&Buf1, (const void *)(p_Buf1 + 8), v96);
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      return (unsigned int)KeSetTagCpuSets(v96 >> 3, (__int64)&Buf1, v97);
    }
  }
  if ( (v3 & 7) != 0 || (unsigned int)v3 > 0x100 )
    return 3221225476LL;
  if ( PreviousMode )
    RtlCopyFromUser(&Buf1, (void *)p_Buf1, v3);
  else
    RtlCopyVolatileMemory(&Buf1, (const void *)p_Buf1, v3);
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    v99 = (unsigned int)v3 >> 3;
    v100 = 0;
    return (unsigned int)KeModifySystemAllowedCpuSets(v99, (int)&Buf1, v98, v100, Object);
  }
  return result;
}
