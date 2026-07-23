/*
 * XREFs of PfpPartitionInsertToGlobals @ 0x140602CC8
 * Callers:
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140487310 (ExReInitializeRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionInsertToGlobals(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[1];
  v2 = *a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 888), &LockHandle);
  v4 = 0;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v4 = -1073741791;
  }
  else
  {
    v5 = *(_QWORD **)(v1 + 904);
    v6 = a1 + 3;
    if ( *v5 != v1 + 896 )
      __fastfail(3u);
    *v6 = v1 + 896;
    a1[4] = (__int64)v5;
    *v5 = v6;
    *(_QWORD *)(v1 + 904) = v6;
    *(_QWORD *)(v2 + 32) = a1;
    ExReInitializeRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)a1[2]);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
