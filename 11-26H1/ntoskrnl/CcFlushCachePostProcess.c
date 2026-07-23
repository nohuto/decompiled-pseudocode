/*
 * XREFs of CcFlushCachePostProcess @ 0x14039B640
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x1405B6238 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall CcFlushCachePostProcess(__int64 *a1, __int64 a2, __int64 a3)
{
  int *v3; // r13
  __int64 v4; // rbx
  __int64 v6; // rdi
  char v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rcx
  __int64 v12; // r13
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // rdx
  _BYTE *v21; // rbx
  __int64 result; // rax
  _BYTE *v23; // rax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // r11
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int *v30; // [rsp+70h] [rbp+8h]

  v3 = (int *)a1[14];
  v4 = a1[1];
  v6 = a1[2];
  v7 = *((_BYTE *)a1 + 132);
  v8 = *a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v30 = v3;
  if ( *((_DWORD *)a1 + 13) && *(_QWORD *)a1[23] != a1[23] )
    CcPostDeferredWrites(v8, v4);
  v9 = a1[30];
  v10 = 0LL;
  if ( v9 )
  {
    v11 = (__int64 *)(v4 + 1296);
    v12 = *((unsigned int *)a1 + 62);
    v13 = 0LL;
    a3 = 32LL;
    v14 = 1000000 * (v9 - a1[29]) / (__int64)EmpParseLock.Queue;
    if ( !v14 )
      v14 = 1LL;
    v15 = (unsigned int)(1000000 * v12) / v14;
    do
    {
      v16 = *v11++;
      v13 += v16;
      --a3;
    }
    while ( a3 );
    v17 = v13 >> 5;
    v18 = *(_QWORD *)(v4 + 40);
    if ( v14 + *(_QWORD *)(v18 + 424) )
    {
      a3 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 424LL);
      *(_QWORD *)(*(_QWORD *)(v4 + 40) + 440LL) = (v15 * v14 + *(_QWORD *)(v18 + 440) * a3) / (a3 + v14);
    }
    else
    {
      v28 = *(_QWORD *)(v18 + 440);
      if ( v15 > v28 )
        v28 = (unsigned int)(1000000 * v12) / v14;
      *(_QWORD *)(v18 + 440) = v28;
    }
    ++*(_QWORD *)(*(_QWORD *)(v4 + 40) + 416LL);
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 424LL) += v14;
    a2 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(a2 + 432) += v12;
    if ( !v15 )
      v15 = 512LL;
    v3 = v30;
    *(_QWORD *)(v4 + 8LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1280), 1u) & 0x1F) + 1296) = v15;
    *(_QWORD *)(v4 + 1288) = (v15 + 31 * v17) >> 5;
  }
  if ( v6 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 768);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v20 = _InterlockedExchange64((volatile __int64 *)(v8 + 768), (__int64)&LockHandle);
      if ( v20 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v20, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v8 + 768));
    }
    --*(_DWORD *)(v6 + 4);
    --*(_DWORD *)(v6 + 544);
    v21 = *(_BYTE **)(v6 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v10 = *(_QWORD *)(v6 + 600);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v23 = (_BYTE *)(*(_QWORD *)(v6 + 600) + 986LL);
      else
        v23 = v21 + 1050;
      *v23 = 1;
      v24 = *(_DWORD *)(v6 + 152);
      v25 = *(_DWORD *)(v6 + 112);
      if ( (v24 & 0x10000) != 0 )
      {
        if ( !v25 )
          CcInsertIntoDirtySharedCacheMapList(v6);
        if ( CcEnablePerVolumeLazyWriter )
        {
          CcNotifyWriteBehindVolume(v10, 8LL);
          if ( !*(_BYTE *)(v10 + 1172) )
            *(_BYTE *)(v10 + 985) = 1;
        }
        else
        {
          CcNotifyWriteBehindInternal(v21, 8LL);
          if ( !v21[1292] )
            v21[1049] = 1;
        }
      }
      else if ( !v25 && (v24 & 0x20) == 0 )
      {
        CcInsertIntoDirtySharedCacheMapList(v6);
        LOBYTE(v27) = v26 != 0;
        CcScheduleLazyWriteScan(v21, v10, v27, 0LL);
      }
    }
    if ( !v7 )
      --*(_DWORD *)(v6 + 524);
    if ( *((_BYTE *)a1 + 138) && *v3 >= 0 && *((int *)a1 + 32) >= 0 && (*(_DWORD *)(v6 + 112) || *(_DWORD *)(v6 + 524)) )
      *((_DWORD *)a1 + 32) = -1073741740;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  result = *((unsigned int *)a1 + 32);
  if ( (int)result < 0 )
    *v3 = result;
  return result;
}
