/*
 * XREFs of VslpLockPagesForTransfer @ 0x1402D3E38
 * Callers:
 *     VslRegisterLogPages @ 0x1402D2200 (VslRegisterLogPages.c)
 *     VslAllocatePool @ 0x1402D2320 (VslAllocatePool.c)
 *     VslTransferSecureImageVersionResource @ 0x1402D2410 (VslTransferSecureImageVersionResource.c)
 *     VslCreateSecureImageSection @ 0x1402D2550 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1402D2650 (VslFillSecureAllocation.c)
 *     VslIumEfiRuntimeService @ 0x1402D2BB0 (VslIumEfiRuntimeService.c)
 *     VslValidateSecureImagePages @ 0x1402D3640 (VslValidateSecureImagePages.c)
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
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402AB660 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x1402D4138 (VslpLockMdlForTransfer.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(
        __int64 a1,
        struct _MDL *a2,
        unsigned int a3,
        LOCK_OPERATION a4,
        unsigned int a5)
{
  LOCK_OPERATION v5; // r11d
  ULONG v6; // r9d
  struct _MDL *v7; // r10
  struct _MDL *Pool2; // rdi
  unsigned int v9; // r14d
  struct _MDL *v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi
  int v17; // r14d
  struct _MDL *Next; // r12
  struct _MDL *v19; // [rsp+28h] [rbp-40h]
  struct _MDL *v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v21 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Pool2 = 0LL;
  v9 = a5;
  if ( (a5 & 0x13) == 0 )
    goto LABEL_2;
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x1FA000 )
  {
    v7 = a2;
LABEL_2:
    v10 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      v11 = 8 * ((v6 + (unsigned __int64)((unsigned __int16)v7 & 0xFFF) + 4095) >> 12) + 48;
      if ( (v9 & 1) != 0 )
        v11 = 4096;
      if ( (v9 & 4) != 0 )
        v11 = (v11 + 4095) & 0xFFFFF000;
      if ( (v9 & 0x20) != 0 )
      {
        Pool2 = 0LL;
      }
      else
      {
        Pool2 = (struct _MDL *)ExAllocatePool2((v9 & 0x20) + 64);
        v6 = v22;
        v7 = v21;
        v5 = a4;
      }
      if ( !Pool2 )
      {
        if ( (v9 & 0x10) == 0 )
        {
          Pool2 = v10;
          v12 = -1073741670;
          goto LABEL_32;
        }
LABEL_24:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = KeAbPreAcquire((__int64)&VslpReservedTransferLock, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&VslpReservedTransferLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&VslpReservedTransferLock, v15, (__int64)&VslpReservedTransferLock);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        Pool2 = (struct _MDL *)VslpReservedTransferMdl;
        v9 |= 0x20u;
        v6 = v22;
        v7 = v21;
        v5 = a4;
      }
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (((((unsigned __int16)v7 & 0xFFF) + 4095LL + (unsigned __int64)v6) >> 12) + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v7 & 0xFFF;
      Pool2->ByteCount = v6;
      if ( (v9 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( v6 )
      {
        MmProbeAndLockPages(Pool2, 0, v5);
      }
      if ( (v9 & 0x10) != 0
        || (Pool2->Next = v10, v10 = Pool2, v19 = Pool2, v7 = Pool2, v21 = Pool2, v6 = v11, v22 = v11, v11 <= 0x1000) )
      {
        v12 = VslpLockMdlForTransfer(a1, Pool2, v9);
        if ( v12 >= 0 )
        {
          *(_DWORD *)(a1 + 64) |= 8u;
          return 0LL;
        }
        if ( (v9 & 0x10) == 0 )
          goto LABEL_32;
        MmUnlockPages(Pool2);
        ExFreePoolWithTag(Pool2, 0);
        v10 = v19;
        goto LABEL_24;
      }
      v5 = a4;
    }
  }
  v12 = -1073741811;
LABEL_32:
  v17 = v9 & 0x20;
  if ( Pool2 )
  {
    do
    {
      Next = Pool2->Next;
      Pool2->Next = 0LL;
      if ( (Pool2->MdlFlags & 2) != 0 )
        MmUnlockPages(Pool2);
      if ( !v17 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = Next;
    }
    while ( Next );
  }
  if ( v17 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
