/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x1408EE608
 * Callers:
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1404A2EB0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140535700 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpSetOwnerPortMessage @ 0x1408EEA60 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int v7; // r13d
  __int64 *v8; // r12
  volatile signed __int64 *v9; // rbx
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  __int64 v12; // rbp
  struct _KLOCK_ENTRIES *v13; // r9
  volatile signed __int64 *v15; // rdi
  LegacyAutoBoost *v16; // r14
  signed __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v19; // eax
  __int64 v20; // rcx
  __int64 ProcessJob; // rax
  unsigned int v22; // ebx
  __int64 v23; // [rsp+60h] [rbp+8h]

  v4 = *a1;
  v5 = a1[1];
  v7 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v8 = *(__int64 **)(v4 + 16);
  v23 = v4;
  v9 = v8 - 2;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v8 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v8 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8 - 2, 0, v11, (struct _KTHREAD *)(v8 - 2));
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = *v8;
  if ( *v8 && ObReferenceObjectSafe(*v8) )
  {
    v15 = (volatile signed __int64 *)(v12 + 352);
    v16 = (LegacyAutoBoost *)KeAbPreAcquire(v12 + 352, 0LL, 0LL, v13);
    v17 = 17LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)(v12 + 352), 0, v16, (struct _KTHREAD *)(v12 + 352));
      v17 = 17LL;
    }
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, (void *)0x11);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( (*(_DWORD *)(v12 + 416) & 0x20) != 0 )
    {
      if ( v17 != _InterlockedCompareExchange64(v9, 0LL, v17) )
        ExfReleasePushLockShared(v8 - 2);
      KeAbPostRelease((unsigned __int64)(v8 - 2));
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
      v22 = -1073741769;
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0 && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0 )
    {
      v20 = 0LL;
      if ( (*(_QWORD *)(v12 + 24) & 1) == 0 )
        v20 = *(_QWORD *)(v12 + 24);
      if ( v20 )
      {
        ProcessJob = PsGetProcessJob(v20);
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
          {
            if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8 - 2);
            KeAbPostRelease((unsigned __int64)(v8 - 2));
            if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
            v22 = -1073741770;
LABEL_52:
            KeAbPostRelease(v12 + 352);
            ObfDereferenceObject((PVOID)v12);
            return v22;
          }
        }
      }
    }
    if ( (unsigned __int64)*(unsigned __int16 *)(v5 + 242) > *(_QWORD *)(v12 + 272) )
    {
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 - 2);
      KeAbPostRelease((unsigned __int64)(v8 - 2));
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
      v22 = -1073741789;
      goto LABEL_52;
    }
    if ( (v7 & 0x20000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 - 2);
        KeAbPostRelease((unsigned __int64)(v8 - 2));
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
        v22 = -1073741823;
        goto LABEL_52;
      }
      ++*(_WORD *)(v5 - 30);
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v5);
      ++*(_WORD *)(v5 - 30);
      *(_QWORD *)(v5 + 32) = CurrentThread;
    }
    *(_DWORD *)(v5 + 40) &= ~0x200u;
    *(_WORD *)(v5 + 244) |= 0x2000u;
    v19 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 400));
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_DWORD *)(v5 + 44) = v19;
    AlpcpSetMessageCommunicationInfo(v5, v8);
    *(_QWORD *)(v5 + 192) = v12;
    AlpcpSetOwnerPortMessage(v5, v23);
    a1[4] = v12;
    a1[2] = (__int64)v8;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8 - 2);
  KeAbPostRelease((unsigned __int64)(v8 - 2));
  return 3221225527LL;
}
