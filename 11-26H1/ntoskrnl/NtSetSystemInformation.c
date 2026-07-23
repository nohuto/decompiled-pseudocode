/*
 * XREFs of NtSetSystemInformation @ 0x140839A80
 * Callers:
 *     DifNtSetSystemInformationWrapper @ 0x140691670 (DifNtSetSystemInformationWrapper.c)
 *     WmipRegisterFirmwareProviders @ 0x140CE6708 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MiGetThreadPartition @ 0x140465610 (MiGetThreadPartition.c)
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     VslProvisionDumpEncryption @ 0x1405C6104 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x1405C9C74 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405E665C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1405E7408 (KeProcessorProfileControlArea.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405EB7C0 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F6688 (KeModifySystemAllowedCpuSets.c)
 *     KeSetTagCpuSets @ 0x1405F68DC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405F9FDC (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1406178F8 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x140617E1C (PsSetExeModerationState.c)
 *     VfVolatileApplyDifVerification @ 0x14064B4D4 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x14064B68C (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x14064B744 (VfVolatileSetDifRuleClass.c)
 *     ExpSetBootLoaderMetadata @ 0x1406CECC8 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x1406CEE28 (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x1406CFD68 (ExPoolSetLimit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwLoadDriver @ 0x14072A180 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14072B760 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14072BB00 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlQuerySetBootPagesInfo @ 0x140779028 (HvlQuerySetBootPagesInfo.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     VslRelaxQuotas @ 0x1407955EC (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407B7ACC (PnpIommuBlockUnblockDevice.c)
 *     KeInitializeEntropySystem @ 0x1407BEACC (KeInitializeEntropySystem.c)
 *     ObSetRefTraceInformation @ 0x1407C7574 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1408392AC (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140839448 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x140839814 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x14083BCC0 (ExSetLeapSecondEnabled.c)
 *     WheaCrashDumpInitializationComplete @ 0x14084F960 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1408575A8 (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x14085AFF0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14085B25C (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x14085CFC0 (CmReconcileAndValidateAllHives.c)
 *     MmCreateMirror @ 0x14086EB30 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x140871100 (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PsLookupProcessThreadByCid @ 0x140A0F650 (PsLookupProcessThreadByCid.c)
 *     MmLoadSystemImage @ 0x140A39A30 (MmLoadSystemImage.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A8F720 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_140AB7034 @ 0x140AB7034 (sub_140AB7034.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 *     ExpInitializeSessionDriver @ 0x140B381A8 (ExpInitializeSessionDriver.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfSetVerifierInformation @ 0x140C2684C (VfSetVerifierInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140C27314 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140C2747C (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140C274E4 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 *     VfFaultsSetParameters @ 0x140C3AAB4 (VfFaultsSetParameters.c)
 *     VfRemoveVerifierEntry @ 0x140C3FB00 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformationEx @ 0x140C3FB28 (VfSetVerifierInformationEx.c)
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 *     BgkSetBootGraphicsInformation @ 0x140C55794 (BgkSetBootGraphicsInformation.c)
 */

