/*
 * XREFs of VslpEnterIumSecureMode @ 0x1403685AC
 * Callers:
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 *     VslFlushEntireTb @ 0x140251968 (VslFlushEntireTb.c)
 *     KeKernelShadowStackRestoreContext @ 0x140368410 (KeKernelShadowStackRestoreContext.c)
 *     VslKernelShadowStackAssist @ 0x140368500 (VslKernelShadowStackAssist.c)
 *     VslSetPlaceholderPages @ 0x1403693A0 (VslSetPlaceholderPages.c)
 *     VslFastFlushSecureRangeList @ 0x1403E8BB4 (VslFastFlushSecureRangeList.c)
 *     VslTransferSecureImageVersionResource @ 0x14040EB30 (VslTransferSecureImageVersionResource.c)
 *     VslFinishSecureImageValidation @ 0x14040EC30 (VslFinishSecureImageValidation.c)
 *     VslPrepareSecureImageRelocations @ 0x14040ED80 (VslPrepareSecureImageRelocations.c)
 *     VslCreateSecureImageSection @ 0x14040EFE0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14040F0E0 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x14040F7D0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x14040FE30 (VslValidateSecureImagePages.c)
 *     VslRegisterLogPages @ 0x140411B34 (VslRegisterLogPages.c)
 *     VslFinalizeSecureImageHash @ 0x140411C60 (VslFinalizeSecureImageHash.c)
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     RtlGuardCheckExceptionHandler @ 0x1404570C0 (RtlGuardCheckExceptionHandler.c)
 *     VslQueryPrivilegedAccessedState @ 0x140464850 (VslQueryPrivilegedAccessedState.c)
 *     VslSlowFlushSecureRangeList @ 0x1404A26E0 (VslSlowFlushSecureRangeList.c)
 *     VslFlushSecureAddressSpace @ 0x1404A28FC (VslFlushSecureAddressSpace.c)
 *     VslRemoveProtectedPage @ 0x1404B0FD0 (VslRemoveProtectedPage.c)
 *     VslRegisterProtectedPage @ 0x1404B1050 (VslRegisterProtectedPage.c)
 *     VslSetPrivilegedPte @ 0x1404B10CC (VslSetPrivilegedPte.c)
 *     VslMakeProtectedPageExecutable @ 0x1404B1154 (VslMakeProtectedPageExecutable.c)
 *     VslApplySecureImageFixups @ 0x1404B8C00 (VslApplySecureImageFixups.c)
 *     VslpSecureKernelPeriodicTick @ 0x1404BD340 (VslpSecureKernelPeriodicTick.c)
 *     VslAccessPciDevice @ 0x1404BE670 (VslAccessPciDevice.c)
 *     VslCopyProtectedPage @ 0x1404CA3C0 (VslCopyProtectedPage.c)
 *     VslExemptSecurePteRange @ 0x1404DE000 (VslExemptSecurePteRange.c)
 *     VslExchangeEntropy @ 0x1404E88C0 (VslExchangeEntropy.c)
 *     VslQueryVirtualMemory @ 0x1404EAE40 (VslQueryVirtualMemory.c)
 *     VslCloseSecureHandle @ 0x1404EE4C0 (VslCloseSecureHandle.c)
 *     VslRelocateImage @ 0x1404F1D00 (VslRelocateImage.c)
 *     VslCreateSecureAllocation @ 0x1404F3550 (VslCreateSecureAllocation.c)
 *     VslIsTrustletRunning @ 0x1404F35D4 (VslIsTrustletRunning.c)
 *     VslFreeSecureImageIat @ 0x1404F4A88 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404FA190 (VslMakeCodeCatalog.c)
 *     VslMapKernelScpPages @ 0x1404FD828 (VslMapKernelScpPages.c)
 *     PspIumWorker @ 0x1404FF320 (PspIumWorker.c)
 *     VslStartSecurePageIteration @ 0x140518844 (VslStartSecurePageIteration.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140526690 (VslQuerySecureKernelProfileInformation.c)
 *     HvlPrepareForSecureHibernate @ 0x1405BF470 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1405C02A4 (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C2188 (HvlpEndSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1405C2994 (VslAbortLiveDump.c)
 *     VslApplyHotPatch @ 0x1405C29F0 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x1405C2AD8 (VslConfigureDynamicMemory.c)
 *     VslConfigureSecureAtsDevice @ 0x1405C2B74 (VslConfigureSecureAtsDevice.c)
 *     VslDriverProxyCreateStateFromImage @ 0x1405C2C00 (VslDriverProxyCreateStateFromImage.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C2C8C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1405C2D7C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1405C2E78 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1405C2FCC (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1405C3070 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1405C3110 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x1405C3230 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1405C32B0 (VslGetSecureSpeculationControlInformation.c)
 *     VslInitializeSecureKernelCfg @ 0x1405C33D4 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1405C3468 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1405C34F8 (VslInitializeSecureProcess.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1405C3618 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x1405C36C0 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1405C3728 (VslPrepareDriverForPatch.c)
 *     VslPrepareForCrashdump @ 0x1405C37B0 (VslPrepareForCrashdump.c)
 *     sub_1405C3818 @ 0x1405C3818 (sub_1405C3818.c)
 *     VslProvisionDumpEncryption @ 0x1405C3894 (VslProvisionDumpEncryption.c)
 *     VslQueryActiveSecurePatches @ 0x1405C38F0 (VslQueryActiveSecurePatches.c)
 *     VslRegisterSecurePatch @ 0x1405C3AB4 (VslRegisterSecurePatch.c)
 *     VslRegisterSecureSystemProcess @ 0x1405C3BA4 (VslRegisterSecureSystemProcess.c)
 *     VslReinitializeIumDebuggerTransport @ 0x1405C3C30 (VslReinitializeIumDebuggerTransport.c)
 *     VslReportBugCheckProgress @ 0x1405C3C90 (VslReportBugCheckProgress.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x1405C3DEC (VslRequestSecureKernelDebuggerBreakIn.c)
 *     VslRequestSecureThreadExit @ 0x1405C3EA8 (VslRequestSecureThreadExit.c)
 *     VslResumeFromCrashdump @ 0x1405C3F1C (VslResumeFromCrashdump.c)
 *     VslRetrieveMailbox @ 0x1405C3F80 (VslRetrieveMailbox.c)
 *     VslSvcEnterIumSecureMode @ 0x1405C40BC (VslSvcEnterIumSecureMode.c)
 *     VslSwapHiberShadowStacks @ 0x1405C4190 (VslSwapHiberShadowStacks.c)
 *     VslSynchronizeXSave @ 0x1405C4200 (VslSynchronizeXSave.c)
 *     VslTerminateSecureServices @ 0x1405C427C (VslTerminateSecureServices.c)
 *     VslTestRoutine @ 0x1405C42E0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1405C4380 (VslVerifyPage.c)
 *     VslWriteNtPtes @ 0x1405C441C (VslWriteNtPtes.c)
 *     VslWriteProtectedPage @ 0x1405C44A0 (VslWriteProtectedPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1405C4534 (VslpAddLiveDumpBufferChunk.c)
 *     VslpIumPhase4Initialize @ 0x1405C45E4 (VslpIumPhase4Initialize.c)
 *     VslpKsrEnterIumSecureMode @ 0x1405C4690 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1405C4758 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1405C47E4 (VslpSetupLiveDumpBuffer.c)
 *     VslCaptureImageHotPatchMetadata @ 0x1405C4890 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C49A8 (VslInitFunctionOverrideCapabilities.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     VslQueryTrustedAppRuntimeInformation @ 0x140777158 (VslQueryTrustedAppRuntimeInformation.c)
 *     VslAllocateSecureHibernateResources @ 0x140791F40 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x140792010 (VslCapturePgoData.c)
 *     VslDetermineHotPatchType @ 0x140792150 (VslDetermineHotPatchType.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1407921FC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x1407922C8 (VslFreeSecureHibernateResources.c)
 *     VslInitializeEnclave @ 0x14079232C (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140792420 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14079251C (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x1407926B0 (VslQueryRuntimeAttestationReport.c)
 *     VslQuerySecureDevice @ 0x1407928D0 (VslQuerySecureDevice.c)
 *     VslReclaimPartitionPages @ 0x140792974 (VslReclaimPartitionPages.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1407929DC (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140792ABC (VslRelaxQuotas.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x140792B3C (VslRevokeSyscallProviderServiceTables.c)
 *     VslRundownSecureProcess @ 0x140792BA4 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140792C0C (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140792CA4 (VslStartSecureProcessor.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140792F08 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140793020 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1407B4EF8 (PipUnprotectDevice.c)
 *     PsRegisterSyscallProvider @ 0x1407ED420 (PsRegisterSyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x1407FED5C (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1407FEDC8 (PsTerminateVsmEnclave.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     VslStartSecureThread @ 0x140955D78 (VslStartSecureThread.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     DbgkCopyProcessDebugPort @ 0x1409845B8 (DbgkCopyProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140985620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140985870 (NtRemoveProcessDebug.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A22CB8 (VslDebugReadWriteSecureProcess.c)
 *     VslGetSetSecureContext @ 0x140A32C4C (VslGetSetSecureContext.c)
 *     VslEnableKernelCfgTarget @ 0x140AB2188 (VslEnableKernelCfgTarget.c)
 *     VslCompleteSecureDriverLoad @ 0x140AC74B8 (VslCompleteSecureDriverLoad.c)
 *     VslUnloadSecureDriver @ 0x140AC7D80 (VslUnloadSecureDriver.c)
 *     VslAllocateKernelShadowStack @ 0x140AD4550 (VslAllocateKernelShadowStack.c)
 *     VslValidateDynamicCodePages @ 0x140AD5FA4 (VslValidateDynamicCodePages.c)
 *     VslResetKernelShadowStack @ 0x140AE48AC (VslResetKernelShadowStack.c)
 *     VslFreeKernelShadowStack @ 0x140AE4C64 (VslFreeKernelShadowStack.c)
 *     VslGetSecurePebAddress @ 0x140AEF304 (VslGetSecurePebAddress.c)
 *     VslCreateSecureSection @ 0x140AFB740 (VslCreateSecureSection.c)
 *     VslGetOnDemandDebugChallenge @ 0x140B0AE88 (VslGetOnDemandDebugChallenge.c)
 *     VslpConnectedStandbyPoCallback @ 0x140B10C70 (VslpConnectedStandbyPoCallback.c)
 *     VslCallEnclave @ 0x140B19E0C (VslCallEnclave.c)
 *     VslDeleteSecureSection @ 0x140B1B0B0 (VslDeleteSecureSection.c)
 *     VslReserveProtectedPages @ 0x140B1C3CC (VslReserveProtectedPages.c)
 *     VslUpdateFreezeTimeBias @ 0x140B23D94 (VslUpdateFreezeTimeBias.c)
 *     VslIsEncryptionKeyAvailable @ 0x140B26DA0 (VslIsEncryptionKeyAvailable.c)
 *     VslCreateSecureThread @ 0x140B27928 (VslCreateSecureThread.c)
 *     VslCaptureSecureImageIat @ 0x140B3258C (VslCaptureSecureImageIat.c)
 *     VslLoadEnclaveModule @ 0x140B3352C (VslLoadEnclaveModule.c)
 *     VslTerminateSecureThread @ 0x140B345C8 (VslTerminateSecureThread.c)
 *     VslIumEtwEnableCallback @ 0x140B39780 (VslIumEtwEnableCallback.c)
 *     VslCreateEnclave @ 0x140B39D48 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140B39EC8 (VslCreateSecureProcess.c)
 *     VslLiveDumpCaptureProcess @ 0x140B480F8 (VslLiveDumpCaptureProcess.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B55A60 (VslpConnectedStandbyWnfCallback.c)
 *     VslTransformDumpKey @ 0x140B69E24 (VslTransformDumpKey.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140B6A110 (VslDebugProtectSecureProcessMemory.c)
 *     VslApplyDynamicRelocations @ 0x140CB9764 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140CB97F0 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140CB9974 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140CB9CAC (VslpIumPhase0Initialize.c)
 *     PsInitializeSyscallProviders @ 0x140CD7910 (PsInitializeSyscallProviders.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140CFA528 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140CFA76C (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140CFE498 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140CFF854 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 *     VslRegisterBootDrivers @ 0x140D054B4 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140D06C2C (VslConnectSwInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     HvlQueryVsmConnection @ 0x1404851C8 (HvlQueryVsmConnection.c)
 *     EtwTraceEnterVtl1 @ 0x1404E59AC (EtwTraceEnterVtl1.c)
 *     EtwTraceExitVtl1 @ 0x1404E6754 (EtwTraceExitVtl1.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSwitchToVsmVtl1 @ 0x140723200 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x140723370 (VslpDispatchIumSyscall.c)
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
    if ( (BYTE4(xmmword_140FBFC10) & 8) != 0 )
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
  v22 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v22 < 0 )
    goto LABEL_72;
  v29 = 1;
  while ( 1 )
  {
LABEL_38:
    if ( (BYTE4(xmmword_140FBFC10) & 8) != 0 )
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
    KeReleaseSemaphore(&VslpIumThreadSemaphore, 0, 1, 0);
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
