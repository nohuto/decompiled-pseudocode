/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140410294
 * Callers:
 *     VslRegisterLogPages @ 0x14040E040 (VslRegisterLogPages.c)
 *     VslTransferSecureImageVersionResource @ 0x14040E250 (VslTransferSecureImageVersionResource.c)
 *     VslFreePoolTransferObject @ 0x14040E44C (VslFreePoolTransferObject.c)
 *     VslPrepareSecureImageRelocations @ 0x14040E4A0 (VslPrepareSecureImageRelocations.c)
 *     VslCreateSecureImageSection @ 0x14040E700 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14040E800 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x14040EEF0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x14040F550 (VslValidateSecureImagePages.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140528D00 (VslQuerySecureKernelProfileInformation.c)
 *     VslFinishStartSecureProcessor @ 0x1405C55EC (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1405C56E8 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1405C5D68 (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x1405C6160 (VslQueryActiveSecurePatches.c)
 *     VslRegisterSecurePatch @ 0x1405C6324 (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x1405C67F0 (VslRetrieveMailbox.c)
 *     VslCaptureImageHotPatchMetadata @ 0x1405C7100 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C7218 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x140794B40 (VslCapturePgoData.c)
 *     VslInitializeEnclave @ 0x140794E5C (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140794F50 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14079504C (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x1407951E0 (VslQueryRuntimeAttestationReport.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14079550C (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x1407957D4 (VslStartSecureProcessor.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140795A38 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A2C2D8 (VslDebugReadWriteSecureProcess.c)
 *     VslGetSetSecureContext @ 0x140A4DBAC (VslGetSetSecureContext.c)
 *     VslValidateDynamicCodePages @ 0x140AD2F54 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140AFD3C0 (VslCreateSecureSection.c)
 *     VslGetOnDemandDebugChallenge @ 0x140B0C5D4 (VslGetOnDemandDebugChallenge.c)
 *     VslCaptureSecureImageIat @ 0x140B349E0 (VslCaptureSecureImageIat.c)
 *     VslLoadEnclaveModule @ 0x140B3597C (VslLoadEnclaveModule.c)
 *     VslCreateEnclave @ 0x140B3BF58 (VslCreateEnclave.c)
 *     VslTransformDumpKey @ 0x140B6CDB4 (VslTransformDumpKey.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  struct _MDL *v2; // rdi
  struct _MDL *v3; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  if ( ((_DWORD)a1[8] & 8) != 0 )
  {
    v2 = (struct _MDL *)*a1;
    while ( v2 )
    {
      if ( (v2->MdlFlags & 2) != 0 )
        MmUnlockPages(v2);
      v3 = v2;
      v2 = v2->Next;
      if ( ((_DWORD)a1[8] & 0x20) == 0 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  if ( ((_DWORD)a1[8] & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
