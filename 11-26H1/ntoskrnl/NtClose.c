/*
 * XREFs of NtClose @ 0x1408F9F30
 * Callers:
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     RtlQueryValidationRunlevel @ 0x14061F6B0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1407202C4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140720514 (_RtlpRemovePendingDeleteLanguages.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     NtCreateProcessStateChange @ 0x1407F1C10 (NtCreateProcessStateChange.c)
 *     RtlInitFunctionalityCache @ 0x140800378 (RtlInitFunctionalityCache.c)
 *     RtlpSysVolTakeOwnership @ 0x14080620C (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140831834 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x14084F1E0 (NtOpenRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x14085CCE4 (CmpInitializeLazyWriters.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140890D7C (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x1408A7A44 (RtlpLoadLanguageConfigList.c)
 *     NtSecureConnectPort @ 0x1408E5CC0 (NtSecureConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x1408E92E0 (AlpcpConnectPort.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     PfpVolumeOpenAndVerify @ 0x1409AF914 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409B2A78 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1409B30E4 (PfSnIsVolumeMounted.c)
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1409B9738 (PfSnGetSectionObject.c)
 *     PnpPrepareDriverLoading @ 0x140A266A4 (PnpPrepareDriverLoading.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A4E874 (PfpSourceGetPrefetchSupport.c)
 *     PfpPrefetchPrivatePages @ 0x140A4EC04 (PfpPrefetchPrivatePages.c)
 *     PfpFileBuildReadSupport @ 0x140A4F6FC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A4FB00 (PfpReadSupportCleanup.c)
 *     PfSnPrefetchMetadata @ 0x140A501C8 (PfSnPrefetchMetadata.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A95BA0 (RtlCreateSystemVolumeInformationFolder.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x140AFDE40 (NtCreateRegistryTransaction.c)
 *     NtCreateThreadStateChange @ 0x140B2A0C0 (NtCreateThreadStateChange.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     sub_140CA83C4 @ 0x140CA83C4 (sub_140CA83C4.c)
 *     CreateSystemRootLink @ 0x140CA9EFC (CreateSystemRootLink.c)
 *     InitSafeBoot @ 0x140CAB540 (InitSafeBoot.c)
 *     FsRtlInitializeSmssEvent @ 0x140CB8CA0 (FsRtlInitializeSmssEvent.c)
 *     IopInitCrashDumpRegCallback @ 0x140CBD560 (IopInitCrashDumpRegCallback.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 *     IopProtectSystemPartition @ 0x140CBF198 (IopProtectSystemPartition.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 *     ExpInitializeCallbacks @ 0x140CE6064 (ExpInitializeCallbacks.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1404444A0 (ObpIsKernelHandle.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140485264 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x140529EA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  __int64 v1; // rdx
  signed __int64 v2; // r8
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // r13
  ULONG_PTR v7; // rbp
  struct _KPROCESS *Process; // r14
  PEPROCESS v9; // r15
  __int64 KernelTime; // rsi
  signed __int64 *v11; // rbx
  NTSTATUS v12; // edi
  ULONG_PTR v14; // rcx
  struct _KLOCK_ENTRIES *v15; // r9
  char v16; // [rsp+80h] [rbp+8h] BYREF
  char v17; // [rsp+88h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) == 0 || PreviousMode || ObpIsKernelHandle((__int64)Handle, 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    v16 = 0;
    v7 = (ULONG_PTR)Handle;
    Process = CurrentThread->ApcState.Process;
    if ( PreviousMode )
      goto LABEL_3;
  }
  else
  {
    VfCheckUserHandle(v14);
    CurrentThread = KeGetCurrentThread();
    v7 = (ULONG_PTR)Handle;
    v16 = 0;
    v6 = 0;
    Process = CurrentThread->ApcState.Process;
  }
  if ( (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL
    && ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    KernelTime = ObpKernelHandleTable;
    v9 = PsInitialSystemProcess;
    v7 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
    goto LABEL_5;
  }
LABEL_3:
  v9 = Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    KernelTime = ObReferenceProcessHandleTable(Process);
    if ( KernelTime )
    {
      v6 = 1;
      goto LABEL_5;
    }
    return -1073741816;
  }
  KernelTime = Process[1].KernelTime;
  if ( KernelTime == ObpKernelHandleTable )
    return -1073741816;
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v7 & 0x3FC) != 0 )
  {
    v11 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v7);
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v2 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v2 )
            goto LABEL_21;
          ExpBlockOnLockedHandleEntry(KernelTime, v11, v2);
        }
      }
      while ( v2 != _InterlockedCompareExchange64(v11, v2 - 1, v2) );
      v12 = ObCloseHandleTableEntry2(KernelTime, v11, v9, v7, PreviousMode, 0, 0LL);
      goto LABEL_10;
    }
  }
LABEL_21:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v1, v2);
  if ( v7 >= 0xFFFFFFFFFFFFFFFAuLL || v7 == 0 )
    goto LABEL_22;
  ExQueryHandleExceptionsPermanency(KernelTime, &v17, &v16, v15);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v16 )
    ExHandleLogBadReference(KernelTime, v7, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ProcessListEntry.Blink
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v7, 1uLL, 0LL, 0LL);
    }
    goto LABEL_22;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].UserTime && !*(_QWORD *)(KernelTime + 96) )
  {
LABEL_22:
    v12 = -1073741816;
    if ( v7 + 6 <= 5 )
      v12 = 0;
    goto LABEL_10;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v12 = -1073741816;
  else
    v12 = KeRaiseUserException(0xC0000008);
LABEL_10:
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v9[1].ProfileListHead.Blink);
  return v12;
}
