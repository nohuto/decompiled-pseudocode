/*
 * XREFs of AlpcpCancelMessage @ 0x140ACF05C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpFlushQueue @ 0x140A878B0 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AAC030 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcCancelMessage @ 0x140ACEE70 (NtAlpcCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     AlpcpRemoveMessageFromDirectQueue @ 0x1407C3C0C (AlpcpRemoveMessageFromDirectQueue.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407C4F38 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140991E48 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140A52BE4 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140A822E0 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x140A91160 (AlpcpRemoveMessagePort.c)
 *     AlpcpTransferQuotaMessage @ 0x140AAFEC4 (AlpcpTransferQuotaMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x140AFBE60 (AlpcpSignalPortAndUnlock.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v5; // r8
  __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbp
  int v14; // r15d
  int v15; // esi
  signed __int64 *v16; // r14
  void *v17; // rdx
  LegacyAutoBoost *v18; // r12
  void *v19; // rdx
  LegacyAutoBoost *v20; // r12
  int v21; // esi
  int v22; // eax
  __int64 *v23; // r15
  void *v24; // rdx
  LegacyAutoBoost *v25; // r12
  int v26; // eax
  unsigned int v27; // r13d
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  LegacyAutoBoost *v33; // r14
  signed __int64 v34; // r9
  signed __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  volatile signed __int64 *v38; // rsi
  AutoBoost *v39; // rax
  void *v40; // rdx
  AutoBoost *v41; // r14
  AutoBoost *v42; // rax
  void *v43; // rdx
  AutoBoost *v44; // r14
  int v45; // eax
  signed __int32 v47[8]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v48; // [rsp+28h] [rbp-60h]
  unsigned int v49; // [rsp+90h] [rbp+8h]
  __int64 *v50; // [rsp+98h] [rbp+10h]
  __int64 *v51; // [rsp+98h] [rbp+10h]
  int v52; // [rsp+98h] [rbp+10h]
  __int64 v54; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  v4 = a3;
  v5 = 0LL;
  if ( (v3 & 0x80u) == 0 && !*(_QWORD *)(a2 + 24) )
    NT_ASSERT("Message->u1.s1.Canceled || (AlpcpGetOwnerPortMessage(Message) != ((void *)0))");
  if ( (v4 & 0xFFFEFFF0) != 0 )
    NT_ASSERT("(Flags & ~(0x0000000F | 0x00010000)) == 0");
  if ( (v4 & 0x10001) == 0x10001 )
    NT_ASSERT("(Flags & 0x00000001) == 0 || (Flags & 0x00010000) == 0");
  v8 = *(_QWORD *)(a2 + 16);
  v9 = v3 & 7;
  v54 = v8;
  v10 = v3 & 0x80;
  v49 = v3 & 7;
  v11 = 1LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v15 = v3 & 0x78;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v14) = v15 == 16;
      if ( v10 )
        goto LABEL_71;
      v51 = *(__int64 **)(a1 + 16);
      v16 = v51 - 2;
      v20 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v51 - 2), 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
      if ( _InterlockedCompareExchange64(v51 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v16, 0, v20, (struct _KTHREAD *)v16);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v20, v19);
        else
          *((_BYTE *)v20 + 10) = 1;
      }
      if ( a1 != v51[2] )
        NT_ASSERT("PortObject == CommunicationInfo->ClientCommunicationPort");
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
        goto LABEL_40;
      if ( v15 == 16 )
      {
        v12 = *v51;
        v13 = v51[1];
      }
      else
      {
        v12 = a1;
        v13 = a1;
      }
    }
    else
    {
      LOBYTE(v14) = v15 == 8;
      if ( v10 )
        goto LABEL_71;
      v50 = *(__int64 **)(a1 + 16);
      v16 = v50 - 2;
      v18 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v50 - 2), 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
      if ( _InterlockedCompareExchange64(v50 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v16, 0, v18, (struct _KTHREAD *)v16);
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v17);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      if ( a1 != v50[1] )
        NT_ASSERT("PortObject == CommunicationInfo->ServerCommunicationPort");
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
        goto LABEL_40;
      if ( v15 == 8 )
      {
        v12 = v50[2];
        v13 = v12;
      }
      else
      {
        v12 = *v50;
        v13 = v50[1];
      }
    }
    if ( v12 )
      v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
    if ( v13 )
      v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
LABEL_40:
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((unsigned __int64)v16);
LABEL_43:
    v8 = v54;
    v11 = 1LL;
    v9 = v49;
    v4 = a3;
    goto LABEL_71;
  }
  v21 = v3 & 0x78;
  LOBYTE(v14) = v21 == 8;
  v22 = v14;
  v52 = v14;
  if ( !v10 && v8 )
  {
    v23 = *(__int64 **)(a2 + 184);
    if ( v23 )
    {
      v25 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v23 - 2), 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
      if ( _InterlockedCompareExchange64(v23 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v23 - 2, 0, v25, (struct _KTHREAD *)(v23 - 2));
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v24);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      if ( *(_QWORD *)(a2 + 192) != a1 )
        NT_ASSERT("Message->ConnectionPort == PortObject");
      if ( a1 != *v23 )
        NT_ASSERT("PortObject == CommunicationInfo->ConnectionPort");
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v21 == 8 )
        {
          v12 = v23[2];
          v13 = v12;
        }
        else
        {
          v13 = v23[1];
          v12 = *v23;
        }
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        if ( v13 )
          v13 &= -(__int64)(ObReferenceObjectSafe(v13) != 0);
      }
      if ( _InterlockedCompareExchange64(v23 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23 - 2);
      KeAbPostRelease((unsigned __int64)(v23 - 2));
      v14 = v52;
      goto LABEL_43;
    }
    if ( *(_QWORD *)(a2 + 192) )
      NT_ASSERT("Message->ConnectionPort == ((void *)0)");
    v14 = v22;
  }
LABEL_71:
  if ( v14 )
  {
    if ( !v8 )
      goto LABEL_87;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      NT_ASSERT("(Message->PortQueue == CurrentQueuePort)");
    if ( (_DWORD)v9 != 3 || (v28 = 1, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
LABEL_87:
      v28 = 0;
    v27 = 259;
    if ( (v4 & 1) == 0 || v28 )
    {
LABEL_90:
      *(_DWORD *)(a2 + 40) |= 0x80u;
      *(_BYTE *)(a2 + 244) = 12;
      *(_DWORD *)(a2 + 240) = 2621440;
      AlpcpReleaseMessageAttributesOnCancel(a2);
      *(_WORD *)(a2 + 244) &= ~0x2000u;
      *(_DWORD *)(a2 + 40) |= 0x10200u;
      _InterlockedOr(v47, 0);
      AlpcpClearOwnerPortMessage(a2);
      AlpcpTransferQuotaMessage(a2);
      v29 = *(_QWORD *)(a2 + 208);
      if ( v29 )
      {
        PsReleaseProcessWakeCounter(v29);
        *(_QWORD *)(a2 + 208) = 0LL;
      }
      v30 = *(_QWORD *)(a2 + 216);
      if ( v30 )
      {
        PsReleaseProcessWakeCounter(v30);
        *(_QWORD *)(a2 + 216) = 0LL;
      }
      v31 = *(_QWORD *)(a2 + 32);
      if ( v31 )
      {
        v32 = _InterlockedExchange64((volatile __int64 *)(v31 + 1464), 0LL);
        if ( v32 == a2 )
        {
          *(_WORD *)(a2 - 30) -= 2;
          v48 = 0LL;
          *(_QWORD *)(a2 + 32) = 0LL;
          KeReleaseSemaphoreEx(v31 + 1304, 1LL, 1LL, v11, 0, v48);
        }
        else if ( v32 )
        {
          NT_ASSERT("(ThreadMessage == Message) || (ThreadMessage == ((void *)0))");
        }
      }
      else if ( v12 && v13 )
      {
        if ( !v14 && (v4 & 2) == 0 )
        {
LABEL_143:
          if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
          {
            v45 = *(_DWORD *)(a2 + 40) & 7;
            if ( v45 == 3 )
            {
              if ( !v8 )
                NT_ASSERT("((void *)0) != CurrentQueuePort");
              if ( *(_QWORD *)(a2 + 16) != v8 )
                NT_ASSERT("(Message->PortQueue == CurrentQueuePort)");
              AlpcpRemoveMessageFromPendingQueue(a2, v9, v5, (struct _KLOCK_ENTRIES *)v11);
            }
            else if ( v45 )
            {
              NT_ASSERT("(QueueType == 0x00000003) || (QueueType == 0x00000000)");
            }
          }
          goto LABEL_152;
        }
        if ( *(_QWORD *)(a2 + 64) || *(_QWORD *)(a2 + 56) )
          NT_ASSERT("(Message->CancelQueuePort == ((void *)0)) && (Message->CancelSequencePort == ((void *)0))");
        v33 = (LegacyAutoBoost *)KeAbPreAcquire(v12 + 352, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v11);
        v34 = 17LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx((signed __int64 *)(v12 + 352), 0, v33, (struct _KTHREAD *)(v12 + 352));
          v34 = 17LL;
        }
        v35 = 0LL;
        v36 = 1LL;
        if ( v33 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v33, 0LL);
          else
            *((_BYTE *)v33 + 10) = 1;
        }
        if ( (*(_DWORD *)(v12 + 416) & 0x40) != 0 )
        {
          if ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), v35, v34) )
            ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
          KeAbPostRelease(v12 + 352);
        }
        else
        {
          *(_WORD *)(a2 - 30) += v36;
          *(_QWORD *)(a2 + 64) = v12;
          *(_QWORD *)(a2 + 56) = v13;
          *(_DWORD *)(a2 + 72) = v36 + _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 400), v36);
          *(_QWORD *)(a2 + 128) = *(_QWORD *)(v13 + 56);
          AlpcpInsertMessageCanceledQueue(v12, a2, v36, (struct _KLOCK_ENTRIES *)v34);
          AlpcpSignalPortAndUnlock(v12);
        }
        v4 = a3;
      }
      if ( v14 && (v4 & 0x10000) != 0 )
      {
        if ( *(_QWORD *)(a2 + 16) != v8 )
          NT_ASSERT("(Message->PortQueue == CurrentQueuePort)");
        if ( v8 )
        {
          v37 = *(_DWORD *)(a2 + 40) & 7;
          if ( v37 == 3 )
          {
            AlpcpRemoveMessageFromPendingQueue(a2, v9, v5, (struct _KLOCK_ENTRIES *)v11);
          }
          else
          {
            if ( v37 == 4 )
            {
              v38 = (volatile signed __int64 *)(v8 + 200);
              v39 = (AutoBoost *)KeAbPreAcquire(v8 + 200, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v11);
              v41 = v39;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 200), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 200), v39, v8 + 200);
              if ( v41 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v41, v40);
                else
                  *((_BYTE *)v41 + 10) = 1;
              }
              AlpcpRemoveMessageFromDirectQueue(v8, a2);
            }
            else
            {
              v38 = (volatile signed __int64 *)(v8 + 136);
              v42 = (AutoBoost *)KeAbPreAcquire(v8 + 136, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v11);
              v44 = v42;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 136), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 136), v42, v8 + 136);
              if ( v44 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v44, v43);
                else
                  *((_BYTE *)v44 + 10) = 1;
              }
              AlpcpRemoveMessagePort(v8, a2);
            }
            if ( (_InterlockedExchangeAdd64(v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v38);
            KeAbPostRelease((unsigned __int64)v38);
            --*(_WORD *)(a2 - 30);
          }
        }
      }
      goto LABEL_143;
    }
  }
  else
  {
    if ( !v8 )
      goto LABEL_77;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      NT_ASSERT("(Message->PortQueue == CurrentQueuePort)");
    if ( (_DWORD)v9 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
    {
      v26 = 0;
      v27 = 0;
    }
    else
    {
LABEL_77:
      v26 = 1;
      v27 = 1073741870;
    }
    if ( (v4 & 1) == 0 || !v26 )
      goto LABEL_90;
  }
LABEL_152:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2, v9, v5, (struct _KLOCK_ENTRIES *)v11);
  if ( v12 )
    ObfDereferenceObject((PVOID)v12);
  if ( v13 )
    ObfDereferenceObject((PVOID)v13);
  return v27;
}
