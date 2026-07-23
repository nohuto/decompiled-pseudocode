/*
 * XREFs of FsRtlUninitializeOplock @ 0x1403FAC10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rdi
  _QWORD *v2; // rax
  char *v3; // rbx
  _QWORD *v4; // rcx
  char *v5; // rax
  char *v6; // rbx
  PVOID *v7; // rbx
  PFAST_MUTEX v8; // rsi
  __int64 v9; // rbx
  void *v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // r9
  __int64 **v13; // rax
  char *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  void *v19; // rcx

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = v1 + 88;
      v3 = (char *)*((_QWORD *)v1 + 11);
      if ( v3 == v1 + 88 )
        break;
      v17 = *(_QWORD *)v3;
      if ( *((_QWORD **)v3 + 1) != v2 || *(char **)(v17 + 8) != v3 )
LABEL_38:
        __fastfail(3u);
      *v2 = v17;
      *(_QWORD *)(v17 + 8) = v2;
      v18 = *((_QWORD *)v3 + 2);
      if ( v18 )
      {
        *(_BYTE *)(v18 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)(v18 + 104), 0LL);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v18 + 69));
        *(_QWORD *)(v18 + 56) = 0LL;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)v3 + 4), *((_QWORD *)v3 + 2));
      ExFreePoolWithTag(v3, 0);
    }
    while ( 1 )
    {
      v4 = v1 + 40;
      v5 = (char *)*((_QWORD *)v1 + 5);
      if ( v5 == v1 + 40 )
        break;
      v14 = v5 - 168;
      v15 = *((_QWORD *)v5 + 2);
      v16 = *(_QWORD *)v5;
      if ( *((_QWORD **)v5 + 1) != v4 || *(char **)(v16 + 8) != v5 )
        goto LABEL_38;
      *v4 = v16;
      *(_QWORD *)(v16 + 8) = v4;
      v14[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v14 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v14[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v15 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v15 + 24) == 590400 )
        FsRtlpFillOutputBuffer((_DWORD)v14, (*((_DWORD *)v1 + 36) >> 12) & 7, 0, 0, 0, 0);
      else
        *((_QWORD *)v14 + 7) = 8LL;
      *((_DWORD *)v14 + 12) = 0;
      IofCompleteRequest((PIRP)v14, 1);
    }
    while ( 1 )
    {
      v6 = (char *)*((_QWORD *)v1 + 7);
      if ( v6 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v6 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD **)v1 + 7));
        v12 = (__int64 *)*v11;
        v13 = (__int64 **)*((_QWORD *)v6 + 8);
        if ( *(__int64 **)(*v11 + 8) != v11 || *v13 != v11 )
          goto LABEL_38;
        *v13 = v12;
        v12[1] = (__int64)v13;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v6 + 5) )
          FsRtlpClearOwner((__int64)v1, (__int64)v6);
        FsRtlpFreeRHOpContext(v6);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v6, (__int64)v1, 0, 0, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v7 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v7 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD **)v1 + 9));
      FsRtlpModifyThreadPriorities(v1, v7, 0LL);
      ObfDereferenceObjectWithTag(v7[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v7);
      FsRtlpOplockPerfSendData(v7 + 9);
      FsRtlpFreeRHOpContext(v7);
    }
    v8 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v9 = *(_QWORD *)&v8[3].Contention;
      BYTE5(v8[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v8[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v8[1].Owner));
      if ( *(_DWORD *)(v9 + 24) == 590400 )
        FsRtlpFillOutputBuffer((_DWORD)v8, (*((_DWORD *)v1 + 36) >> 12) & 7, 0, 0, 0, 0);
      else
        *(_QWORD *)&v8[1].Count = 8LL;
      v8->OldIrql = 0;
      IofCompleteRequest((PIRP)v8, 1);
      *(_QWORD *)v1 = 0LL;
      v10 = (void *)*((_QWORD *)v1 + 1);
      if ( v10 )
        ObfDereferenceObjectWithTag(v10, 0x746C6644u);
      FsRtlpModifyThreadPriorities(v1, 0LL, 0LL);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    else
    {
      FsRtlpOplockPerfSendData(v1 + 160);
    }
    FsRtlpSyncWithAckTimeout((PVOID *)v1 + 22);
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v19 = (void *)*((_QWORD *)v1 + 17);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
