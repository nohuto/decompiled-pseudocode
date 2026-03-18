/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1402D45D0
 * Callers:
 *     VslRegisterLogPages @ 0x1402D2200 (VslRegisterLogPages.c)
 *     VslTransferSecureImageVersionResource @ 0x1402D2410 (VslTransferSecureImageVersionResource.c)
 *     VslCreateSecureImageSection @ 0x1402D2550 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1402D2650 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x1402D2BB0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x1402D3640 (VslValidateSecureImagePages.c)
 *     VslFreePoolTransferObject @ 0x1404BA25C (VslFreePoolTransferObject.c)
 *     VslPrepareSecureImageRelocations @ 0x1404C5B20 (VslPrepareSecureImageRelocations.c)
 *     VslFinishStartSecureProcessor @ 0x14058984C (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1405899A4 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14058A05C (VslInitializeSecureProcess.c)
 *     VslQueryActiveSecurePatches @ 0x14058A370 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058A534 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecurePatch @ 0x14058A728 (VslRegisterSecurePatch.c)
 *     VslRetrieveMailbox @ 0x14058AB20 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14058AC4C (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14058AE4C (VslSecurePoolUpdate.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058B6B0 (VslCaptureImageHotPatchMetadata.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058B8C8 (VslInitFunctionOverrideCapabilities.c)
 *     VslCapturePgoData @ 0x1407036F0 (VslCapturePgoData.c)
 *     VslGetOnDemandDebugChallenge @ 0x1407039E8 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x140703B1C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140703BF4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140703CE4 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x140703DE0 (VslObtainHotPatchUndoTable.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140704034 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x1407042F8 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x1407045EC (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x1407047B8 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409C5EB0 (VslDebugReadWriteSecureProcess.c)
 *     VslLoadEnclaveModule @ 0x1409CBF38 (VslLoadEnclaveModule.c)
 *     VslValidateDynamicCodePages @ 0x140A42148 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140A58800 (VslCreateSecureSection.c)
 *     VslCreateEnclave @ 0x140A809DC (VslCreateEnclave.c)
 *     VslCaptureSecureImageIat @ 0x140A9AC50 (VslCaptureSecureImageIat.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
      ExfTryToWakePushLock(&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
