/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x14052A77C
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140502180 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpClearOwner @ 0x1403FCCBC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FE3D0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FE8E4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0);
    FsRtlpClearOwner(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
      *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x8000020 | 1;
    if ( a3 )
    {
      FsRtlpSyncWithAckTimeout((PVOID *)(v5 + 176));
      FsRtlpOplockPerfSendData(v5 + 160);
      while ( 1 )
      {
        v6 = *(_QWORD **)(v5 + 88);
        if ( v6 == (_QWORD *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v6);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
