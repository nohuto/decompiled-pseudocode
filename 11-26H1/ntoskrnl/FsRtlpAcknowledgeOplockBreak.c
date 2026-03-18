/*
 * XREFs of FsRtlpAcknowledgeOplockBreak @ 0x1405B6114
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403FCCBC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FE3D0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FE8E4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140510174 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9B81C (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreak(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5)
{
  char v10; // r15
  int v11; // esi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  _QWORD *v16; // rcx

  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v10 = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) )
  {
    v11 = 16;
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(16LL, a5) && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 144) &= ~0x100u;
      *(_DWORD *)(a1 + 144) |= 0x400u;
    }
    if ( a4 && (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v12 = (_QWORD *)(a3 + 168);
      v13 = (_QWORD *)(a1 + 40);
      v14 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v14 + 8) != a1 + 40 )
        __fastfail(3u);
      *v12 = v14;
      *(_QWORD *)(a3 + 176) = v13;
      *(_QWORD *)(v14 + 8) = v12;
      *v13 = v12;
      *(_QWORD *)(a3 + 56) = a1;
      v10 = 0;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelReadOnlyOplockIrp(a3, 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v15 = 259;
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x300) != 0 )
    {
LABEL_18:
      v15 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      v11 = 1;
LABEL_19:
      while ( 1 )
      {
        v16 = *(_QWORD **)(a1 + 88);
        if ( v16 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v16);
      }
      if ( v10 )
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 144) = v11 | *(_DWORD *)(a1 + 144) & 0x8000020;
      FsRtlpSyncWithAckTimeout((PVOID *)(a1 + 176));
      FsRtlpOplockPerfSendData(a1 + 160);
      goto LABEL_25;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x400) != 0 )
    {
      *(_QWORD *)(a3 + 56) = 8LL;
      goto LABEL_18;
    }
  }
  v15 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_25:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v15;
}
