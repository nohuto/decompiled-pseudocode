/*
 * XREFs of NtClose @ 0x140929EC0
 * Callers:
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     RtlQueryValidationRunlevel @ 0x140622700 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140725134 (_RtlpRemovePendingDeleteLanguages.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     NtCreateProcessStateChange @ 0x1407F7770 (NtCreateProcessStateChange.c)
 *     RtlInitFunctionalityCache @ 0x140805E18 (RtlInitFunctionalityCache.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x1408554F0 (NtOpenRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x140862FD4 (CmpInitializeLazyWriters.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140897178 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x1408ADEB4 (RtlpLoadLanguageConfigList.c)
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x1408EF8A0 (AlpcpConnectPort.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140983B38 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x1409841A4 (PfSnIsVolumeMounted.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A57B64 (PfpSourceGetPrefetchSupport.c)
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A58DF0 (PfpReadSupportCleanup.c)
 *     PfSnPrefetchMetadata @ 0x140A594B8 (PfSnPrefetchMetadata.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x140AFFEB0 (NtCreateRegistryTransaction.c)
 *     NtCreateThreadStateChange @ 0x140B2C140 (NtCreateThreadStateChange.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     sub_140CAE3C4 @ 0x140CAE3C4 (sub_140CAE3C4.c)
 *     CreateSystemRootLink @ 0x140CAFEFC (CreateSystemRootLink.c)
 *     InitSafeBoot @ 0x140CB1580 (InitSafeBoot.c)
 *     FsRtlInitializeSmssEvent @ 0x140CBECE4 (FsRtlInitializeSmssEvent.c)
 *     IopInitCrashDumpRegCallback @ 0x140CC3630 (IopInitCrashDumpRegCallback.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
 *     IopProtectSystemPartition @ 0x140CC5268 (IopProtectSystemPartition.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 *     ExpInitializeCallbacks @ 0x140CEC404 (ExpInitializeCallbacks.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x14043CFB0 (ObpIsKernelHandle.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14047EBD4 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x14052C3C0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r13
  ULONG_PTR v5; // rbp
  struct _KPROCESS *Process; // r14
  PEPROCESS v7; // r15
  __int64 KernelTime; // rsi
  signed __int64 *v9; // rbx
  signed __int64 v10; // r8
  NTSTATUS v11; // edi
  ULONG_PTR v13; // rcx
  struct _KLOCK_ENTRIES *v14; // r9
  char v15; // [rsp+80h] [rbp+8h] BYREF
  char v16; // [rsp+88h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) == 0 || PreviousMode || ObpIsKernelHandle((__int64)Handle, 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    v15 = 0;
    v5 = (ULONG_PTR)Handle;
    Process = CurrentThread->ApcState.Process;
    if ( PreviousMode )
      goto LABEL_3;
  }
  else
  {
    VfCheckUserHandle(v13);
    CurrentThread = KeGetCurrentThread();
    v5 = (ULONG_PTR)Handle;
    v15 = 0;
    v4 = 0;
    Process = CurrentThread->ApcState.Process;
  }
  if ( (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL
    && ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    KernelTime = ObpKernelHandleTable;
    v7 = PsInitialSystemProcess;
    v5 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
    goto LABEL_5;
  }
LABEL_3:
  v7 = Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    KernelTime = ObReferenceProcessHandleTable(Process);
    if ( KernelTime )
    {
      v4 = 1;
      goto LABEL_5;
    }
    return -1073741816;
  }
  KernelTime = Process[1].KernelTime;
  if ( KernelTime == ObpKernelHandleTable )
    return -1073741816;
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 0x3FC) != 0 )
  {
    v9 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v5);
    if ( v9 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v9);
          v10 = *v9;
          if ( (*v9 & 1) != 0 )
            break;
          if ( !v10 )
            goto LABEL_21;
          ExpBlockOnLockedHandleEntry(KernelTime, v9, v10);
        }
      }
      while ( v10 != _InterlockedCompareExchange64(v9, v10 - 1, v10) );
      v11 = ObCloseHandleTableEntry2(KernelTime, v9, v7, v5, PreviousMode, 0, 0LL);
      goto LABEL_10;
    }
  }
LABEL_21:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v5 >= 0xFFFFFFFFFFFFFFFAuLL || v5 == 0 )
    goto LABEL_22;
  ExQueryHandleExceptionsPermanency(KernelTime, &v16, &v15, v14);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v15 )
    ExHandleLogBadReference(KernelTime, v5, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ProcessListEntry.Blink
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v5, 1uLL, 0LL, 0LL);
    }
    goto LABEL_22;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].UserTime && !*(_QWORD *)(KernelTime + 96) )
  {
LABEL_22:
    v11 = -1073741816;
    if ( v5 + 6 <= 5 )
      v11 = 0;
    goto LABEL_10;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v11 = -1073741816;
  else
    v11 = KeRaiseUserException(0xC0000008);
LABEL_10:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v7[1].ProfileListHead.Blink);
  return v11;
}
