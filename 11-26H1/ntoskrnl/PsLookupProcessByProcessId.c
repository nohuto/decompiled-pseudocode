/*
 * XREFs of PsLookupProcessByProcessId @ 0x1408EF4E0
 * Callers:
 *     IopLiveDumpAddProcessFilter @ 0x1405CC5E8 (IopLiveDumpAddProcessFilter.c)
 *     PiUEventIsProcessFrozen @ 0x1407A5950 (PiUEventIsProcessFrozen.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14082CB64 (EtwpGetPrivateSessionTraceHandle.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     ExpSnapShotHandleTables @ 0x1408F99A0 (ExpSnapShotHandleTables.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     EtwpProcessThreadImageRundown @ 0x14096E924 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     PfpCopyEvent @ 0x140A06640 (PfpCopyEvent.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A6C4E8 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEnableDisableUMGL @ 0x140A6D758 (EtwpEnableDisableUMGL.c)
 *     PopManageTransitionRecordRequest @ 0x140AE4334 (PopManageTransitionRecordRequest.c)
 *     PopDiagTraceAppPowerMessage @ 0x140AFD550 (PopDiagTraceAppPowerMessage.c)
 *     PfpRpControlRequestUpdate @ 0x140B03054 (PfpRpControlRequestUpdate.c)
 *     PiUEventGetProcessImagePath @ 0x140B0C8D0 (PiUEventGetProcessImagePath.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     CmpDumpOneKeyBody @ 0x140B226C8 (CmpDumpOneKeyBody.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140C34B80 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403F3A50 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x14044C040 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044D280 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140A33080 (ExUnlockHandleTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v4; // rax
  signed __int64 *v5; // rdi
  int v6; // eax
  struct _KPROCESS *HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rbp
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  bool v11; // zf
  __int64 v13; // rdx
  int v14; // ebp
  signed __int64 ExtendedFeatureDisableMask; // rax
  signed __int64 v16; // rtt
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( ((unsigned __int16)ProcessId & 0x3FC) == 0 )
    goto LABEL_9;
  v4 = (signed __int64 *)ExpLookupHandleTableEntry(PspCidTable, ProcessId);
  v5 = v4;
  if ( !v4 )
    goto LABEL_9;
  v6 = ExFastReferenceHandleTableEntry(PspCidTable, v4, v18);
  if ( v6 < 0 )
  {
    if ( v6 == -1 )
    {
      v14 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v5) )
        goto LABEL_9;
      HandlePointer = (struct _KPROCESS *)ExGetHandlePointer(v5);
      if ( (HandlePointer->Header.Type & 0x7F) == 3 )
      {
        if ( (HIDWORD(HandlePointer[1].DirectoryTableBase) & 0x400000C) == 0x4000000 )
          v14 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
        _m_prefetchw(&HandlePointer[-1].ExtendedFeatureDisableMask);
        ExtendedFeatureDisableMask = HandlePointer[-1].ExtendedFeatureDisableMask;
        while ( ExtendedFeatureDisableMask )
        {
          v16 = ExtendedFeatureDisableMask;
          ExtendedFeatureDisableMask = _InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&HandlePointer[-1].ExtendedFeatureDisableMask,
                                         ExtendedFeatureDisableMask + (unsigned int)(v14 + 1),
                                         ExtendedFeatureDisableMask);
          if ( v16 == ExtendedFeatureDisableMask )
            goto LABEL_30;
        }
        *v5 &= 0xFFFFFFFFFFFE0001uLL;
      }
      HandlePointer = 0LL;
LABEL_30:
      ExUnlockHandleTableEntry(PspCidTable, v5);
    }
    else
    {
      HandlePointer = 0LL;
    }
  }
  else
  {
    HandlePointer = (struct _KPROCESS *)ExGetHandlePointer((__int64 *)v18);
    if ( (HandlePointer->Header.Type & 0x7F) != 3 )
    {
      ObDereferenceObjectExWithTag2((ULONG_PTR)HandlePointer, 1, 0x746C6644u, 0);
      goto LABEL_9;
    }
  }
  if ( HandlePointer )
  {
    ObpTraceObjectReferenceIfActive((__int64)&HandlePointer[-1].ExtendedFeatureDisableMask, 1, 0x746C6644u);
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (HandlePointer[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
      _InterlockedOr(v17, 0);
      v13 = *(_QWORD *)&HandlePointer[1].Header.Lock;
      if ( (v13 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)&HandlePointer[1], v13, v9, v10);
      if ( (HandlePointer[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
        goto LABEL_8;
    }
    if ( !PsIsProcessInSilo(HandlePointer, CurrentServerSilo) )
    {
LABEL_8:
      ObfDereferenceObjectWithTag(HandlePointer, 0x746C6644u);
LABEL_9:
      HandlePointer = 0LL;
    }
  }
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)ProcessId, (__int64)Process);
  if ( !HandlePointer )
    return -1073741813;
  *Process = HandlePointer;
  return 0;
}