NTSTATUS __cdecl NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  SIZE_T v3; // r15
  char v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 PreviousMode; // r12
  ULONG v10; // r8d
  __int64 v11; // rcx
  NTSTATUS updated; // edi
  __int64 v13; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  char UCharFromUser; // al
  __int64 ULong64FromUser; // rax
  char v20; // al
  unsigned int v21; // eax
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  void *v26; // rax
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v28; // rax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int ULongFromUser; // eax
  void *v35; // rcx
  PVOID v36; // rcx
  __int32 v37; // ebx
  NTSTATUS v38; // eax
  unsigned int v39; // ebx
  int v40; // eax
  char v41; // bl
  int SystemImage; // eax
  PVOID v43; // r15
  PIMAGE_NT_HEADERS v44; // rax
  char *v45; // r8
  __int64 v46; // rdx
  int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // r8
  _KPROCESS *v50; // rbx
  __int32 v51; // ebx
  __int32 v52; // ebx
  __int32 v53; // ebx
  __int32 v54; // ebx
  _KPROCESS *Process; // rcx
  __int16 v56; // ax
  int v57; // ebx
  __int32 v58; // ebx
  __int32 v59; // ebx
  __int32 v60; // ebx
  __int32 v61; // ebx
  NTSTATUS v62; // ebx
  char *p_Buf1; // rcx
  __int32 v64; // ebx
  __int32 v65; // ebx
  __int32 v66; // ebx
  __int32 v67; // ebx
  __int32 v68; // ebx
  __int32 v69; // ebx
  __int32 v70; // ebx
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
  __int32 v84; // ebx
  __int32 v85; // ebx
  __int32 v86; // ebx
  __int32 v87; // ebx
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
  __int32 v103; // ebx
  __int32 v104; // ebx
  __int32 v105; // ebx
  __int32 v106; // ebx
  unsigned int v107; // r15d
  unsigned __int64 v108; // rbx
  char *v109; // rdx
  __int32 v110; // ebx
  struct _KLOCK_ENTRIES *v111; // r9
  __int64 v112; // rcx
  int v113; // eax
  unsigned __int8 Object; // [rsp+20h] [rbp-358h]
  int IsMember; // [rsp+30h] [rbp-348h] BYREF
  ULONG Size[7]; // [rsp+34h] [rbp-344h] BYREF
  LUID PrivilegeValue[2]; // [rsp+50h] [rbp-328h] BYREF
  PVOID v118; // [rsp+60h] [rbp-318h] BYREF
  char v119; // [rsp+68h] [rbp-310h]
  unsigned int v120; // [rsp+6Ch] [rbp-30Ch] BYREF
  PVOID BaseOfImage[2]; // [rsp+70h] [rbp-308h] BYREF
  __int128 SystemInformationa; // [rsp+80h] [rbp-2F8h] BYREF
  int v123; // [rsp+90h] [rbp-2E8h]
  unsigned __int64 v124[18]; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v125; // [rsp+128h] [rbp-250h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+130h] [rbp-248h] BYREF
  int v127; // [rsp+144h] [rbp-234h]
  unsigned int v128; // [rsp+148h] [rbp-230h]
  int v129; // [rsp+150h] [rbp-228h]
  ULONG_PTR v130; // [rsp+188h] [rbp-1F0h]
  int v131; // [rsp+1D8h] [rbp-1A0h]
  __int128 v132; // [rsp+1E0h] [rbp-198h] BYREF
  _KPROCESS *v133; // [rsp+1F0h] [rbp-188h]
  __int64 v134; // [rsp+210h] [rbp-168h]
  ULONG_PTR v135; // [rsp+218h] [rbp-160h]
  void *v136; // [rsp+220h] [rbp-158h]
  __int128 Buf1; // [rsp+230h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+240h] [rbp-138h] BYREF
  __int128 v139; // [rsp+250h] [rbp-128h]
  __int128 v140; // [rsp+260h] [rbp-118h]
  struct _LIST_ENTRY *v141; // [rsp+270h] [rbp-108h]

  v3 = SystemInformationLength;
  SystemInformationa = 0LL;
  BaseOfImage[0] = 0LL;
  v6 = 1;
  PrivilegeValue[0] = 0LL;
  v125 = 0LL;
  v118 = 0LL;
  memset_0(&Buf1, 0, 0x100uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOWORD(IsMember) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemInformationClass == SystemErrorPortInformation )
    {
      v10 = 2;
    }
    else if ( SystemInformationClass != SystemSoftRebootInformation || (v10 = 1, (_DWORD)v3 != 1) )
    {
      v10 = 4;
    }
    ProbeForRead(SystemInformation, v3, v10);
    v11 = 2LL;
  }
  else
  {
    v11 = 2LL;
  }
  updated = 0;
  if ( SystemInformationClass <= SystemBootGraphicsInformation )
  {
    if ( SystemInformationClass == SystemBootGraphicsInformation )
    {
      if ( PreviousMode )
        return -1073741727;
      if ( (_DWORD)v3 != 32 )
        return -1073741820;
      return BgkSetBootGraphicsInformation(2LL, SystemInformation);
    }
    if ( SystemInformationClass <= SystemWatchdogTimerInformation )
    {
      if ( SystemInformationClass != SystemWatchdogTimerInformation )
      {
        if ( SystemInformationClass <= SystemPrioritySeperation )
        {
          if ( SystemInformationClass == SystemPrioritySeperation )
          {
            if ( (_DWORD)v3 == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( PreviousMode )
                  ULongFromUser = RtlReadULongFromUser((unsigned int *)SystemInformation);
                else
                  ULongFromUser = *(_DWORD *)SystemInformation;
                v128 = ULongFromUser;
                LOBYTE(v33) = 1;
                PsChangeQuantumTable(v33, ULongFromUser);
                return 0;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( SystemInformationClass <= SystemTimeAdjustmentInformation )
          {
            if ( SystemInformationClass != SystemTimeAdjustmentInformation )
            {
              if ( SystemInformationClass != SystemFlagsInformation )
              {
                if ( SystemInformationClass != SystemFileCacheInformation )
                {
                  v13 = (unsigned int)(SystemInformationClass - 24);
                  if ( SystemInformationClass == SystemDpcBehaviorInformation )
                  {
                    if ( (_DWORD)v3 == 20 )
                    {
                      if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                      {
                        Buf1 = *(_OWORD *)SystemInformation;
                        LODWORD(Src[0]) = *((_DWORD *)SystemInformation + 4);
                        KiMinimumDpcRate = DWORD2(Buf1);
                        KiMaximumDpcQueueDepth = DWORD1(Buf1);
                        KiAdjustDpcThreshold = HIDWORD(Buf1);
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
                      return -1073741727;
                    }
                    return -1073741820;
                  }
                  if ( SystemInformationClass != SystemLoadGdiDriverInformation )
                  {
                    if ( SystemInformationClass == SystemUnloadGdiDriverInformation )
                    {
                      if ( (_DWORD)v3 == 8 )
                      {
                        if ( !PreviousMode )
                        {
                          MmUnloadSystemImage(*(_QWORD *)SystemInformation);
                          return 0;
                        }
                        return -1073741727;
                      }
                      return -1073741820;
                    }
                    return -1073741821;
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
                      return -1073741820;
                    v41 = 1;
                  }
                  if ( !PreviousMode )
                  {
                    SystemInformationa = *(_OWORD *)SystemInformation;
                    SystemImage = MmLoadSystemImage(
                                    (unsigned int)&SystemInformationa,
                                    0,
                                    0,
                                    v40,
                                    (__int64)&v125,
                                    (__int64)BaseOfImage);
                    updated = SystemImage;
                    if ( SystemImage < 0 )
                    {
                      if ( SystemImage == -1073741411 )
                        return -1073741554;
                    }
                    else
                    {
                      if ( v41 )
                        v43 = RtlImageDirectoryEntryToData(BaseOfImage[0], 1u, 0, Size);
                      else
                        v43 = 0LL;
                      v44 = RtlImageNtHeader(BaseOfImage[0]);
                      v45 = (char *)BaseOfImage[0] + v44->OptionalHeader.AddressOfEntryPoint;
                      *((PVOID *)SystemInformation + 2) = BaseOfImage[0];
                      *((_QWORD *)SystemInformation + 3) = v125;
                      *((_QWORD *)SystemInformation + 4) = v45;
                      if ( v41 )
                      {
                        *((_QWORD *)SystemInformation + 5) = v43;
                        *((_DWORD *)SystemInformation + 12) = v44->OptionalHeader.SizeOfImage;
                      }
                      else
                      {
                        *((_DWORD *)SystemInformation + 10) = v44->OptionalHeader.SizeOfImage;
                      }
                    }
                    return updated;
                  }
                  return -1073741727;
                }
                goto LABEL_185;
              }
              if ( (_DWORD)v3 == 4 )
              {
                if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                {
                  NtGlobalFlag = NtGlobalFlag & 0x6DCE640F | *(_DWORD *)SystemInformation & 0x92319BF0;
                  *(_DWORD *)SystemInformation = NtGlobalFlag;
                  return updated;
                }
                return -1073741790;
              }
              return -1073741820;
            }
            if ( (((_DWORD)v3 - 8) & 0xFFFFFFF7) != 0 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)((char *)&PspSiloMonitorLock.116 + 4), PreviousMode) )
              return -1073741727;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v124[0] = 0LL;
              if ( (_DWORD)v3 == 16 )
              {
                if ( PreviousMode )
                  UCharFromUser = RtlReadUCharFromUser((char *)SystemInformation + 8);
                else
                  UCharFromUser = *((_BYTE *)SystemInformation + 8);
                BYTE1(IsMember) = UCharFromUser;
                if ( PreviousMode )
                  ULong64FromUser = RtlReadULong64FromUser(SystemInformation);
                else
                  ULong64FromUser = *(_QWORD *)SystemInformation;
                v124[0] = ULong64FromUser;
              }
              else
              {
                if ( PreviousMode )
                  v20 = RtlReadUCharFromUser((char *)SystemInformation + 4);
                else
                  v20 = *((_BYTE *)SystemInformation + 4);
                BYTE1(IsMember) = v20;
                if ( PreviousMode )
                  v21 = RtlReadULongFromUser((unsigned int *)SystemInformation);
                else
                  v21 = *(_DWORD *)SystemInformation;
                v124[0] = v21;
                if ( v21 )
                  v124[0] = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v21;
              }
              if ( BYTE1(IsMember) )
                v124[0] = MEMORY[0xFFFFF78000000300];
              ExAcquireTimeRefreshLockExclusive(0xFFFFF78000000300uLL);
              updated = ExpUpdateTimerConfiguration(0LL, (__int64)v124, (__int64)&IsMember + 1);
              ExReleaseTimeRefreshLockExclusive();
              return updated;
            }
            return -1073741790;
          }
          v22 = SystemInformationClass - 30;
          if ( !v22 )
            return MmCreateMirror();
          v23 = v22 - 1;
          if ( !v23 )
            return EtwSetPerformanceTraceInformation(SystemInformation, (unsigned int)v3, PreviousMode);
          v24 = v23 - 3;
          if ( v24 )
          {
            v25 = v24 - 3;
            if ( v25 )
            {
              if ( v25 != 1 )
                return -1073741821;
              if ( (_DWORD)v3 != 16 )
                return -1073741820;
              if ( PreviousMode )
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) != 0 )
                {
                  if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
                  {
                    PrivilegeValue[0].HighPart = 0;
                    PrivilegeValue[0].LowPart = RtlReadULongFromUser((unsigned int *)SystemInformation);
                    v26 = (void *)RtlReadULong64FromUser((char *)SystemInformation + 8);
                    PrivilegeValue[1] = (LUID)v26;
                    SystemInformationa = *(_OWORD *)&PrivilegeValue[0].LowPart;
                    if ( LOWORD(PrivilegeValue[0].LowPart) == 62 )
                    {
                      RtlCopyFromUser(&Buf1, v26, 0x3EuLL);
                      if ( !memcmp(&Buf1, L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
                      {
                        *((_QWORD *)&SystemInformationa + 1) = L"\\SystemRoot\\System32\\win32k.sys";
                        WORD1(SystemInformationa) = 62;
                        return ZwSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformationa, 0x10u);
                      }
                    }
                  }
                }
                return -1073741727;
              }
              SystemInformationa = *(_OWORD *)SystemInformation;
              if ( !memcmp(*((const void **)SystemInformation + 1), L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
              {
                BaseOfImage[0] = *((PVOID *)PsAltSystemCallRegistrationLock.SchedulerApc.SystemArgument1 + 6);
                v28 = RtlImageNtHeader(BaseOfImage[0]);
                if ( !v28 )
                {
                  MmUnloadSystemImage((ULONG_PTR)PsAltSystemCallRegistrationLock.SchedulerApc.SystemArgument1);
                  return -1073741701;
                }
                updated = ExpInitializeSessionDriver((char *)BaseOfImage[0] + v28->OptionalHeader.AddressOfEntryPoint);
                if ( updated < 0 && !(unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
                  MmUnloadSystemImage((ULONG_PTR)PsAltSystemCallRegistrationLock.SchedulerApc.SystemArgument1);
                return updated;
              }
              return -1073741637;
            }
            if ( (_DWORD)v3 != 16 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
              return -1073741727;
            return CmSetRegistryQuotaInformation(SystemInformation);
          }
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
            || PsIsCurrentThreadInServerSilo() )
          {
            return -1073741727;
          }
          if ( (_DWORD)v3 == 4 )
          {
            if ( PreviousMode )
            {
              if ( ((unsigned __int8)SystemInformation & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v30 = RtlReadULongFromUser((unsigned int *)SystemInformation);
            }
            else
            {
              v30 = *(_DWORD *)SystemInformation;
            }
            v127 = v30;
            if ( !v30 )
            {
              v32 = 0LL;
              return IoConfigureCrashDump(v32, 0LL);
            }
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 )
                return WheaCrashDumpInitializationComplete();
              return -1073741811;
            }
          }
          v32 = 1LL;
          return IoConfigureCrashDump(v32, 0LL);
        }
        if ( SystemInformationClass <= SystemVerifierInformation )
        {
          if ( SystemInformationClass == SystemVerifierInformation )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741790;
            return VfSetVerifierInformation(SystemInformation, (unsigned int)v3, 0LL);
          }
          if ( SystemInformationClass != SystemVerifierAddDriverInformation
            && SystemInformationClass != SystemVerifierRemoveDriverInformation )
          {
            if ( SystemInformationClass == SystemTimeSlipNotification )
            {
              if ( (_DWORD)v3 != 8 )
                return -1073741820;
              if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)((char *)&PspSiloMonitorLock.116 + 4), PreviousMode) )
                return -1073741727;
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                if ( PreviousMode )
                  v35 = (void *)RtlReadULong64FromUser(SystemInformation);
                else
                  v35 = *(void **)SystemInformation;
                v130 = (ULONG_PTR)v35;
                if ( v35 )
                {
                  v118 = 0LL;
                  updated = ObReferenceObjectByHandle(
                              v35,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              PreviousMode,
                              &v118,
                              0LL);
                  v36 = v118;
                  if ( updated < 0 )
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
              return -1073741790;
            }
            if ( (unsigned int)(SystemInformationClass - 47) > 1 )
              return -1073741821;
            return -1073741822;
          }
          if ( (_DWORD)v3 != 16 )
            return -1073741820;
          if ( !PreviousMode )
            goto LABEL_128;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(&SystemInformationa, SystemInformation, 1LL);
          if ( result < 0 )
            return result;
          SystemInformation = &SystemInformationa;
          if ( (_WORD)SystemInformationa )
          {
LABEL_128:
            v37 = SystemInformationClass - 40;
            if ( !v37 )
            {
              v38 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
              goto LABEL_469;
            }
            if ( v37 == 1 )
            {
              v38 = VfRemoveVerifierEntry(SystemInformation);
LABEL_469:
              updated = v38;
              goto LABEL_470;
            }
LABEL_466:
            updated = -1073741821;
LABEL_470:
            if ( !PreviousMode )
              return updated;
            p_Buf1 = (char *)SystemInformation;
            goto LABEL_472;
          }
          return -1073741585;
        }
        switch ( SystemInformationClass )
        {
          case SystemLoadGdiDriverInSystemSpace:
            v40 = 0;
            goto LABEL_147;
          case SystemPrefetcherInformation:
            LOBYTE(v8) = PreviousMode;
            return PfSnSetPrefetcherInformation(2LL, SystemInformation, (unsigned int)v3, v8);
          case SystemComPlusPackage:
            if ( (_DWORD)v3 == 4 )
            {
              v39 = *(_DWORD *)SystemInformation;
              updated = ExpUpdateComPlusPackage(*(_DWORD *)SystemInformation);
              if ( updated >= 0 )
                *(_DWORD *)(MmWriteableSharedUserData + 736) = v39;
              return updated;
            }
            return -1073741820;
        }
        if ( SystemInformationClass != SystemHotpatchInformation )
        {
          if ( SystemInformationClass != SystemWatchdogTimerHandler )
            return -1073741821;
          return -1073741637;
        }
        return -1073741637;
      }
      if ( PreviousMode || !SystemInformation || (_DWORD)v3 != 8 )
        return -1073741811;
      if ( !*(_DWORD *)SystemInformation )
        return -1073741637;
      v46 = (unsigned int)(*(_DWORD *)SystemInformation - 1);
      if ( *(_DWORD *)SystemInformation == 1
        || (v46 = (unsigned int)(*(_DWORD *)SystemInformation - 2), *(_DWORD *)SystemInformation == 2)
        || (v46 = (unsigned int)(*(_DWORD *)SystemInformation - 3), *(_DWORD *)SystemInformation == 3) )
      {
        guard_dispatch_icall_no_overrides(2LL, v46);
        return 0;
      }
      switch ( *(_DWORD *)SystemInformation )
      {
        case 4:
          return -1073741637;
        case 6:
          LOBYTE(v11) = 1;
          return guard_dispatch_icall_no_overrides(v11, (unsigned int)(*(_DWORD *)SystemInformation - 6));
        case 7:
          updated = 0;
          if ( off_140E00B38[0] == xKdEnumerateDebuggingDevices )
            return -1073741822;
          return updated;
      }
      return -1073741811;
    }
    if ( SystemInformationClass <= SystemTimeZoneInformation )
    {
      if ( SystemInformationClass != SystemTimeZoneInformation )
      {
        if ( SystemInformationClass <= SystemThreadPriorityClientIdInformation )
        {
          if ( SystemInformationClass != SystemThreadPriorityClientIdInformation )
          {
            if ( SystemInformationClass != SystemWow64SharedInformationObsolete )
            {
              switch ( SystemInformationClass )
              {
                case SystemRegisterFirmwareTableInformationHandler:
                  return ExpRegisterFirmwareTableInformationHandler((__int64)SystemInformation, v3, PreviousMode);
                case SystemSuperfetchInformation:
                  LOBYTE(v8) = PreviousMode;
                  return PfSetSuperfetchInformation(79LL, SystemInformation, (unsigned int)v3, v8);
                case SystemMemoryListInformation:
                  if ( (unsigned int)v3 < 4 )
                    return -1073741820;
                  v120 = 6;
                  if ( PreviousMode )
                    RtlCopyFromUser(&v120, SystemInformation, 4uLL);
                  else
                    RtlCopyVolatileMemory(&v120, SystemInformation, 4uLL);
                  LOBYTE(v48) = PreviousMode;
                  return MmIssueMemoryListCommand(v120, v48, -1LL);
                case SystemFileCacheInformationEx:
LABEL_185:
                  LOBYTE(IsMember) = 0;
                  if ( (unsigned int)v3 < 0x40 )
                    return -1073741820;
                  if ( SystemInformationClass == SystemFileCacheInformation )
                  {
                    v47 = 0;
                  }
                  else
                  {
                    v129 = *((_DWORD *)SystemInformation + 15);
                    v47 = v129;
                    if ( (v129 & 0xFFFFFFF0) != 0 || (v129 & 0xC) == 0xC || (v129 & 3) == 3 )
                      return -1073741584;
                  }
                  if ( SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
                    return MmAdjustWorkingSetSizeEx(
                             *((_QWORD *)SystemInformation + 3),
                             *((_QWORD *)SystemInformation + 4),
                             1LL,
                             1,
                             v47,
                             &IsMember);
                  return -1073741790;
                default:
                  return -1073741821;
              }
            }
            return -1073741822;
          }
          if ( (unsigned int)v3 < 0x18 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
            return -1073741727;
          if ( PreviousMode )
          {
            Buf1 = *(_OWORD *)SystemInformation;
            Src[0] = *((void **)SystemInformation + 2);
            SystemInformation = &Buf1;
          }
          if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) > 0x1E )
            return -1073741811;
          *(_OWORD *)&PrivilegeValue[0].LowPart = *(_OWORD *)SystemInformation;
          updated = PsLookupProcessThreadByCid(PrivilegeValue, 0LL, &v118);
          if ( updated < 0 )
            return updated;
          v50 = (_KPROCESS *)v118;
          if ( (unsigned __int8)*((_DWORD *)v118 + 1) )
          {
            updated = -1073741749;
          }
          else
          {
            KeSetActualBasePriorityThread((__int64)v118, *((unsigned int *)SystemInformation + 4), v49);
            updated = 259;
          }
LABEL_211:
          ObfDereferenceObject(v50);
          return updated;
        }
        v51 = SystemInformationClass - 86;
        if ( !v51 )
          return ObSetRefTraceInformation(SystemInformation, v3);
        v52 = v51 - 1;
        if ( !v52 )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            if ( PreviousMode )
              *(_QWORD *)&Buf1 = RtlReadULong64FromUser(SystemInformation);
            else
              RtlCopyVolatileMemory(&Buf1, SystemInformation, 8uLL);
            MmSpecialPoolTag = Buf1;
            MmSpecialPoolCatchOverruns = BYTE4(Buf1) & 1;
            return updated;
          }
          return -1073741820;
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
                return -1073741584;
              else
                return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
            }
            return -1073741790;
          }
          if ( v54 != 1 )
            return -1073741821;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (_DWORD)v3 != 40 )
            return -1073741820;
          return VfSetVerifierInformationEx(SystemInformation);
        }
        if ( PreviousMode != 1 )
          return -1073741637;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( !Process[1].ReadyTime )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
          v56 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v56 != 332 && v56 != 452 )
            v6 = 0;
          if ( !v6 )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
          return -1073741637;
        }
        return -1073741727;
      }
      v57 = 172;
