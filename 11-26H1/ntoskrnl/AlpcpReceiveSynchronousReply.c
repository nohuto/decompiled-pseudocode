/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x140991460
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408EC084 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x140263DA0 (AlpcpSignalAndWait.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpWaitForSingleObject @ 0x14045F3E0 (AlpcpWaitForSingleObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140A53330 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140B4A2DC (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 a1,
        KPROCESSOR_MODE a2,
        ULONG_PTR *a3,
        int a4,
        LARGE_INTEGER *a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // r13
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  ULONG_PTR v14; // rbx
  struct _KLOCK_ENTRIES *v15; // r9
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // r8d
  __int16 v20; // cx
  volatile signed __int64 *v22; // rsi
  void *v23; // rdx
  LegacyAutoBoost *v24; // rbp
  int v25; // ecx

  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)a1;
  v11 = AlpcpSignalAndWait(a1, &CurrentThread[1].KernelStack, WrLpcReply, a2, a5, 1u);
  v14 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( !v14 )
  {
    if ( v11 )
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
  AlpcpLockForCachedReferenceBlob(v14, v10, v12, v13);
  v16 = *(_DWORD *)(v14 + 40);
  if ( (v16 & 0x800) != 0 )
  {
    v16 &= ~0x800u;
    *(_DWORD *)(v14 + 40) = v16;
  }
  --*(_WORD *)(v14 - 30);
  if ( (v16 & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v14 + 32) != CurrentThread )
      goto LABEL_20;
    if ( !v11 )
      v11 = -1073740031;
    goto LABEL_40;
  }
  v16 &= 0xFFFFFFF8;
  *(_DWORD *)(v14 + 40) = v16;
  if ( !v11 )
    goto LABEL_6;
  if ( *(struct _KTHREAD **)(v14 + 32) == CurrentThread )
  {
LABEL_40:
    *(_QWORD *)(v14 + 32) = 0LL;
    --*(_WORD *)(v14 - 30);
    if ( (v16 & 0x80u) != 0 )
      AlpcpUnlockMessage(v14);
    else
      AlpcpCancelMessage(v8, v14, 0LL);
    return v11;
  }
  v11 = 0;
  AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
LABEL_6:
  v17 = *(_DWORD *)(v14 + 40);
  if ( (v17 & 0x80u) != 0 )
  {
LABEL_20:
    AlpcpUnlockMessage(v14);
    return 3221227265LL;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v18 = (*(_QWORD *)(v14 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v14 + 144) )
      v18 = *(_QWORD *)(v14 + 136) != 0LL ? 0x80000000 : 0;
    v19 = v18 | 0x10000000;
    if ( !*(_QWORD *)(v14 + 152) )
      v19 = v18;
    v20 = *(_WORD *)(v14 + 244) | 0x2000;
    if ( (v19 & a4) == 0 )
      v20 = *(_WORD *)(v14 + 244) & 0xDFFF;
    *(_WORD *)(v14 + 244) = v20;
    if ( (v19 & a4) == 0 )
      goto LABEL_15;
  }
  else
  {
    *(_WORD *)(v14 + 244) |= 0x2000u;
  }
  v22 = (volatile signed __int64 *)(v8 + 352);
  v24 = (LegacyAutoBoost *)KeAbPreAcquire(v8 + 352, 0LL, 0LL, v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v24, (struct _KTHREAD *)(v8 + 352));
  if ( v24 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v24, v23);
    else
      *((_BYTE *)v24 + 10) = 1;
  }
  v25 = *(_DWORD *)(v8 + 416);
  if ( (v25 & 0x40) != 0 )
  {
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    AlpcpCancelMessage(v8, v14, 0LL);
    return 3221227264LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
    {
      if ( (*(_DWORD *)(v8 + 256) & 0x1000) == 0 || (v25 & 0x20) == 0 || !*(_QWORD *)(v14 + 32) )
      {
        ++*(_WORD *)(v14 - 30);
        AlpcpInsertMessagePendingQueue(v8, v14);
      }
      if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
LABEL_15:
      if ( LOBYTE(stru_140E66D40.CycleTime) )
        AlpcpLogReceiveMessage(v14);
      *a3 = v14;
      return v11;
    }
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    AlpcpCancelMessage(v8, v14, 0LL);
    return 3221227267LL;
  }
}
