/*
 * XREFs of VslpLockPagesForTransfer @ 0x14040FF88
 * Callers:
 *     VslAllocatePool @ 0x14040E558 (VslAllocatePool.c)
 *     VslTransferSecureImageVersionResource @ 0x14040EB30 (VslTransferSecureImageVersionResource.c)
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
 *     MmBuildMdlForNonPagedPool @ 0x14024C4E0 (MmBuildMdlForNonPagedPool.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x14041112C (VslpLockMdlForTransfer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, unsigned int a3, char a4, unsigned int a5)
{
  unsigned int v5; // esi
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // r12
  struct _MDL *v8; // r15
  __int64 v9; // rbp
  struct _MDL *v10; // r13
  unsigned int v11; // r14d
  __int64 Pool2; // rax
  struct _MDL *v13; // rdi
  int v14; // eax
  int v15; // ebp
  int v17; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rdi
  bool v22; // zf
  struct _MDL *Next; // r14
  struct _MDL *v25; // [rsp+68h] [rbp+10h]

  v25 = a2;
  v5 = a5;
  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( (a5 & 0x13) != 0 && ((a3 + 4095LL + ((unsigned __int16)a2 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
  {
    v15 = -1073741811;
    goto LABEL_18;
  }
  v10 = 0LL;
  while ( 1 )
  {
    if ( (v5 & 1) != 0 )
      v11 = 4096;
    else
      v11 = 8 * (((unsigned int)v7 + (unsigned __int64)((unsigned __int16)v8 & 0xFFF) + 4095) >> 12) + 48;
    if ( (v5 & 4) != 0 )
      v11 = (v11 + 4095) & 0xFFFFF000;
    if ( (v5 & 0x20) != 0 )
      break;
    Pool2 = ExAllocatePool2(0x40uLL);
    v6 = 0LL;
    v13 = (struct _MDL *)Pool2;
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      v13->Next = 0LL;
      v13->MdlFlags = 0;
      v13->ByteCount = v7;
      v13->ByteOffset = (unsigned __int16)v8 & 0xFFF;
      v13->Size = 8 * ((((unsigned __int64)((unsigned __int16)v8 & 0xFFF) + v7 + 4095) >> 12) + 6);
      v13->StartVa = (PVOID)((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL);
      if ( (v5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(v13);
        v6 = 0LL;
      }
      else if ( (_DWORD)v7 )
      {
        v14 = MmProbeAndLockPagesEx((__int64)v13, 2LL * (a4 & 3));
        v6 = 0LL;
        v15 = v14;
        if ( v14 < 0 )
        {
          v13->Next = v10;
          goto LABEL_40;
        }
        v9 = a1;
      }
      if ( (v5 & 0x10) == 0 )
      {
        v13->Next = v10;
        v10 = v13;
        v25 = v13;
        v7 = v11;
        if ( v11 > 0x1000 )
          break;
      }
      v15 = VslpLockMdlForTransfer(v9, v13, v5, 0LL);
      if ( v15 >= 0 )
      {
        *(_DWORD *)(a1 + 64) |= 8u;
        return 0LL;
      }
      if ( (v5 & 0x10) == 0 )
        goto LABEL_40;
      MmUnlockPages(v13);
      ExFreePoolWithTag(v13, 0);
      v9 = a1;
      v8 = v25;
LABEL_33:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v19 = (AutoBoost *)KeAbPreAcquire((__int64)&VslpReservedTransferLock, 0LL, 0LL, v6);
      v21 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&VslpReservedTransferLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&VslpReservedTransferLock,
          v19,
          (__int64)&VslpReservedTransferLock);
      v6 = 0LL;
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          AutoBoost::KiAbpPostAcquire(v21, v20);
          v6 = 0LL;
        }
        else
        {
          *((_BYTE *)v21 + 10) = 1;
        }
      }
      v13 = (struct _MDL *)VslpReservedTransferMdl;
      v5 |= 0x20u;
    }
    v8 = v13;
  }
  if ( (v5 & 0x10) != 0 )
    goto LABEL_33;
  v13 = v10;
  v15 = -1073741670;
LABEL_40:
  if ( v13 )
  {
    v17 = v5 & 0x20;
    do
    {
      v22 = (v13->MdlFlags & 2) == 0;
      Next = v13->Next;
      v13->Next = 0LL;
      if ( !v22 )
        MmUnlockPages(v13);
      if ( !v17 )
        ExFreePoolWithTag(v13, 0);
      v13 = Next;
    }
    while ( Next );
    goto LABEL_19;
  }
LABEL_18:
  v17 = v5 & 0x20;
LABEL_19:
  if ( v17 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v15;
}