LABEL_240:
      if ( (_DWORD)v3 != v57 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.ThreadFlags2, PreviousMode) )
        return -1073741727;
      return ExpSetTimeZoneInformation(SystemInformation, v57);
    }
    if ( SystemInformationClass > SystemVirtualAddressInformation )
    {
      v64 = SystemInformationClass - 109;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
          return -1073741822;
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( (_DWORD)v3 != 4 )
            return -1073741820;
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)SystemInformation;
            return 0;
          }
          return -1073741790;
        }
        if ( v66 != 2 )
          return -1073741821;
        return PsSetCpuQuotaInformation(SystemInformation, (unsigned int)v3, PreviousMode);
      }
      else
      {
        LOBYTE(v8) = PreviousMode;
        return SmSetStoreInformation(2LL, SystemInformation, (unsigned int)v3, v8);
      }
    }
    if ( SystemInformationClass == SystemVirtualAddressInformation )
      return -1073741821;
    v58 = SystemInformationClass - 94;
    if ( !v58 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        if ( PreviousMode )
          *(_QWORD *)&Buf1 = RtlReadULong64FromUser(SystemInformation);
        else
          RtlCopyVolatileMemory(&Buf1, SystemInformation, 8uLL);
        _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), Buf1);
        _InterlockedAnd((volatile signed __int32 *)(MmWriteableSharedUserData + 928), ~DWORD1(Buf1));
        return updated;
      }
      return -1073741820;
    }
    v59 = v58 - 1;
    if ( !v59 )
      return -1073741637;
    v60 = v59 - 2;
    if ( v60 )
    {
      v61 = v60 - 5;
      if ( v61 )
      {
        if ( v61 != 2 )
          return -1073741821;
        return ExpSetProcessorMicrocodeUpdateInformation((unsigned int *)SystemInformation, v3, PreviousMode);
      }
      v57 = 432;
      goto LABEL_240;
    }
    if ( (_DWORD)v3 != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      Buf1 = *(_OWORD *)SystemInformation;
      *(_OWORD *)Src = *((_OWORD *)SystemInformation + 1);
      *(_QWORD *)&v139 = *((_QWORD *)SystemInformation + 4);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&Buf1 + 8, 1LL);
      if ( result < 0 )
        return result;
      v62 = VfProbeAndCaptureUnicodeStringBuffer(&Src[1], 1LL);
      if ( v62 < 0 )
      {
        VfFreeCapturedUnicodeString((char *)&Buf1 + 8);
        return v62;
      }
      SystemInformation = &Buf1;
    }
    updated = VfFaultsSetParameters(SystemInformation);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
    p_Buf1 = (char *)SystemInformation + 24;
