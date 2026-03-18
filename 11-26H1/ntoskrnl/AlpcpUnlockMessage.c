/*
 * XREFs of AlpcpUnlockMessage @ 0x1409C07A0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C08B0 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x1407C0BF0 (NtAlpcQueryInformationMessage.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     NtAlpcOpenSenderThread @ 0x1408E5160 (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408E5AC4 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtSecureConnectPort @ 0x1408E5CC0 (NtSecureConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x1408E6510 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408E7654 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1408E7C0C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpSendCloseMessage @ 0x1408EAA08 (AlpcpSendCloseMessage.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1409BEFC0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1409C0480 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcReserveDestroyProcedure @ 0x140A66540 (AlpcReserveDestroyProcedure.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140A69A60 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140A81A40 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AADF70 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140ACC1E4 (AlpcpReceiveMessagePort.c)
 *     NtAlpcCancelMessage @ 0x140ACCC30 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B6F318 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x1407C1C00 (AlpcpAllocateSnapshotMessageLog.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  unsigned __int64 v14; // rcx
  __int64 i; // rsi
  void *volatile *v16; // rbp
  __int64 v17; // rcx
  void *volatile **SnapshotMessageLog; // rax
  void *volatile **v19; // rcx
  void *volatile *StackBase; // rax
  void *volatile ***v21; // rax
  void *volatile *retaddr; // [rsp+38h] [rbp+0h]

  if ( !LODWORD(AlpcpMessageLogLock.CycleTime) )
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
  if ( AlpcpMessageLogLock.ThreadLock )
  {
    v14 = AlpcpMessageLogLock.ThreadLock + 16LL * ((*(_DWORD *)(BugCheckParameter2 + 264) >> 2) & 0x3FF);
    for ( i = *(_QWORD *)(v14 + 8); ; i = *(_QWORD *)(i + 8) )
    {
      if ( i == v14 )
        goto LABEL_8;
      if ( *(_DWORD *)(i + 28) && *(_DWORD *)(i + 24) == *(_DWORD *)(BugCheckParameter2 + 264) )
        break;
    }
    v16 = (void *volatile *)(i + 32);
    if ( *(void *volatile **)v16 == v16
      || (v17 = *(_QWORD *)(i + 40)) == 0
      || *(_DWORD *)(v17 + 16) != *(_DWORD *)(BugCheckParameter2 + 40)
      || *(_QWORD *)(v17 + 24) != *(_QWORD *)(BugCheckParameter2 + 24)
      || *(_QWORD *)(v17 + 32) != *(_QWORD *)(BugCheckParameter2 + 16)
      || *(_QWORD *)(v17 + 48) != *(_QWORD *)(BugCheckParameter2 + 32)
      || *(_QWORD *)(v17 + 40) != *(_QWORD *)(BugCheckParameter2 + 64)
      || *(_QWORD *)(v17 + 56) != *(_QWORD *)(BugCheckParameter2 + 104)
      || *(_QWORD *)(v17 + 64) != *(_QWORD *)(BugCheckParameter2 + 112)
      || memcmp((const void *)(v17 + 80), (const void *)(BugCheckParameter2 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = (void *volatile **)AlpcpAllocateSnapshotMessageLog();
      v19 = SnapshotMessageLog;
      if ( *(_DWORD *)(i + 28) )
      {
        *((_DWORD *)SnapshotMessageLog + 4) = *(_DWORD *)(BugCheckParameter2 + 40);
        SnapshotMessageLog[3] = *(void *volatile **)(BugCheckParameter2 + 24);
        SnapshotMessageLog[4] = *(void *volatile **)(BugCheckParameter2 + 16);
        SnapshotMessageLog[5] = *(void *volatile **)(BugCheckParameter2 + 64);
        SnapshotMessageLog[6] = *(void *volatile **)(BugCheckParameter2 + 32);
        SnapshotMessageLog[7] = *(void *volatile **)(BugCheckParameter2 + 104);
        SnapshotMessageLog[8] = *(void *volatile **)(BugCheckParameter2 + 112);
        SnapshotMessageLog[9] = retaddr;
        *((_DWORD *)SnapshotMessageLog + 5) = 0;
        *((_OWORD *)SnapshotMessageLog + 5) = *(_OWORD *)(BugCheckParameter2 + 240);
        *((_OWORD *)SnapshotMessageLog + 6) = *(_OWORD *)(BugCheckParameter2 + 256);
        SnapshotMessageLog[14] = *(void *volatile **)(BugCheckParameter2 + 272);
        v21 = *(void *volatile ****)(i + 40);
        if ( *v21 == (void *volatile **)v16 )
        {
          *v19 = v16;
          v19[1] = (void *volatile *)v21;
          *v21 = v19;
          *(_QWORD *)(i + 40) = v19;
          goto LABEL_8;
        }
      }
      else
      {
        StackBase = (void *volatile *)AlpcpMessageLogLock.StackBase;
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackBase == (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit )
        {
          *v19 = &AlpcpMessageLogLock.StackLimit;
          v19[1] = StackBase;
          *StackBase = v19;
          AlpcpMessageLogLock.StackBase = v19;
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
