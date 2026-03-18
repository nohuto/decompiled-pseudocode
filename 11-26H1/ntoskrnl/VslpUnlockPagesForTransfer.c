/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140410B74
 * Callers:
 *     VslTransferSecureImageVersionResource @ 0x14040EB30 (VslTransferSecureImageVersionResource.c)
 *     VslFreePoolTransferObject @ 0x14040ED2C (VslFreePoolTransferObject.c)
 *     VslPrepareSecureImageRelocations @ 0x14040ED80 (VslPrepareSecureImageRelocations.c)
 *     VslCreateSecureImageSection @ 0x14040EFE0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14040F0E0 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x14040F7D0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x14040FE30 (VslValidateSecureImagePages.c)
 *     VslRegisterLogPages @ 0x140411B34 (VslRegisterLogPages.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140526690 (VslQuerySecureKernelProfileInformation.c)
 *     VslFinishStartSecureProcessor @ 0x1405C2D7C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1405C2E78 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1405C34F8 (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x1405C38F0 (VslQueryActiveSecurePatches.c)
 *     VslRegisterSecurePatch @ 0x1405C3AB4 (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x1405C3F80 (VslRetrieveMailbox.c)
 *     VslCaptureImageHotPatchMetadata @ 0x1405C4890 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C49A8 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x140792010 (VslCapturePgoData.c)
 *     VslInitializeEnclave @ 0x14079232C (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140792420 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14079251C (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x1407926B0 (VslQueryRuntimeAttestationReport.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1407929DC (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x140792CA4 (VslStartSecureProcessor.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140792F08 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslDebugReadWriteSecureProcess @ 0x140A22CB8 (VslDebugReadWriteSecureProcess.c)
 *     VslGetSetSecureContext @ 0x140A32C4C (VslGetSetSecureContext.c)
 *     VslValidateDynamicCodePages @ 0x140AD5FA4 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140AFB740 (VslCreateSecureSection.c)
 *     VslGetOnDemandDebugChallenge @ 0x140B0AE88 (VslGetOnDemandDebugChallenge.c)
 *     VslCaptureSecureImageIat @ 0x140B3258C (VslCaptureSecureImageIat.c)
 *     VslLoadEnclaveModule @ 0x140B3352C (VslLoadEnclaveModule.c)
 *     VslCreateEnclave @ 0x140B39D48 (VslCreateEnclave.c)
 *     VslTransformDumpKey @ 0x140B69E24 (VslTransformDumpKey.c)
 *     VslRegisterBootDrivers @ 0x140D054B4 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140D06C2C (VslConnectSwInterrupt.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