LABEL_472:
    VfFreeCapturedUnicodeString(p_Buf1);
    return updated;
  }
  if ( SystemInformationClass > SystemCodeIntegrityVerificationInformation )
  {
    if ( SystemInformationClass > SystemCodeIntegrityClearDynamicStores )
    {
      if ( SystemInformationClass <= SystemTrustedAppsRuntimeInformation )
      {
        if ( SystemInformationClass != SystemTrustedAppsRuntimeInformation )
        {
          switch ( SystemInformationClass )
          {
            case SystemDifPoolTrackingInformation:
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741727;
              LOBYTE(v112) = (_DWORD)v3 == 0;
              return VfPtGenerateTraceInformation(v112);
            case SystemDpcWatchdogInformation:
            case SystemDpcWatchdogInformation2:
              LOBYTE(IsMember) = 0;
              if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, (PBOOLEAN)&IsMember) < 0 || !(_BYTE)IsMember )
                return -1073741727;
              return KeUpdateDpcWatchdogConfiguration(
                       SystemInformation,
                       (unsigned int)v3,
                       (unsigned int)SystemInformationClass,
                       v111);
            case SystemIommuStateInformation:
              return PnpIommuBlockUnblockDevice((__int64)SystemInformation, v3);
            case SystemHypervisorBootPagesInformation:
              return HvlQuerySetBootPagesInfo(SystemInformation, v3, PreviousMode, 0LL, 0LL);
            default:
              return -1073741821;
          }
        }
        return -1073741637;
      }
      if ( SystemInformationClass == SystemResourceDeadlockTimeout )
      {
        if ( (_DWORD)v3 != 4 )
          return -1073741820;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          ExResourceTimeoutCount = (*(_DWORD *)SystemInformation + 3999) / 0xFA0u;
          return updated;
        }
        return -1073741727;
      }
      if ( SystemInformationClass == SystemBreakOnContextUnwindFailureInformation )
      {
        if ( (_DWORD)v3 == 4 )
        {
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            if ( PreviousMode )
              v113 = RtlReadULongFromUser((unsigned int *)SystemInformation);
            else
              v113 = *(_DWORD *)SystemInformation;
            LODWORD(Buf1) = v113;
            PspBreakOnContextUnwindFailure = v113;
            return 0;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      if ( SystemInformationClass != SystemCodeIntegrityPolicyManagementInformation )
      {
        if ( SystemInformationClass != SystemRefTraceInformationEx )
          return -1073741821;
        return ObSetRefTraceInformationEx(SystemInformation, v3);
      }
    }
    else if ( SystemInformationClass != SystemCodeIntegrityClearDynamicStores )
    {
      if ( SystemInformationClass <= SystemDifSetRuleClassInformation )
      {
        if ( SystemInformationClass == SystemDifSetRuleClassInformation )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          return VfVolatileSetDifRuleClass(SystemInformation, (unsigned int)v3);
        }
        v103 = SystemInformationClass - 204;
        if ( v103 )
        {
          v104 = v103 - 2;
          if ( !v104 )
          {
            if ( (_DWORD)v3 != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(*(LUID *)((char *)&PspSiloMonitorLock.116 + 4), PreviousMode) )
              return -1073741727;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              *(_QWORD *)&Buf1 = *(_QWORD *)SystemInformation;
              BYTE1(IsMember) = (_BYTE)Buf1 != 0;
              result = ExSetLeapSecondEnabled();
              updated = result;
              if ( result < 0 )
                return result;
              LOBYTE(ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink) = BYTE1(IsMember);
              return updated;
            }
            return -1073741790;
          }
          v105 = v104 - 1;
          if ( v105 )
          {
            v106 = v105 - 3;
            if ( !v106 )
              return CmUpdateFeatureConfiguration(SystemInformation, (unsigned int)v3, PreviousMode);
            if ( v106 != 2 )
              return -1073741821;
            return CmUpdateFeatureUsageSubscription(SystemInformation, (unsigned int)v3, PreviousMode);
          }
          if ( (_DWORD)v3 != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          v123 = 0;
          if ( (*(_DWORD *)SystemInformation & 0x2018) == 0 )
          {
            NtGlobalFlag2 = NtGlobalFlag2 & 0x2018 | *(_DWORD *)SystemInformation;
            *(_DWORD *)SystemInformation = NtGlobalFlag2;
            return updated;
          }
          return -1073741811;
        }
        if ( (unsigned int)v3 < 8 )
          return -1073741820;
        v107 = v3 - 8;
        if ( (v107 & 7) != 0 || v107 > 0x100 )
          return -1073741820;
        if ( PreviousMode )
          v108 = RtlReadULong64FromUser(SystemInformation);
        else
          v108 = *(_QWORD *)SystemInformation;
        PrivilegeValue[0] = (LUID)v108;
        v109 = (char *)SystemInformation + 8;
        if ( PreviousMode )
          RtlCopyFromUser(&Buf1, v109, v107);
        else
          RtlCopyVolatileMemory(&Buf1, v109, v107);
        if ( v108 >= 2 )
          return -1073741811;
        updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( updated < 0 )
          return updated;
        v99 = v107 >> 3;
        v100 = v108;
        return KeModifySystemAllowedCpuSets(v99, (int)&Buf1, v98, v100, Object);
      }
      switch ( SystemInformationClass )
      {
        case SystemDifClearRuleClassInformation:
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          return VfVolatileClearDifRuleClass();
        case SystemDifApplyPluginVerificationOnDriver:
        case SystemDifRemovePluginVerificationOnDriver:
          if ( (_DWORD)v3 != 16 )
            return -1073741820;
          if ( !PreviousMode )
            goto LABEL_464;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(&SystemInformationa, SystemInformation, 1LL);
          if ( result < 0 )
            return result;
          SystemInformation = &SystemInformationa;
          if ( (_WORD)SystemInformationa )
          {
LABEL_464:
            v110 = SystemInformationClass - 219;
            if ( !v110 )
            {
              v38 = VfVolatileApplyDifVerification((__int64)SystemInformation);
              goto LABEL_469;
            }
            if ( v110 == 1 )
            {
              v38 = VfVolatileRemoveDifVerification((const UNICODE_STRING *)SystemInformation);
              goto LABEL_469;
            }
            goto LABEL_466;
          }
          return -1073741585;
        case SystemPoolLimitInformation:
          return ExPoolSetLimit(SystemInformation, v3, PreviousMode);
      }
      if ( SystemInformationClass != SystemCodeIntegrityAddDynamicStore )
        return -1073741821;
    }
