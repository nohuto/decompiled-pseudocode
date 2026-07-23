/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x140991E48
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A82078 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (AutoBoost *)KeAbPreAcquire(v4 + 176, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 176), v6, v4 + 176);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 16) != v4 )
    NT_ASSERT("(Message->PortQueue == QueuePort)");
  if ( (*(_BYTE *)(a1 + 40) & 7) != 3 )
    NT_ASSERT("AlpcpGetQueueTypeMessage(Message) == 0x00000003");
  --*(_DWORD *)(v4 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 176));
  KeAbPostRelease(v4 + 176);
  --*(_WORD *)(a1 - 30);
}
