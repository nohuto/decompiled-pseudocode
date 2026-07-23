/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x140B73328
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpSetOwnerPortMessage @ 0x1408EEA60 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140991E48 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140A52BE4 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpLockCommunicationInfoForReply @ 0x140A85B5C (AlpcpLockCommunicationInfoForReply.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140A8B660 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // eax
  __int64 v4; // rbp
  __int64 v5; // rsi
  _KTHREAD **v6; // rax
  _KTHREAD **v7; // r14
  int v8; // r15d
  signed __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  volatile signed __int32 *v14; // r13
  PVOID v15; // rcx
  struct _KLOCK_ENTRIES *v16; // r9
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // r13
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rsi
  int v22; // edx
  __int16 v23; // r8
  __int16 v24; // ax
  __int16 v25; // r8
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KLOCK_ENTRIES *v30; // r9
  LegacyAutoBoost *v31; // r15
  __int64 v32; // rdx
  signed __int32 v33[22]; // [rsp+0h] [rbp-58h] BYREF
  int v34; // [rsp+60h] [rbp+8h]
  PVOID v35; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v35 = 0LL;
  Object = 0LL;
  v34 = v2;
  if ( !v5 )
    NT_ASSERT("AlpcpGetOwnerPortMessage(Message) != ((void *)0)");
  if ( *(_QWORD *)(v1 + 184) != *(_QWORD *)(v4 + 16) && *(_QWORD *)(v1 + 192) != v4 )
    NT_ASSERT(
      "(AlpcpGetMessageCommunicationInfo(Message) == ReplyingPort->CommunicationInfo) || (Message->ConnectionPort == ReplyingPort)");
  v6 = AlpcpLockCommunicationInfoForReply(v5, v4, (_KTHREAD **)&v35, (struct _KLOCK_ENTRIES *)&Object);
  v7 = v6;
  if ( !v6 )
    NT_ASSERT("((void *)0) != CommunicationInfo");
  if ( *(_KTHREAD ***)(v1 + 184) != v6 )
    NT_ASSERT("AlpcpGetMessageCommunicationInfo(Message) == CommunicationInfo");
  if ( *(_KTHREAD **)(v1 + 192) != *v6 )
    NT_ASSERT("Message->ConnectionPort == CommunicationInfo->ConnectionPort");
  if ( (*(_DWORD *)(v4 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v4 + 256), 0xCu)
    || (*(_DWORD *)(v5 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v5 + 256), 0xCu) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6 - 2);
    KeAbPostRelease((unsigned __int64)(v7 - 2));
    v8 = -1073741769;
LABEL_27:
    AlpcpCancelMessage(v4, v1, 0x10000);
    return (unsigned int)v8;
  }
  v9 = (signed __int64 *)v35;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *((_QWORD *)v35 + 34) )
  {
    v14 = (volatile signed __int32 *)Object;
    v15 = v35;
    v35 = Object;
    v8 = AlpcpReferenceReplyTargetPorts((__int64)v15, (signed __int64)Object);
    if ( v8 < 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v7 - 2);
      KeAbPostRelease((unsigned __int64)(v7 - 2));
      goto LABEL_27;
    }
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 6) != 4 )
        NT_ASSERT("AlpcpGetPortType(RequestorPort) == 0x00000002");
      v17 = (AutoBoost *)KeAbPreAcquire(v5 + 352, 0LL, 0LL, v16);
      v19 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 352), v17, v5 + 352);
      if ( v19 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v19, v18);
        else
          *((_BYTE *)v19 + 10) = 1;
      }
      v20 = *(_DWORD *)(v5 + 416);
      if ( (v20 & 8) == 0 )
        NT_ASSERT("RequestorPort->u1.s1.ConnectionPending");
      *(_DWORD *)(v5 + 416) = v20 & 0xFFFFFFF7;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v14 = (volatile signed __int32 *)v35;
    }
    CurrentThread = KeGetCurrentThread();
    v22 = *(_DWORD *)(v1 + 40);
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v23 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v23;
    v24 = v23 | 0x2000;
    *(_WORD *)(v1 + 246) = 0;
    v25 = v23 & 0xDFFF;
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v34 & 0x10000) == 0 )
      v25 = v24;
    v26 = v22 & 0xFFFFFDFF;
    *(_WORD *)(v1 + 244) = v25;
    v27 = v22 | 0x200;
    if ( (v34 & 0x10000) == 0 )
      v27 = v26;
    *(_DWORD *)(v1 + 40) = v27 | 0x10000;
    _InterlockedOr(v33, 0);
    AlpcpClearOwnerPortMessage(v1);
    AlpcpSetOwnerPortMessage(v1, (void *)v4);
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement(v14 + 100);
    *(_QWORD *)(v1 + 120) = *((_QWORD *)v14 + 7);
    ObfDereferenceObject((PVOID)v14);
    if ( *(_QWORD *)(v1 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v1, v28, v29, v30);
    v31 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v9 + 44), 0LL, 0LL, v30);
    v32 = 17LL;
    if ( _InterlockedCompareExchange64(v9 + 44, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9 + 44, 0, v31, (struct _KTHREAD *)(v9 + 44));
    if ( v31 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v31, (void *)v32);
      else
        *((_BYTE *)v31 + 10) = 1;
    }
    if ( (v34 & 0x20000) != 0 )
    {
      if ( *(_QWORD *)(v1 + 32) )
        NT_ASSERT("((void *)0) == Message->WaitingThread");
      *(_DWORD *)(v1 + 40) &= ~0x100u;
      *(_QWORD *)(v1 + 32) = CurrentThread;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        NT_ASSERT("!CurrentThread->KeyedEventInUse");
      if ( HIDWORD(CurrentThread[1].KernelStack) )
        NT_ASSERT("KeReadStateSemaphore(&CurrentThread->AlpcWaitSemaphore) == 0");
      *(_WORD *)(v1 - 30) += 2;
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v1);
    }
    *(_QWORD *)(a1 + 32) = v9;
    *(_QWORD *)(a1 + 16) = v7;
    if ( (*(_BYTE *)(v1 + 160) & 1) != 0 )
      *(_DWORD *)(a1 + 48) |= 8u;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6 - 2);
    KeAbPostRelease((unsigned __int64)(v7 - 2));
    AlpcpUnlockMessage(v1, v10, v11, v12);
    return 3221225507LL;
  }
}
