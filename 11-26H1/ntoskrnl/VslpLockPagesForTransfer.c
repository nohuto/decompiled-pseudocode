/*
 * XREFs of VslpLockPagesForTransfer @ 0x14040F6A8
 * Callers:
 *     VslRegisterLogPages @ 0x14040E040 (VslRegisterLogPages.c)
 *     VslAllocatePool @ 0x14040E164 (VslAllocatePool.c)
 *     VslTransferSecureImageVersionResource @ 0x14040E250 (VslTransferSecureImageVersionResource.c)
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
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x14041084C (VslpLockMdlForTransfer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  struct _MDL *Flink; // rdi
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
    Flink = (struct _MDL *)Pool2;
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      Flink->Next = 0LL;
      Flink->MdlFlags = 0;
      Flink->ByteCount = v7;
      Flink->ByteOffset = (unsigned __int16)v8 & 0xFFF;
      Flink->Size = 8 * ((((unsigned __int64)((unsigned __int16)v8 & 0xFFF) + v7 + 4095) >> 12) + 6);
      Flink->StartVa = (PVOID)((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL);
      if ( (v5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Flink);
        v6 = 0LL;
      }
      else if ( (_DWORD)v7 )
      {
        v14 = MmProbeAndLockPagesEx((__int64)Flink, 2LL * (a4 & 3));
        v6 = 0LL;
        v15 = v14;
        if ( v14 < 0 )
        {
          Flink->Next = v10;
          goto LABEL_40;
        }
        v9 = a1;
      }
      if ( (v5 & 0x10) == 0 )
      {
        Flink->Next = v10;
        v10 = Flink;
        v25 = Flink;
        v7 = v11;
        if ( v11 > 0x1000 )
          break;
      }
      v15 = VslpLockMdlForTransfer(v9, Flink, v5, 0LL);
      if ( v15 >= 0 )
      {
        *(_DWORD *)(a1 + 64) |= 8u;
        return 0LL;
      }
      if ( (v5 & 0x10) == 0 )
        goto LABEL_40;
      MmUnlockPages(Flink);
      ExFreePoolWithTag(Flink, 0);
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
      Flink = (struct _MDL *)VslpReservedTransferLock.Header.WaitListHead.Flink;
      v5 |= 0x20u;
    }
    v8 = Flink;
  }
  if ( (v5 & 0x10) != 0 )
    goto LABEL_33;
  Flink = v10;
  v15 = -1073741670;
LABEL_40:
  if ( Flink )
  {
    v17 = v5 & 0x20;
    do
    {
      v22 = (Flink->MdlFlags & 2) == 0;
      Next = Flink->Next;
      Flink->Next = 0LL;
      if ( !v22 )
        MmUnlockPages(Flink);
      if ( !v17 )
        ExFreePoolWithTag(Flink, 0);
      Flink = Next;
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
