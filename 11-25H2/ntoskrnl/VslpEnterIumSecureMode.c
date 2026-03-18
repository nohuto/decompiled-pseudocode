/*
 * XREFs of VslpEnterIumSecureMode @ 0x140282F50
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     VslKernelShadowStackAssist @ 0x140263EB0 (VslKernelShadowStackAssist.c)
 *     VslFastFlushSecureRangeList @ 0x14026A828 (VslFastFlushSecureRangeList.c)
 *     VslSlowFlushSecureRangeList @ 0x14026AC68 (VslSlowFlushSecureRangeList.c)
 *     VslAccessPciDevice @ 0x1402816B0 (VslAccessPciDevice.c)
 *     HalpPCIConfig @ 0x140282B20 (HalpPCIConfig.c)
 *     VslRemoveProtectedPage @ 0x1402CE210 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1402CF124 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x1402CF254 (VslSetPrivilegedPte.c)
 *     VslRegisterLogPages @ 0x1402D2200 (VslRegisterLogPages.c)
 *     VslTransferSecureImageVersionResource @ 0x1402D2410 (VslTransferSecureImageVersionResource.c)
 *     VslCreateSecureImageSection @ 0x1402D2550 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1402D2650 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1402D2780 (VslFinalizeSecureImageHash.c)
 *     VslIumEfiRuntimeService @ 0x1402D2BB0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x1402D3640 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x1403B7AC4 (VslSetPlaceholderPages.c)
 *     VslQueryPrivilegedAccessedState @ 0x14042BF3C (VslQueryPrivilegedAccessedState.c)
 *     VslApplySecureImageFixups @ 0x14047E680 (VslApplySecureImageFixups.c)
 *     VslpSecureKernelPeriodicTick @ 0x1404823F0 (VslpSecureKernelPeriodicTick.c)
 *     VslCopyProtectedPage @ 0x14048C174 (VslCopyProtectedPage.c)
 *     VslRelocateImage @ 0x1404AEBC0 (VslRelocateImage.c)
 *     VslCloseSecureHandle @ 0x1404B0B10 (VslCloseSecureHandle.c)
 *     VslQueryVirtualMemory @ 0x1404B0B98 (VslQueryVirtualMemory.c)
 *     VslFlushSecureAddressSpace @ 0x1404B12CC (VslFlushSecureAddressSpace.c)
 *     VslFreeSecureImageIat @ 0x1404B1A3C (VslFreeSecureImageIat.c)
 *     VslCreateSecureAllocation @ 0x1404B3A00 (VslCreateSecureAllocation.c)
 *     VslIsTrustletRunning @ 0x1404B4248 (VslIsTrustletRunning.c)
 *     VslMapKernelScpPages @ 0x1404BD964 (VslMapKernelScpPages.c)
 *     VslPrepareSecureImageRelocations @ 0x1404C5B20 (VslPrepareSecureImageRelocations.c)
 *     VslExecuteWorkItems @ 0x1404C7418 (VslExecuteWorkItems.c)
 *     VslExemptSecurePteRange @ 0x1404F531C (VslExemptSecurePteRange.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405842C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1405844B4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140584908 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140585EE0 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x140586B50 (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x140588C50 (HvlpEndSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x140589450 (VslAbortLiveDump.c)
 *     VslApplyHotPatch @ 0x1405894AC (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x140589594 (VslConfigureDynamicMemory.c)
 *     VslConfigureSecureAtsDevice @ 0x140589630 (VslConfigureSecureAtsDevice.c)
 *     VslExchangeEntropy @ 0x1405896C0 (VslExchangeEntropy.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058975C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058984C (VslFinishStartSecureProcessor.c)
 *     VslFlushEntireTb @ 0x140589948 (VslFlushEntireTb.c)
 *     VslGetEtwDebugId @ 0x1405899A4 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x140589AF4 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x140589BA0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x140589C40 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x140589D60 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140589DE0 (VslGetSecureSpeculationControlInformation.c)
 *     VslInitializeSecureKernelCfg @ 0x140589F04 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x140589FCC (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14058A05C (VslInitializeSecureProcess.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14058A17C (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x14058A224 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14058A28C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14058A314 (VslProvisionDumpEncryption.c)
 *     VslQueryActiveSecurePatches @ 0x14058A370 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058A534 (VslQuerySecureKernelProfileInformation.c)
 *     VslReclaimPartitionPages @ 0x14058A644 (VslReclaimPartitionPages.c)
 *     VslRegisterProtectedPage @ 0x14058A6AC (VslRegisterProtectedPage.c)
 *     VslRegisterSecurePatch @ 0x14058A728 (VslRegisterSecurePatch.c)
 *     VslRegisterSecureSystemProcess @ 0x14058A7FC (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14058A8A0 (VslReportBugCheckProgress.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x14058A9F0 (VslRequestSecureKernelDebuggerBreakIn.c)
 *     VslRequestSecureThreadExit @ 0x14058AAA8 (VslRequestSecureThreadExit.c)
 *     VslRetrieveMailbox @ 0x14058AB20 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14058AC4C (VslSecurePoolAllocate.c)
 *     VslSecurePoolDestroy @ 0x14058AD48 (VslSecurePoolDestroy.c)
 *     VslSecurePoolFree @ 0x14058ADB0 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14058AE4C (VslSecurePoolUpdate.c)
 *     VslStartSecurePageIteration @ 0x14058AF50 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14058AFFC (VslSvcEnterIumSecureMode.c)
 *     VslSwapHiberShadowStacks @ 0x14058B0D0 (VslSwapHiberShadowStacks.c)
 *     VslSynchronizeXSave @ 0x14058B140 (VslSynchronizeXSave.c)
 *     VslTestRoutine @ 0x14058B1C0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14058B220 (VslVerifyPage.c)
 *     VslWriteProtectedPage @ 0x14058B2BC (VslWriteProtectedPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058B350 (VslpAddLiveDumpBufferChunk.c)
 *     VslpIumPhase4Initialize @ 0x14058B400 (VslpIumPhase4Initialize.c)
 *     VslpKsrEnterIumSecureMode @ 0x14058B4B0 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14058B578 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14058B604 (VslpSetupLiveDumpBuffer.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058B6B0 (VslCaptureImageHotPatchMetadata.c)
 *     VslFinishSecureImageValidation @ 0x14058B7D0 (VslFinishSecureImageValidation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058B8C8 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14058B990 (VslMakeCodeCatalog.c)
 *     ExpSecurePoolCreate @ 0x14064C6C0 (ExpSecurePoolCreate.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     VslAllocateSecureHibernateResources @ 0x140703628 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x1407036F0 (VslCapturePgoData.c)
 *     VslDetermineHotPatchType @ 0x14070382C (VslDetermineHotPatchType.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1407038D8 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140703984 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x1407039E8 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x140703B1C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140703BF4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140703CE4 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x140703DE0 (VslObtainHotPatchUndoTable.c)
 *     VslQuerySecureDevice @ 0x140703F90 (VslQuerySecureDevice.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140704034 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140704114 (VslRelaxQuotas.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x140704194 (VslRevokeSyscallProviderServiceTables.c)
 *     VslRundownSecureProcess @ 0x1407041FC (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140704264 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1407042F8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140704558 (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x1407045EC (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x1407047B8 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x1407048D0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14072A4DC (PipUnprotectDevice.c)
 *     PsRegisterSyscallProvider @ 0x140761520 (PsRegisterSyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x14076BA28 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14076BA94 (PsTerminateVsmEnclave.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     DbgkCopyProcessDebugPort @ 0x1408F4068 (DbgkCopyProcessDebugPort.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     NtRemoveProcessDebug @ 0x1409BA890 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409BB6C0 (NtDebugActiveProcess.c)
 *     VslGetSecureTebAddress @ 0x1409C3178 (VslGetSecureTebAddress.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409C5EB0 (VslDebugReadWriteSecureProcess.c)
 *     VslLoadEnclaveModule @ 0x1409CBF38 (VslLoadEnclaveModule.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     VslCallEnclave @ 0x140A059FC (VslCallEnclave.c)
 *     VslEnableKernelCfgTarget @ 0x140A31588 (VslEnableKernelCfgTarget.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A366E0 (VslpConnectedStandbyWnfCallback.c)
 *     VslUnloadSecureDriver @ 0x140A3A244 (VslUnloadSecureDriver.c)
 *     VslCompleteSecureDriverLoad @ 0x140A3A358 (VslCompleteSecureDriverLoad.c)
 *     VslAllocateKernelShadowStack @ 0x140A417FC (VslAllocateKernelShadowStack.c)
 *     VslValidateDynamicCodePages @ 0x140A42148 (VslValidateDynamicCodePages.c)
 *     VslFreeKernelShadowStack @ 0x140A4C9CC (VslFreeKernelShadowStack.c)
 *     VslResetKernelShadowStack @ 0x140A4CDB8 (VslResetKernelShadowStack.c)
 *     VslGetSecurePebAddress @ 0x140A5759C (VslGetSecurePebAddress.c)
 *     VslCreateSecureSection @ 0x140A58800 (VslCreateSecureSection.c)
 *     VslDeleteSecureSection @ 0x140A72B00 (VslDeleteSecureSection.c)
 *     VslReserveProtectedPages @ 0x140A769CC (VslReserveProtectedPages.c)
 *     VslCreateEnclave @ 0x140A809DC (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140A80B58 (VslCreateSecureProcess.c)
 *     VslCreateSecureThread @ 0x140A813E0 (VslCreateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140A81A00 (VslpConnectedStandbyPoCallback.c)
 *     VslIsEncryptionKeyAvailable @ 0x140A84954 (VslIsEncryptionKeyAvailable.c)
 *     VslLiveDumpCaptureProcess @ 0x140A87F74 (VslLiveDumpCaptureProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140A8B964 (VslUpdateFreezeTimeBias.c)
 *     VslStartSecureThread @ 0x140A8FF14 (VslStartSecureThread.c)
 *     VslCaptureSecureImageIat @ 0x140A9AC50 (VslCaptureSecureImageIat.c)
 *     VslIumEtwEnableCallback @ 0x140A9C0F0 (VslIumEtwEnableCallback.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140ABBAA0 (VslDebugProtectSecureProcessMemory.c)
 *     VslApplyDynamicRelocations @ 0x140C08890 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140C0891C (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140C08A9C (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140C08DD8 (VslpIumPhase0Initialize.c)
 *     PsInitializeSyscallProviders @ 0x140C23428 (PsInitializeSyscallProviders.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C43F7C (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C441C8 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C44324 (MiApplyRetpolineToBootDriver.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C480EC (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C4944C (MiApplyFunctionOverrideToBootDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     EtwTraceEnterVtl1 @ 0x1404A3B5C (EtwTraceEnterVtl1.c)
 *     EtwTraceExitVtl1 @ 0x1404A57E0 (EtwTraceExitVtl1.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HvlSwitchToVsmVtl1 @ 0x14069AF50 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14069B0C0 (VslpDispatchIumSyscall.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  bool v5; // si
  char v6; // di
  unsigned __int16 v7; // r14
  unsigned __int16 v10; // r15
  unsigned int CurrentRunTime; // ebp
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v13; // al
  int *p_SecureThreadCookie; // rcx
  NTSTATUS v15; // r15d
  char v16; // al
  char v17; // cl
  unsigned __int8 v18; // bl
  char PreviousMode; // di
  __int64 CurrentIrql; // r13
  char v22; // [rsp+30h] [rbp-88h]
  _WORD v24[2]; // [rsp+34h] [rbp-84h] BYREF
  _WORD v25[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-7Ch]
  __int64 v27; // [rsp+40h] [rbp-78h]
  __int64 v28; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-58h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = a1;
  LOBYTE(v4) = 15;
  v22 = 0;
  v27 = v4;
  v10 = a2;
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  *(_BYTE *)a4 = a1;
  *(_WORD *)(a4 + 2) = a2;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v26 = CurrentRunTime;
  if ( a1 > 2u )
  {
    if ( (BYTE4(xmmword_140FC5B10) & 8) != 0 )
    {
      EtwTraceEnterVtl1(a1);
      HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
      EtwTraceExitVtl1(v7, v10);
    }
    else
    {
      HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      v27 = CurrentIrql;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v7 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    p_SecureThreadCookie = (int *)&CurrentThread->SecureThreadCookie;
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v13 < 2u )
    {
      if ( *p_SecureThreadCookie )
      {
        a3 = *p_SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = *p_SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
          v6 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      a3 = 1;
    }
    v5 = *p_SecureThreadCookie == 0;
  }
  if ( v13 == 1 )
  {
    v5 = 1;
LABEL_12:
    --CurrentThread->KernelApcDisable;
    goto LABEL_13;
  }
  if ( v13 >= 2u )
  {
    v5 = 0;
    goto LABEL_13;
  }
  if ( v5 )
    goto LABEL_12;
LABEL_13:
  if ( !v6 )
    goto LABEL_30;
  v15 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v15 >= 0 )
  {
    v22 = 1;
    while ( 1 )
    {
      v10 = a2;
LABEL_30:
      if ( (BYTE4(xmmword_140FC5B10) & 8) != 0 )
      {
        v24[1] = v10;
        v29[0] = v24;
        v24[0] = v7;
        v29[1] = 4LL;
        EtwTraceKernelEvent((int)v29, 1, 0xA0000008, 1353, 5249282);
        HvlSwitchToVsmVtl1(0LL, a4, v26);
        v15 = *(_DWORD *)(a4 + 8);
        v25[1] = a2;
        v25[0] = v7;
        v30[0] = v25;
        v30[1] = 4LL;
        EtwTraceKernelEvent((int)v30, 1, 0xA0000008, 1354, 5249282);
      }
      else
      {
        HvlSwitchToVsmVtl1(0LL, a4, v26);
        v15 = *(_DWORD *)(a4 + 8);
      }
      v16 = *(_BYTE *)(a4 + 1);
      if ( v16 < 0 )
      {
        __debugbreak();
        *(_BYTE *)(a4 + 1) &= ~0x80u;
        v16 = *(_BYTE *)(a4 + 1);
      }
      if ( v16 == 1 )
      {
LABEL_35:
        if ( v22 )
          KeReleaseSemaphoreEx(&VslpIumThreadSemaphore, 8, (__int64)&v28);
        break;
      }
      if ( v16 == 6 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
        __writecr8(0LL);
        goto LABEL_35;
      }
      if ( (_BYTE)v7 == 1 || !a3 )
        CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
      v17 = *(_BYTE *)(a4 + 1);
      if ( v17 != 3 )
      {
        if ( !v17 )
          goto LABEL_54;
        if ( v17 != 2 )
        {
          if ( v17 != 5 )
            goto LABEL_27;
LABEL_54:
          PsDispatchIumService(a4);
          goto LABEL_27;
        }
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          goto LABEL_27;
        }
      }
      if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1412018D0 )
      {
        PreviousMode = CurrentThread->PreviousMode;
        if ( v17 == 3 )
          CurrentThread->PreviousMode = 0;
        *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                     KeServiceDescriptorTable
                                   + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                     a4 + 8,
                                     *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
        CurrentThread->PreviousMode = PreviousMode;
      }
      else
      {
        *(_QWORD *)(a4 + 8) = -1073741796LL;
      }
LABEL_27:
      if ( !a3 && (_BYTE)v7 != 1 )
        CurrentThread->SecureThreadCookie = 0;
      *(_BYTE *)a4 = 0;
      *(_WORD *)(a4 + 2) = 0;
    }
  }
  if ( v5 )
    KeLeaveCriticalRegionThread(CurrentThread);
  v18 = v27;
  if ( (_BYTE)v27 != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v27);
    __writecr8(v18);
  }
  return (unsigned int)v15;
}
