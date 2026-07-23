/*
 * XREFs of AlpcpUnlockMessage @ 0x140991780
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C3910 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x1407C3C50 (NtAlpcQueryInformationMessage.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     NtAlpcOpenSenderThread @ 0x1408EB720 (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408EC084 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x1408ECAD0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpSendCloseMessage @ 0x1408F0FC8 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcReserveDestroyProcedure @ 0x140A73510 (AlpcReserveDestroyProcedure.c)
 *     AlpcpFlushQueue @ 0x140A878B0 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AAC030 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     NtAlpcCancelMessage @ 0x140ACEE70 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x1407C4C60 (AlpcpAllocateSnapshotMessageLog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rsi
  char v8; // cl
  int v9; // eax
  signed __int64 BugCheckParameter4; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  void *v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v16; // rbp
  struct _LIST_ENTRY *v17; // rcx
  void ***SnapshotMessageLog; // rax
  void ***v19; // rcx
  void **QuantumTarget; // rax
  struct _LIST_ENTRY *Blink; // rax
  void **retaddr; // [rsp+38h] [rbp+0h]

  if ( !AlpcpMessageLogEnabled )
    goto LABEL_11;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&AlpcpMessageLogLock, v5, (__int64)&AlpcpMessageLogLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  if ( AlpcpMessageLogLock.Header.WaitListHead.Flink )
  {
    v14 = &AlpcpMessageLogLock.Header.WaitListHead.Flink[(*(_DWORD *)(BugCheckParameter2 + 264) >> 2) & 0x3FF];
    for ( i = v14->Blink; ; i = i->Blink )
    {
      if ( i == v14 )
        goto LABEL_8;
      if ( HIDWORD(i[1].Blink) && LODWORD(i[1].Blink) == *(_DWORD *)(BugCheckParameter2 + 264) )
        break;
    }
    v16 = i + 2;
    if ( v16->Flink == v16
      || (v17 = i[2].Blink) == 0LL
      || LODWORD(v17[1].Flink) != *(_DWORD *)(BugCheckParameter2 + 40)
      || v17[1].Blink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 24)
      || v17[2].Flink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 16)
      || v17[3].Flink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 32)
      || v17[2].Blink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 64)
      || v17[3].Blink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 104)
      || v17[4].Flink != *(struct _LIST_ENTRY **)(BugCheckParameter2 + 112)
      || memcmp(&v17[5], (const void *)(BugCheckParameter2 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = (void ***)AlpcpAllocateSnapshotMessageLog();
      v19 = SnapshotMessageLog;
      if ( HIDWORD(i[1].Blink) )
      {
        *((_DWORD *)SnapshotMessageLog + 4) = *(_DWORD *)(BugCheckParameter2 + 40);
        SnapshotMessageLog[3] = *(void ***)(BugCheckParameter2 + 24);
        SnapshotMessageLog[4] = *(void ***)(BugCheckParameter2 + 16);
        SnapshotMessageLog[5] = *(void ***)(BugCheckParameter2 + 64);
        SnapshotMessageLog[6] = *(void ***)(BugCheckParameter2 + 32);
        SnapshotMessageLog[7] = *(void ***)(BugCheckParameter2 + 104);
        SnapshotMessageLog[8] = *(void ***)(BugCheckParameter2 + 112);
        SnapshotMessageLog[9] = retaddr;
        *((_DWORD *)SnapshotMessageLog + 5) = 0;
        *((_OWORD *)SnapshotMessageLog + 5) = *(_OWORD *)(BugCheckParameter2 + 240);
        *((_OWORD *)SnapshotMessageLog + 6) = *(_OWORD *)(BugCheckParameter2 + 256);
        SnapshotMessageLog[14] = *(void ***)(BugCheckParameter2 + 272);
        Blink = i[2].Blink;
        if ( Blink->Flink == v16 )
        {
          *v19 = (void **)&v16->Flink;
          v19[1] = (void **)&Blink->Flink;
          Blink->Flink = (struct _LIST_ENTRY *)v19;
          i[2].Blink = (struct _LIST_ENTRY *)v19;
          goto LABEL_8;
        }
      }
      else
      {
        QuantumTarget = (void **)AlpcpMessageLogLock.QuantumTarget;
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.QuantumTarget == (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress )
        {
          *v19 = &AlpcpMessageLogLock.SListFaultAddress;
          v19[1] = QuantumTarget;
          *QuantumTarget = v19;
          AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)v19;
          goto LABEL_8;
        }
      }
      __fastfail(3u);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock);
LABEL_11:
  v8 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v8 & 1) != 0
    && (v9 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v8 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v9 > 0)
    && (BugCheckParameter4 = v9
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v9 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v11 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    guard_dispatch_icall_no_overrides(BugCheckParameter2, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    if ( (int)guard_dispatch_icall_no_overrides(BugCheckParameter2, v12) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v11 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v13 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v11 + 48) )
          guard_dispatch_icall_no_overrides((__int64)v13, (__int64)&AlpcpLookasides);
        else
          ExFreePoolWithTag(v13, *(_DWORD *)(v11 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
