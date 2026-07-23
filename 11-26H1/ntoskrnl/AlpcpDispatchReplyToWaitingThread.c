/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     AlpcpLogWaitForReply @ 0x14077D0E0 (AlpcpLogWaitForReply.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409919C8 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140991E48 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpLogSendMessage @ 0x140B4A26C (AlpcpLogSendMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // esi
  void *v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r13
  int v10; // r12d
  int v11; // ecx
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbp
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  struct _KLOCK_ENTRIES *v18; // r9
  int v19; // r15d
  signed __int32 v20; // eax
  int v21; // ecx
  int v22; // r12d
  void *v23; // rdx
  LegacyAutoBoost *v24; // rbp
  __int64 v25; // r9
  LegacyAutoBoost *v27; // rsi
  signed __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  unsigned int v32; // [rsp+90h] [rbp+8h]
  __int16 v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *v35; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(void **)a1;
  v32 = v6;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  LODWORD(v9) = *(_DWORD *)(v4 + 40);
  v34 = *(_QWORD *)(v4 + 32);
  v10 = *(_DWORD *)(v8 + 416) >> 1;
  v33 = v9;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v8 + 272) )
  {
    AlpcpUnlockMessage(v4);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
    v11 = v9;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      v12 = (AutoBoost *)KeAbPreAcquire(v8 + 352, 0LL, 0LL, a4);
      v14 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 352), v12, v8 + 352);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v13);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      *(_DWORD *)(v8 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      v11 = *(_DWORD *)(v4 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v4 + 242) = *(_WORD *)(a1 + 52);
    v35 = CurrentThread;
    *(_WORD *)(v4 + 240) = *(_WORD *)(a1 + 52) - 40;
    v16 = *(_WORD *)(a1 + 54);
    *(_DWORD *)(v4 + 244) = v16;
    *(_OWORD *)(v4 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v6 & 0x10000) != 0 )
    {
      *(_DWORD *)(v4 + 40) = v11 | 0x200;
      v17 = v16 & 0xDFFF;
    }
    else
    {
      *(_DWORD *)(v4 + 40) = v11 & 0xFFFFFDFF;
      v17 = v16 | 0x2000;
    }
    *(_WORD *)(v4 + 244) = v17;
    PsReferenceSiloContext(v7);
    *(_DWORD *)(v4 + 40) |= 0x1000u;
    *(_QWORD *)(v4 + 24) = v7;
    v19 = v6 & 0x20000;
    if ( (v6 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v4);
      *(_DWORD *)(v4 + 40) |= 0x800u;
      ++*(_WORD *)(v4 - 30);
    }
    *(_DWORD *)(v4 + 40) |= 0x100u;
    if ( *(_QWORD *)(v4 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v4);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 40) & 0xFFFFFFF8 | 5;
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 400), 1u);
    v21 = *(_DWORD *)(v4 + 40);
    v22 = v10 & 3;
    *(_DWORD *)(v4 + 44) = v20 + 1;
    *(_DWORD *)(v4 + 40) = (8 * v22) | v21 & 0xFFFFFF87;
    if ( v22 == 1 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v27 = (LegacyAutoBoost *)KeAbPreAcquire(v9 - 16, 0LL, 0LL, v18);
      v28 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 - 16), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)(v9 - 16), 0, v27, (struct _KTHREAD *)(v9 - 16));
        v28 = 17LL;
      }
      if ( v27 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v27, (void *)0x11);
        else
          *((_BYTE *)v27 + 10) = 1;
      }
      v29 = *(_QWORD *)(v9 + 8);
      if ( v29 )
        v30 = *(_QWORD *)(v29 + 56);
      else
        v30 = 0LL;
      *(_QWORD *)(v4 + 120) = v30;
      if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 - 16), 0LL, v28) )
        ExfReleasePushLockShared((signed __int64 *)(v9 - 16));
      KeAbPostRelease(v9 - 16);
      LOWORD(v9) = v33;
    }
    else
    {
      *(_QWORD *)(v4 + 120) = *(_QWORD *)(v8 + 56);
    }
    if ( *(_QWORD *)(v4 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v4);
      *(_QWORD *)(v4 + 176) = 0LL;
    }
    v24 = (LegacyAutoBoost *)KeAbPreAcquire(v8 + 352, 0LL, 0LL, v18);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v24, (struct _KTHREAD *)(v8 + 352));
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    if ( *(_QWORD *)(v4 + 144) )
      AlpcpExposeViewAttributeInSenderContext(v8, v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    if ( LOBYTE(stru_140E66D40.CycleTime) )
      AlpcpLogSendMessage(v4);
    if ( v19 )
    {
      v31 = LOBYTE(stru_140E66D40.CycleTime) == 0;
      *(_QWORD *)(v4 + 32) = v35;
      *(_QWORD *)(a1 + 24) = v34;
      if ( !v31 )
        AlpcpLogWaitForReply(v4);
      AlpcpUnlockMessage(v4);
    }
    else
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      --*(_WORD *)(v4 - 30);
      AlpcpUnlockMessage(v4);
      if ( (v32 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v34;
      else
        KeReleaseSemaphoreEx(v34 + 1304, 1LL, 1LL, v25, (v32 >> 21) & 2, 0LL);
    }
    if ( (v9 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v8);
    return 0LL;
  }
}
