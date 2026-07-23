/*
 * XREFs of PsLookupProcessByProcessId @ 0x1408F5AA0
 * Callers:
 *     IopLiveDumpAddProcessFilter @ 0x1405CEDF8 (IopLiveDumpAddProcessFilter.c)
 *     PiUEventIsProcessFrozen @ 0x1407A8508 (PiUEventIsProcessFrozen.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x140832DA4 (EtwpGetPrivateSessionTraceHandle.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     ExpSnapShotHandleTables @ 0x140929930 (ExpSnapShotHandleTables.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     EtwpProcessThreadImageRundown @ 0x1409BBF74 (EtwpProcessThreadImageRundown.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     PfpCopyEvent @ 0x1409F1E30 (PfpCopyEvent.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 *     EtwpEnableDisableUMGL @ 0x140A99A14 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 *     PopManageTransitionRecordRequest @ 0x140AE1E44 (PopManageTransitionRecordRequest.c)
 *     PopDiagTraceAppPowerMessage @ 0x140AFF0C0 (PopDiagTraceAppPowerMessage.c)
 *     PfpRpControlRequestUpdate @ 0x140B04C68 (PfpRpControlRequestUpdate.c)
 *     PiUEventGetProcessImagePath @ 0x140B0E020 (PiUEventGetProcessImagePath.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     CmpDumpOneKeyBody @ 0x140B24AC8 (CmpDumpOneKeyBody.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140C3AB90 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403ED400 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
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
  if ( v11 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)ProcessId, (__int64)Process);
  if ( !HandlePointer )
    return -1073741813;
  *Process = HandlePointer;
  return 0;
}
