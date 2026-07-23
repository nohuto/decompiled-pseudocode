/*
 * XREFs of WmipWriteWnodeToObject @ 0x1403FB190
 * Callers:
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x1403FB2AC (WmipClearIrpObjectList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipQueueNotification @ 0x140AF3DC4 (WmipQueueNotification.c)
 */

__int64 __fastcall WmipWriteWnodeToObject(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // bp
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  if ( v6 )
  {
    WmipClearIrpObjectList(*(_QWORD *)(a1 + 72));
    v6 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = 1;
  if ( v6 )
  {
    v10 = *a2;
    v11 = *(_DWORD **)(v6 + 24);
    if ( *a2 > *(_DWORD *)(*(_QWORD *)(v6 + 184) + 8LL) )
    {
      v11[12] = v10;
      *v11 = 56;
      v10 = 56;
      v11[11] = 32;
    }
    else
    {
      memmove(v11, a2, v10);
      v8 = 0;
    }
    *(_QWORD *)(v6 + 56) = v10;
    *(_DWORD *)(v6 + 48) = 0;
    IofCompleteRequest((PIRP)v6, 0);
  }
  if ( v8 )
    return (unsigned int)WmipQueueNotification(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  return v7;
}
