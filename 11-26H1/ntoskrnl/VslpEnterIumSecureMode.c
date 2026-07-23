/*
 * XREFs of VslpEnterIumSecureMode @ 0x14036A34C
 * Callers:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     VslFlushEntireTb @ 0x1402532C8 (VslFlushEntireTb.c)
 *     VslFastFlushSecureRangeList @ 0x1402F5A94 (VslFastFlushSecureRangeList.c)
 *     KeKernelShadowStackRestoreContext @ 0x14036A1B0 (KeKernelShadowStackRestoreContext.c)
 *     VslKernelShadowStackAssist @ 0x14036A2A0 (VslKernelShadowStackAssist.c)
 *     VslSetPlaceholderPages @ 0x14036B140 (VslSetPlaceholderPages.c)
 *     VslRegisterLogPages @ 0x14040E040 (VslRegisterLogPages.c)
 *     VslTransferSecureImageVersionResource @ 0x14040E250 (VslTransferSecureImageVersionResource.c)
 *     VslFinishSecureImageValidation @ 0x14040E350 (VslFinishSecureImageValidation.c)
 *     VslPrepareSecureImageRelocations @ 0x14040E4A0 (VslPrepareSecureImageRelocations.c)
 *     VslCreateSecureImageSection @ 0x14040E700 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14040E800 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x14040EEF0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x14040F550 (VslValidateSecureImagePages.c)
 *     VslFinalizeSecureImageHash @ 0x140411260 (VslFinalizeSecureImageHash.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     VslQueryPrivilegedAccessedState @ 0x14045D810 (VslQueryPrivilegedAccessedState.c)
 *     VslSlowFlushSecureRangeList @ 0x14049C100 (VslSlowFlushSecureRangeList.c)
 *     VslFlushSecureAddressSpace @ 0x14049C31C (VslFlushSecureAddressSpace.c)
 *     VslRemoveProtectedPage @ 0x1404AA660 (VslRemoveProtectedPage.c)
 *     VslRegisterProtectedPage @ 0x1404AA6E0 (VslRegisterProtectedPage.c)
 *     VslSetPrivilegedPte @ 0x1404AA75C (VslSetPrivilegedPte.c)
 *     VslMakeProtectedPageExecutable @ 0x1404AA7E4 (VslMakeProtectedPageExecutable.c)
 *     VslApplySecureImageFixups @ 0x1404B2430 (VslApplySecureImageFixups.c)
 *     VslpSecureKernelPeriodicTick @ 0x1404B6B20 (VslpSecureKernelPeriodicTick.c)
 *     VslAccessPciDevice @ 0x1404B7EC0 (VslAccessPciDevice.c)
 *     VslCopyProtectedPage @ 0x1404C3DF0 (VslCopyProtectedPage.c)
 *     VslExemptSecurePteRange @ 0x1404D76E0 (VslExemptSecurePteRange.c)
 *     VslExchangeEntropy @ 0x1404E1C80 (VslExchangeEntropy.c)
 *     VslQueryVirtualMemory @ 0x1404E41F0 (VslQueryVirtualMemory.c)
 *     VslCloseSecureHandle @ 0x1404E7AA0 (VslCloseSecureHandle.c)
 *     VslRelocateImage @ 0x1404EB2E0 (VslRelocateImage.c)
 *     VslCreateSecureAllocation @ 0x1404ECB30 (VslCreateSecureAllocation.c)
 *     VslIsTrustletRunning @ 0x1404ECBB4 (VslIsTrustletRunning.c)
 *     VslFreeSecureImageIat @ 0x1404EE068 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404F37A0 (VslMakeCodeCatalog.c)
 *     VslMapKernelScpPages @ 0x1404F6D68 (VslMapKernelScpPages.c)
 *     PspIumWorker @ 0x1404F8B10 (PspIumWorker.c)
 *     VslStartSecurePageIteration @ 0x1405122B4 (VslStartSecurePageIteration.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140528D00 (VslQuerySecureKernelProfileInformation.c)
 *     HvlPrepareForSecureHibernate @ 0x1405C1CE0 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1405C2B14 (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C49F8 (HvlpEndSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1405C5204 (VslAbortLiveDump.c)
 *     VslApplyHotPatch @ 0x1405C5260 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x1405C5348 (VslConfigureDynamicMemory.c)
 *     VslConfigureSecureAtsDevice @ 0x1405C53E4 (VslConfigureSecureAtsDevice.c)
 *     VslDriverProxyCreateStateFromImage @ 0x1405C5470 (VslDriverProxyCreateStateFromImage.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C54FC (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1405C55EC (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1405C56E8 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1405C583C (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1405C58E0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1405C5980 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x1405C5AA0 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1405C5B20 (VslGetSecureSpeculationControlInformation.c)
 *     VslInitializeSecureKernelCfg @ 0x1405C5C44 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1405C5CD8 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1405C5D68 (VslInitializeSecureProcess.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1405C5E88 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x1405C5F30 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1405C5F98 (VslPrepareDriverForPatch.c)
 *     VslPrepareForCrashdump @ 0x1405C6020 (VslPrepareForCrashdump.c)
 *     sub_1405C6088 @ 0x1405C6088 (sub_1405C6088.c)
 *     VslProvisionDumpEncryption @ 0x1405C6104 (VslProvisionDumpEncryption.c)
 *     VslQueryActiveSecurePatches @ 0x1405C6160 (VslQueryActiveSecurePatches.c)
 *     VslRegisterSecurePatch @ 0x1405C6324 (VslRegisterSecurePatch.c)
 *     VslRegisterSecureSystemProcess @ 0x1405C6414 (VslRegisterSecureSystemProcess.c)
 *     VslReinitializeIumDebuggerTransport @ 0x1405C64A0 (VslReinitializeIumDebuggerTransport.c)
 *     VslReportBugCheckProgress @ 0x1405C6500 (VslReportBugCheckProgress.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x1405C665C (VslRequestSecureKernelDebuggerBreakIn.c)
 *     VslRequestSecureThreadExit @ 0x1405C6718 (VslRequestSecureThreadExit.c)
 *     VslResumeFromCrashdump @ 0x1405C678C (VslResumeFromCrashdump.c)
 *     VslRetrieveMailbox @ 0x1405C67F0 (VslRetrieveMailbox.c)
 *     VslSvcEnterIumSecureMode @ 0x1405C692C (VslSvcEnterIumSecureMode.c)
 *     VslSwapHiberShadowStacks @ 0x1405C6A00 (VslSwapHiberShadowStacks.c)
 *     VslSynchronizeXSave @ 0x1405C6A70 (VslSynchronizeXSave.c)
 *     VslTerminateSecureServices @ 0x1405C6AEC (VslTerminateSecureServices.c)
 *     VslTestRoutine @ 0x1405C6B50 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1405C6BF0 (VslVerifyPage.c)
 *     VslWriteNtPtes @ 0x1405C6C8C (VslWriteNtPtes.c)
 *     VslWriteProtectedPage @ 0x1405C6D10 (VslWriteProtectedPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1405C6DA4 (VslpAddLiveDumpBufferChunk.c)
 *     VslpIumPhase4Initialize @ 0x1405C6E54 (VslpIumPhase4Initialize.c)
 *     VslpKsrEnterIumSecureMode @ 0x1405C6F00 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1405C6FC8 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1405C7054 (VslpSetupLiveDumpBuffer.c)
 *     VslCaptureImageHotPatchMetadata @ 0x1405C7100 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C7218 (VslInitFunctionOverrideCapabilities.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     VslQueryTrustedAppRuntimeInformation @ 0x14077A000 (VslQueryTrustedAppRuntimeInformation.c)
 *     VslAllocateSecureHibernateResources @ 0x140794A70 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x140794B40 (VslCapturePgoData.c)
 *     VslDetermineHotPatchType @ 0x140794C80 (VslDetermineHotPatchType.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140794D2C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140794DF8 (VslFreeSecureHibernateResources.c)
 *     VslInitializeEnclave @ 0x140794E5C (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140794F50 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14079504C (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x1407951E0 (VslQueryRuntimeAttestationReport.c)
 *     VslQuerySecureDevice @ 0x140795400 (VslQuerySecureDevice.c)
 *     VslReclaimPartitionPages @ 0x1407954A4 (VslReclaimPartitionPages.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14079550C (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x1407955EC (VslRelaxQuotas.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14079566C (VslRevokeSyscallProviderServiceTables.c)
 *     VslRundownSecureProcess @ 0x1407956D4 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x14079573C (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1407957D4 (VslStartSecureProcessor.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140795A38 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140795B50 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1407B7F58 (PipUnprotectDevice.c)
 *     PsRegisterSyscallProvider @ 0x1407F2F80 (PsRegisterSyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x14080478C (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     DbgkCopyProcessDebugPort @ 0x1409465C8 (DbgkCopyProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140947620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140947870 (NtRemoveProcessDebug.c)
 *     VslStartSecureThread @ 0x14094BA60 (VslStartSecureThread.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A2C2D8 (VslDebugReadWriteSecureProcess.c)
 *     VslGetSetSecureContext @ 0x140A4DBAC (VslGetSetSecureContext.c)
 *     VslEnableKernelCfgTarget @ 0x140AAFE5C (VslEnableKernelCfgTarget.c)
 *     VslCompleteSecureDriverLoad @ 0x140AC90A8 (VslCompleteSecureDriverLoad.c)
 *     VslUnloadSecureDriver @ 0x140AC9970 (VslUnloadSecureDriver.c)
 *     VslAllocateKernelShadowStack @ 0x140AD19B0 (VslAllocateKernelShadowStack.c)
 *     VslValidateDynamicCodePages @ 0x140AD2F54 (VslValidateDynamicCodePages.c)
 *     VslResetKernelShadowStack @ 0x140AE23BC (VslResetKernelShadowStack.c)
 *     VslFreeKernelShadowStack @ 0x140AE2A1C (VslFreeKernelShadowStack.c)
 *     VslGetSecurePebAddress @ 0x140AF22A4 (VslGetSecurePebAddress.c)
 *     VslCreateSecureSection @ 0x140AFD3C0 (VslCreateSecureSection.c)
 *     VslGetOnDemandDebugChallenge @ 0x140B0C5D4 (VslGetOnDemandDebugChallenge.c)
 *     VslpConnectedStandbyPoCallback @ 0x140B129F0 (VslpConnectedStandbyPoCallback.c)
 *     VslCallEnclave @ 0x140B1C25C (VslCallEnclave.c)
 *     VslDeleteSecureSection @ 0x140B1D360 (VslDeleteSecureSection.c)
 *     VslReserveProtectedPages @ 0x140B1E5DC (VslReserveProtectedPages.c)
 *     VslUpdateFreezeTimeBias @ 0x140B26194 (VslUpdateFreezeTimeBias.c)
 *     VslIsEncryptionKeyAvailable @ 0x140B29000 (VslIsEncryptionKeyAvailable.c)
 *     VslCreateSecureThread @ 0x140B295B8 (VslCreateSecureThread.c)
 *     VslCaptureSecureImageIat @ 0x140B349E0 (VslCaptureSecureImageIat.c)
 *     VslLoadEnclaveModule @ 0x140B3597C (VslLoadEnclaveModule.c)
 *     VslTerminateSecureThread @ 0x140B36A18 (VslTerminateSecureThread.c)
 *     VslIumEtwEnableCallback @ 0x140B3B990 (VslIumEtwEnableCallback.c)
 *     VslCreateEnclave @ 0x140B3BF58 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140B3C0D8 (VslCreateSecureProcess.c)
 *     VslLiveDumpCaptureProcess @ 0x140B49E88 (VslLiveDumpCaptureProcess.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B58300 (VslpConnectedStandbyWnfCallback.c)
 *     VslTransformDumpKey @ 0x140B6CDB4 (VslTransformDumpKey.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140B6D320 (VslDebugProtectSecureProcessMemory.c)
 *     VslApplyDynamicRelocations @ 0x140CBF7A4 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140CBF830 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140CBF9B4 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
 *     PsInitializeSyscallProviders @ 0x140CDDC90 (PsInitializeSyscallProviders.c)
 *     PspInitPhase3 @ 0x140CDE944 (PspInitPhase3.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140D00AEC (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140D04838 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140D05BF4 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     EtwTraceEnterVtl1 @ 0x1404DEF4C (EtwTraceEnterVtl1.c)
 *     EtwTraceExitVtl1 @ 0x1404DFCF4 (EtwTraceExitVtl1.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSwitchToVsmVtl1 @ 0x140727DD0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x140727F40 (VslpDispatchIumSyscall.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  unsigned __int16 v4; // r15
  bool v5; // bp
  unsigned __int8 CurrentIrql; // r13
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // di
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v19; // cl
  unsigned int SecureThreadCookie; // eax
  __int64 v21; // rdx
  NTSTATUS v22; // r14d
  char v23; // r12
  _QWORD *v24; // r9
  char v25; // al
  int v26; // r12d
  __int64 v27; // rdx
  char PreviousMode; // r14
  char v29; // [rsp+30h] [rbp-48h]
  unsigned int CurrentRunTime; // [rsp+34h] [rbp-44h]
  int v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v4 = a1;
  v5 = 0;
  v29 = 0;
  CurrentIrql = 15;
  v9 = 0;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  *(_BYTE *)v12 = v4;
  *(_WORD *)(v12 + 2) = v10;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140FC0C10) & 8) != 0 )
    {
      v14 = 1;
      EtwTraceEnterVtl1(v4, v10, v11);
    }
    else
    {
      v14 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
    if ( v14 )
      EtwTraceExitVtl1(v4, a2, v15);
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !KeAreInterruptsEnabled() && VslVsmEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = 15;
      LOBYTE(v17) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v17, v16);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = KeGetCurrentIrql();
  if ( (_BYTE)v4 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v19 < 2u )
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        v32 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
          v9 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      v32 = 1;
    }
    v5 = CurrentThread->SecureThreadCookie == 0;
  }
  if ( v19 == 1 )
  {
    v5 = 1;
LABEL_34:
    --CurrentThread->KernelApcDisable;
    goto LABEL_35;
  }
  if ( v19 < 2u )
  {
    if ( v5 )
      goto LABEL_34;
  }
  else
  {
    v5 = 0;
  }
LABEL_35:
  if ( !v9 )
    goto LABEL_38;
  v22 = KeWaitForSingleObject((PVOID)&VslpReservedTransferLock.SchedulingGroup, Executive, 0, 0, 0LL);
  if ( v22 < 0 )
    goto LABEL_72;
  v29 = 1;
  while ( 1 )
  {
LABEL_38:
    if ( (BYTE4(xmmword_140FC0C10) & 8) != 0 )
    {
      v23 = 1;
      EtwTraceEnterVtl1(v4, a2, 0LL);
    }
    else
    {
      v23 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
    v24 = (_QWORD *)(a4 + 8);
    v22 = *(_DWORD *)(a4 + 8);
    if ( v23 )
    {
      EtwTraceExitVtl1(v4, a2, 0LL);
      v24 = (_QWORD *)(a4 + 8);
    }
    v25 = *(_BYTE *)(a4 + 1);
    if ( v25 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v25 = *(_BYTE *)(a4 + 1);
    }
    if ( v25 == 6 )
      break;
    if ( v25 == 1 )
      goto LABEL_70;
    if ( (_BYTE)v4 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
      v26 = v32;
    }
    else
    {
      v26 = v32;
      if ( !v32 )
        CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    v27 = *(unsigned __int8 *)(a4 + 1);
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_55:
        PsDispatchIumService(a4, v27, 0LL);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v24 = -1073741776LL;
          break;
        }
LABEL_62:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1412018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( (_BYTE)v27 == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       v24,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v24 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_62;
      case 5:
        goto LABEL_55;
    }
    if ( !v26 && (_BYTE)v4 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
LABEL_70:
  if ( v29 )
    KeReleaseSemaphore((PRKSEMAPHORE)&VslpReservedTransferLock.SchedulingGroup, 0, 1, 0);
LABEL_72:
  if ( v5 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v22;
}