LABEL_455:
    if ( SepRmCapTableLock.KernelShadowStackBase )
      return guard_dispatch_icall_no_overrides((unsigned int)SystemInformationClass, (__int64)SystemInformation);
    return -1073741637;
  }
  if ( SystemInformationClass == SystemCodeIntegrityVerificationInformation )
    goto LABEL_455;
  if ( SystemInformationClass <= SystemHypervisorDetailInformation )
  {
    if ( SystemInformationClass == SystemHypervisorDetailInformation )
      return -1073741637;
    if ( SystemInformationClass <= SystemPolicyInformation )
    {
      if ( SystemInformationClass == SystemPolicyInformation )
      {
        if ( (_DWORD)v3 != 32 )
          return -1073741820;
        return sub_140AB7034(2LL, SystemInformation);
      }
      else
      {
        v67 = SystemInformationClass - 127;
        if ( !v67 )
        {
          if ( (_DWORD)v3 == 16 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              v130 = *(_QWORD *)SystemInformation;
              updated = MmScrubMemory(v83, v130, PrivilegeValue);
              Size[0] = updated;
              *((LUID *)SystemInformation + 1) = PrivilegeValue[0];
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v68 = v67 - 2;
        if ( v68 )
        {
          v69 = v68 - 1;
          if ( !v69 )
          {
            v118 = 0LL;
            if ( (((_DWORD)v3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)v3 != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                if ( PreviousMode )
                  RtlCopyFromUser(&Buf1, SystemInformation, v3);
                else
                  RtlCopyVolatileMemory(&Buf1, SystemInformation, v3);
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(
                            ThreadPartition,
                            v80,
                            v81,
                            v82,
                            *(_BYTE *)(v79 + 562),
                            &v118,
                            IsMember);
                Size[0] = updated;
                if ( PreviousMode )
                  RtlWriteULong64ToUser((_QWORD *)SystemInformation + 1, (__int64)v118);
                else
                  *((_QWORD *)SystemInformation + 1) = v118;
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v70 = v69 - 1;
          if ( v70 )
          {
            if ( v70 != 1 )
              return -1073741821;
            if ( (_DWORD)v3 != 4 )
              return -1073741820;
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( PreviousMode )
            {
              v71 = RtlReadULongFromUser((unsigned int *)SystemInformation);
              LODWORD(Buf1) = v71;
            }
            else
            {
              RtlCopyVolatileMemory(&Buf1, SystemInformation, 4uLL);
              LOBYTE(v71) = Buf1;
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
              return -1073741727;
            return ZwUnloadDriver(&DriverServiceName);
          }
          else
          {
            if ( PreviousMode )
              return -1073741790;
            if ( (_DWORD)v3 != 24 )
              return -1073741820;
            return KeInitializeEntropySystem(*(_QWORD *)SystemInformation);
          }
        }
        else
        {
          return KeProcessorProfileControlArea((__int64)SystemInformation, v3, PreviousMode);
        }
      }
    }
    v84 = SystemInformationClass - 142;
    if ( !v84 )
    {
      if ( (_DWORD)v3 == 72 || (_DWORD)v3 == 48 )
      {
        if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
        {
          RtlCopyFromUser(&Buf1, SystemInformation, v3);
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          v94 = Pool2;
          PrivilegeValue[0] = (LUID)Pool2;
          if ( !Pool2 )
            return -1073741670;
          RtlCopyFromUser(Pool2, Src[1], LOWORD(Src[0]));
          Src[1] = v94;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          if ( _InterlockedCompareExchange((volatile signed __int32 *)&CurrentServerSiloGlobals[85].Blink, Buf1, 0) )
          {
            ExFreePoolWithTag(v94, 0x50535845u);
            return 0;
          }
          *(_OWORD *)&CurrentServerSiloGlobals[85].Blink = Buf1;
          *(struct _LIST_ENTRY *)((char *)CurrentServerSiloGlobals + 1384) = *(struct _LIST_ENTRY *)Src;
          *(_OWORD *)&CurrentServerSiloGlobals[87].Blink = v139;
          *(_OWORD *)&CurrentServerSiloGlobals[88].Blink = v140;
          CurrentServerSiloGlobals[89].Blink = v141;
          return 0;
        }
        return -1073741727;
      }
      return -1073741820;
    }
    v85 = v84 - 8;
    if ( !v85 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      return ExpSetBootLoaderMetadata(SystemInformation, (unsigned int)v3, v91, v92);
    }
    v86 = v85 - 1;
    if ( !v86 )
    {
      PrivilegeValue[0] = (LUID)19LL;
      if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
        return -1073741727;
      v88 = v3 - 1;
      if ( v88 )
      {
        if ( v88 != 3 )
          return -1073741820;
        if ( PreviousMode )
          v89 = RtlReadULongFromUser((unsigned int *)SystemInformation);
        else
          v89 = *(_DWORD *)SystemInformation;
        v131 = v89;
      }
      else
      {
        if ( PreviousMode )
          v90 = RtlReadUCharFromUser(SystemInformation);
        else
          v90 = *(_BYTE *)SystemInformation;
        v119 = v90;
        if ( v90 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v89 = v90 != 0 ? 1 : 5;
      }
      return ExpSetSoftRebootFlags(v89);
    }
    v87 = v86 - 1;
    if ( v87 )
    {
      if ( v87 != 3 )
        return -1073741821;
      return CmReconcileAndValidateAllHives(2LL);
    }
    if ( (_DWORD)v3 != 8 )
      return -1073741820;
    if ( PreviousMode )
    {
      v134 = RtlReadULong64FromUser(SystemInformation);
      return ExpQueryElamCertInfo(v134);
    }
    return -1073741811;
  }
  if ( SystemInformationClass > SystemWin32WerStartCallout )
  {
    if ( SystemInformationClass == SystemActivityModerationExeState )
    {
      if ( (_DWORD)v3 != 24 )
        return -1073741820;
      Buf1 = *(_OWORD *)SystemInformation;
      Src[0] = *((void **)SystemInformation + 2);
      result = VfProbeAndCaptureUnicodeStringBuffer(&Buf1, 1LL);
      if ( result < 0 )
        return result;
      updated = PsSetExeModerationState((__int64)&Buf1, (unsigned int)Src[0]);
      p_Buf1 = (char *)&Buf1;
      goto LABEL_472;
    }
    if ( SystemInformationClass != SystemCodeIntegrityUnlockInformation )
    {
      if ( SystemInformationClass == SystemIntegrityQuotaInformation )
      {
        if ( !(_DWORD)v3 )
        {
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          return VslRelaxQuotas();
        }
      }
      else
      {
        if ( SystemInformationClass != SystemSecureDumpEncryptionInformation )
          return -1073741821;
        if ( !(_DWORD)v3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          updated = VslProvisionDumpEncryption();
          if ( updated < 0 )
            return updated;
          return IoProvisionCrashDumpKey();
        }
      }
      return -1073741811;
    }
    goto LABEL_455;
  }
  switch ( SystemInformationClass )
  {
    case SystemWin32WerStartCallout:
      v132 = 0LL;
      v133 = 0LL;
      if ( (_DWORD)v3 != 8 )
      {
        if ( (_DWORD)v3 )
          return -1073741820;
        updated = 0;
        v102 = KeGetCurrentThread()->ApcState.Process;
        Size[0] = PsGetSessionIdEx((__int64)v102);
        if ( Size[0] == -1 )
          return updated;
        v133 = v102;
        return PsInvokeWin32Callout(32LL, &v132, 1LL, Size);
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      if ( PreviousMode )
        v101 = (void *)RtlReadULong64FromUser(SystemInformation);
      else
        v101 = *(void **)SystemInformation;
      v136 = v101;
      PrivilegeValue[0] = 0LL;
      updated = ObReferenceObjectByHandle(
                  v101,
                  0x1000u,
                  (POBJECT_TYPE)PsProcessType,
                  PreviousMode,
                  (PVOID *)PrivilegeValue,
                  0LL);
      if ( updated < 0 )
        return updated;
      v50 = (_KPROCESS *)PrivilegeValue[0];
      Size[0] = PsGetSessionIdEx(*(_QWORD *)PrivilegeValue);
      if ( Size[0] != -1 )
      {
        v133 = v50;
        updated = PsInvokeWin32Callout(32LL, &v132, 1LL, Size);
      }
      goto LABEL_211;
    case SystemVmGenerationCountInformation:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v3 != 8 )
        return -1073741820;
      return KdInitialize(3LL, SystemInformation, &KdpContext);
    case SystemCodeIntegrityPolicyInformation:
      goto LABEL_455;
  }
  if ( SystemInformationClass != SystemAllowedCpuSetsInformation )
  {
    if ( SystemInformationClass == SystemInterruptCpuSetsInformation )
    {
      if ( (_DWORD)v3 != 16 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return -1073741727;
      return KeIntSteerAssignCpuSetForGsiv(
               *(_OWORD *)SystemInformation,
               WORD2(*(_QWORD *)SystemInformation),
               *((_QWORD *)SystemInformation + 1));
    }
    else
    {
      if ( SystemInformationClass != SystemCpuSetTagInformation )
        return -1073741821;
      if ( (unsigned int)v3 < 8 )
        return -1073741820;
      v96 = v3 - 8;
      if ( (v96 & 7) != 0 || v96 > 0x100 )
        return -1073741820;
      v97 = *(struct _LIST_ENTRY **)SystemInformation;
      v135 = *(_QWORD *)SystemInformation;
      memmove(&Buf1, (char *)SystemInformation + 8, v96);
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( updated < 0 )
        return updated;
      return KeSetTagCpuSets(v96 >> 3, (__int64)&Buf1, v97);
    }
  }
  if ( (v3 & 7) != 0 || (unsigned int)v3 > 0x100 )
    return -1073741820;
  if ( PreviousMode )
    RtlCopyFromUser(&Buf1, SystemInformation, v3);
  else
    RtlCopyVolatileMemory(&Buf1, SystemInformation, v3);
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( result >= 0 )
  {
    v99 = (unsigned int)v3 >> 3;
    v100 = 0;
    return KeModifySystemAllowedCpuSets(v99, (int)&Buf1, v98, v100, Object);
  }
  return result;
}
