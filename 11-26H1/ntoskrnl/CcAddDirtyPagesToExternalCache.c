/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1404F26A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x1404B349C (CcChargeDirtyPagesInternal.c)
 */

void __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  unsigned int v6; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_BYTE **)(a1 + 56);
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v6 = v3;
      if ( v3 > 0xFFFFFFFF )
        v6 = -1;
      v3 -= v6;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &LockHandle);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan((_BYTE *)v5, v2, 0, 0);
      *(_QWORD *)(a1 + 8) += v6;
      CcChargeDirtyPagesInternal(0LL, 0LL, 0LL, v6, v5, (__int64)v2);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( v3 );
  }
}
