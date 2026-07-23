/*
 * XREFs of AlpcpDispatchNewMessage @ 0x140990410
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
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1404A2EB0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x140535700 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1409922B4 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  ULONG_PTR v6; // rbx
  __int64 *v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  int v9; // r14d
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 *v13; // rsi
  __int64 *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  void *v17; // rdx
  struct _KLOCK_ENTRIES *v18; // r9
  LegacyAutoBoost *v19; // r13
  void *v20; // rdx
  LegacyAutoBoost *v21; // r13
  __int16 v22; // ax
  int v23; // ecx
  __int16 v24; // ax
  unsigned int v25; // ecx
  int v26; // eax
  __int64 v28; // rcx
  __int64 ProcessJob; // rax
  int v30; // [rsp+60h] [rbp+8h]
  _DWORD *v31; // [rsp+68h] [rbp+10h]

  v4 = *a1;
  v6 = a1[1];
  v30 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v7 = *(__int64 **)(v4 + 16);
  CurrentThread = KeGetCurrentThread();
  v31 = (_DWORD *)v4;
  v9 = (*(_DWORD *)(v4 + 416) >> 1) & 3;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v7 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v7 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7 - 2, 0, v11, (struct _KTHREAD *)(v7 - 2));
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( v9 == 2 )
  {
    v13 = v7 + 1;
  }
  else
  {
    if ( v9 != 1 )
    {
      v14 = v7 + 2;
      v13 = v7 + 2;
      goto LABEL_9;
    }
    v13 = v7;
  }
  v14 = v7;
LABEL_9:
  v15 = *v14;
  v16 = *v13;
  if ( v15 && !ObReferenceObjectSafe(v15) )
    v15 = 0LL;
  if ( v16 && !ObReferenceObjectSafe(v16) )
    v16 = 0LL;
  if ( !v15 || !v16 )
  {
    if ( _InterlockedCompareExchange64(v7 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7 - 2);
    KeAbPostRelease((unsigned __int64)(v7 - 2));
    if ( v15 )
      ObfDereferenceObject((PVOID)v15);
    if ( v16 )
      ObfDereferenceObject((PVOID)v16);
    goto LABEL_49;
  }
  v19 = (LegacyAutoBoost *)KeAbPreAcquire(v15 + 352, 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v15 + 352), 0, v19, (struct _KTHREAD *)(v15 + 352));
  if ( v19 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v19, v17);
    else
      *((_BYTE *)v19 + 10) = 1;
  }
  if ( v16 != v15 )
  {
    v21 = (LegacyAutoBoost *)KeAbPreAcquire(v16 + 352, 0LL, 0LL, v18);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v16 + 352), 0, v21, (struct _KTHREAD *)(v16 + 352));
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v21, v20);
      else
        *((_BYTE *)v21 + 10) = 1;
    }
  }
  if ( (*(_DWORD *)(v15 + 416) & 0x20) != 0 || (*(_DWORD *)(v16 + 416) & 0x20) != 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v15, v16);
LABEL_49:
    AlpcpUnlockMessage(v6);
    return 3221225527LL;
  }
  if ( (v31[104] & 0x20) == 0 || (v31[64] & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
      && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
      && (v28 = *(_QWORD *)(v15 + 24), (v28 & 1) == 0)
      && v28
      && (ProcessJob = PsGetProcessJob(v28)) != 0
      && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v15, v16);
      AlpcpUnlockMessage(v6);
      return 3221225526LL;
    }
    else if ( (*(_DWORD *)(v15 + 256) & 0x20000) != 0 )
    {
      if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) > *(_QWORD *)(v15 + 272) )
      {
        AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v15, v16);
        AlpcpUnlockMessage(v6);
        return 3221225507LL;
      }
      else
      {
        *(_QWORD *)(v6 + 200) = 0LL;
        *(_WORD *)(v6 + 242) = *((_WORD *)a1 + 26);
        *(_WORD *)(v6 + 240) = *((_WORD *)a1 + 26) - 40;
        v22 = *((_WORD *)a1 + 27);
        *(_WORD *)(v6 + 246) = 0;
        v23 = *(_DWORD *)(v6 + 40);
        *(_WORD *)(v6 + 244) = v22;
        *(_OWORD *)(v6 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
        if ( (v30 & 0x10000) != 0 )
        {
          v24 = v22 & 0xDFFF;
          v25 = v23 | 0x200;
        }
        else
        {
          v24 = v22 | 0x2000;
          v25 = v23 & 0xFFFFFDFF;
        }
        *(_DWORD *)(v6 + 40) = v25;
        *(_WORD *)(v6 + 244) = v24;
        PsReferenceSiloContext(v31);
        *(_DWORD *)(v6 + 40) |= 0x1000u;
        *(_QWORD *)(v6 + 24) = v31;
        *(_DWORD *)(v6 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v16 + 400));
        *(_QWORD *)(v6 + 120) = *(_QWORD *)(v16 + 56);
        v26 = *(_DWORD *)(v6 + 40);
        if ( (v26 & 0x40000) != 0 )
        {
          AlpcpDereferenceBlobEx(*(_QWORD *)(v6 + 184));
          *(_DWORD *)(v6 + 40) &= ~0x40000u;
          v26 = *(_DWORD *)(v6 + 40);
          *(_QWORD *)(v6 + 184) = 0LL;
        }
        if ( v7 )
        {
          *(_DWORD *)(v6 + 40) = v26 | 0x40000;
          AlpcpReferenceBlob((ULONG_PTR)v7);
          *(_QWORD *)(v6 + 184) = v7;
        }
        *(_QWORD *)(v6 + 192) = *v7;
        if ( v16 != v15 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 352), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
          KeAbPostRelease(v16 + 352);
        }
        if ( (v30 & 0x20000) != 0 )
        {
          *(_DWORD *)(v6 + 40) &= ~0x100u;
          *(_QWORD *)(v6 + 32) = CurrentThread;
          *(_WORD *)(v6 - 30) += 2;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v6);
        }
        a1[4] = v15;
        a1[2] = (__int64)v7;
        AlpcpCompleteDispatchMessage(a1);
        ObfDereferenceObject((PVOID)v16);
        return 0LL;
      }
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v15, v16);
      AlpcpUnlockMessage(v6);
      return 3221227271LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v15, v16);
    AlpcpUnlockMessage(v6);
    return 3221225527LL;
  }
}
