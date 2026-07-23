/*
 * XREFs of CcFlushCachePreProcess @ 0x14039AF28
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcPerfLogFlushCache @ 0x14049D1B8 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1404A3858 (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1404E35B0 (CcSerializeWithLazyWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcFlushCachePreProcess(__int64 a1)
{
  int *v1; // rsi
  __int64 v2; // r14
  char v3; // di
  char v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  struct _KTHREAD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  KSPIN_LOCK *v12; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  char v22; // dl
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  int v27; // eax
  struct _KTHREAD *v28; // rax
  int v29; // ecx
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+30h]

  v1 = *(int **)(a1 + 112);
  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_BYTE *)(a1 + 108);
  v5 = 0;
  v32 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = 0LL;
  memset(&v30, 0, sizeof(v30));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_QWORD *)(a1 + 88) )
  {
    v28 = *(struct _KTHREAD **)(a1 + 96);
    if ( v28 )
    {
      if ( v28 != (struct _KTHREAD *)&EmpParseLock.InGlobalForegroundList )
        KeBugCheckEx(0x34u, 0x16C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  ++EmpParseLock.WaitBlock[0].Object;
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink)
    && !HIDWORD(EmpParseLock.Affinity)
    && *((_BYTE *)&EmpParseLock.SwapListEntry + 8)
    && !LODWORD(EmpParseLock.Affinity) )
  {
    CcSetTelemetryPeriodicTimer(*(LARGE_INTEGER *)&EmpParseLock.Timer.Header.Lock);
  }
  *v1 = 0;
  v8 = *(struct _KTHREAD **)(a1 + 96);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v8 == (struct _KTHREAD *)&EmpParseLock.InGlobalForegroundList )
  {
    *(_QWORD *)(a1 + 176) = *((_QWORD *)v1 + 1);
    *v1 = -2147483626;
    *(_BYTE *)(a1 + 132) = 1;
LABEL_13:
    *(_QWORD *)(a1 + 96) = 0LL;
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(a1 + 56) | 1;
  *(_DWORD *)(a1 + 56) = v9;
  if ( v3 )
    *(_DWORD *)(a1 + 56) = v9 | 0x10;
  if ( v8 == (struct _KTHREAD *)&EmpParseLock.880 )
  {
    *(_BYTE *)(a1 + 138) = 1;
    goto LABEL_13;
  }
LABEL_14:
  *((_QWORD *)v1 + 1) = 0LL;
  KeRcuReadLock((__int64)v8);
  v12 = &CcMasterLock;
  v30.LockQueue.Next = 0LL;
  v30.LockQueue.Lock = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = 2;
    LOBYTE(v12) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v12, v10);
  }
  v30.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v14 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v30);
    if ( v14 )
      KxWaitForLockOwnerShip((volatile signed __int64)&v30, v14, v11);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v30, (volatile __int64 *)&CcMasterLock);
  }
  v15 = *(_QWORD *)(v32 + 8);
  *(_QWORD *)(a1 + 16) = v15;
  if ( v15 )
  {
    v6 = *(_QWORD *)(v15 + 536);
    v7 = *(_QWORD *)(v15 + 600);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v7;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 768);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v16 = _InterlockedExchange64((volatile __int64 *)(v6 + 768), (__int64)&LockHandle);
      if ( v16 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v16, v11);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v6 + 768));
    }
    v5 = 1;
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( (*(_DWORD *)(v15 + 152) & 0x10000) != 0 )
      {
        *(_BYTE *)(a1 + 133) = 1;
        if ( *(_DWORD *)(v15 + 524) )
          *(_BYTE *)(a1 + 134) = 1;
      }
    }
    else
    {
      v17 = *(_QWORD **)(a1 + 96);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v15 + 32);
        if ( *v17 >= v18 )
        {
LABEL_108:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_109:
          KeReleaseInStackQueuedSpinLock(&v30);
          KeRcuReadUnlock();
          return 0;
        }
        if ( *v17 + v2 > v18 )
        {
          LODWORD(v2) = *(_DWORD *)(v15 + 32) - *(_DWORD *)v17;
          *(_DWORD *)(a1 + 104) = v2;
        }
      }
      ++*(_DWORD *)(v15 + 524);
    }
  }
  v19 = *(_BYTE *)(a1 + 132);
  if ( !v19 && !*(_BYTE *)(a1 + 138) && v15 && (*(_DWORD *)(v15 + 524) > 1u || (*(_DWORD *)(v15 + 152) & 0x20) != 0) )
    *(_BYTE *)(a1 + 144) = 1;
  if ( *(_QWORD *)(a1 + 96) && !(_DWORD)v2 )
  {
    if ( v15 && !v19 )
      --*(_DWORD *)(v15 + 524);
    if ( !v5 )
      goto LABEL_109;
    goto LABEL_108;
  }
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 138) && (*(_DWORD *)(v15 + 524) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(v6, v15)) )
    {
      --*(_DWORD *)(v15 + 524);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeReleaseInStackQueuedSpinLock(&v30);
      KeRcuReadUnlock();
      *v1 = -1073741740;
      return 0;
    }
    ++*(_DWORD *)(v15 + 4);
    ++*(_DWORD *)(v15 + 544);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
    *(_QWORD *)(a1 + 216) = *(unsigned int *)(v15 + 112);
  }
  if ( v5 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v30);
  KeRcuReadUnlock();
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    *(_BYTE *)(a1 + 134) = 1;
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    CcPerfLogFlushCache(
      *(_QWORD *)(a1 + 176),
      v15,
      *(_QWORD *)(a1 + 96),
      v2,
      *(_BYTE *)(a1 + 132) == 1,
      *(_BYTE *)(a1 + 133) == 1,
      *(_BYTE *)(a1 + 134) == 1);
  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( v15 )
      goto LABEL_43;
  }
  else if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(v6, v15);
LABEL_43:
    v20 = *(_QWORD *)(a1 + 168);
    if ( ((*(_BYTE *)(v20 + 6) & 0x10) == 0 || (*(_BYTE *)(v20 + 4) & 0x20) == 0)
      && (*(_DWORD *)(v15 + 152) & 0x20000) == 0 )
    {
      goto LABEL_45;
    }
  }
  if ( !*(_BYTE *)(a1 + 132) )
    goto LABEL_93;
LABEL_45:
  if ( *(_BYTE *)(a1 + 134) || v15 && (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 || *(_BYTE *)(a1 + 144) )
  {
LABEL_93:
    *(_BYTE *)(a1 + 135) = 1;
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      CcPerfLogFlushSection(*(_QWORD *)(a1 + 176), v15, *(_QWORD *)(a1 + 96), v2, *(_DWORD *)(a1 + 56));
    if ( v15 )
      CcUnmapVacbArray(v15, *(_QWORD *)(a1 + 96), v2, 0, 0, 0);
    v27 = MmFlushSection(v32, *(_QWORD *)(a1 + 96), (unsigned int)v2, 0LL, v1, *(_DWORD *)(a1 + 56));
    if ( v27 >= 0 )
      goto LABEL_98;
    v29 = *v1;
    if ( *(_BYTE *)(a1 + 132) )
    {
      if ( v29 != -2147483626 )
      {
LABEL_98:
        if ( *v1 < 0 )
          *(_DWORD *)(a1 + 128) = *v1;
        goto LABEL_49;
      }
    }
    else if ( v29 )
    {
      goto LABEL_98;
    }
    *v1 = v27;
    goto LABEL_98;
  }
LABEL_49:
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x4000000) == 0 )
  {
    v21 = *(_QWORD **)(a1 + 96);
    if ( v21 )
      *(_QWORD *)(a1 + 32) = *v21;
    v22 = CcEnablePerVolumeLazyWriter;
    v23 = v7 + 1104;
    if ( !CcEnablePerVolumeLazyWriter )
      v23 = v6 + 1168;
    *(_QWORD *)(a1 + 184) = v23;
    v24 = v7 + 1172;
    if ( !v22 )
      v24 = v6 + 1292;
    *(_QWORD *)(a1 + 192) = v24;
    v25 = *(_BYTE *)(a1 + 132);
    if ( !v25 && !*(_BYTE *)(a1 + 134) && !*(_BYTE *)(a1 + 144) && !v21 && !(_DWORD)v2 && !*(_QWORD *)(a1 + 88) )
      *(_BYTE *)(a1 + 200) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    if ( (_DWORD)v2 )
      *(_DWORD *)(a1 + 48) = v2;
    if ( v25 )
      *(_QWORD *)(a1 + 152) = MEMORY[0xFFFFF78000000320];
    if ( CcEnablePerVolumeLazyWriter
      && *(_BYTE *)(a1 + 132)
      && !*(_BYTE *)(a1 + 135)
      && (*(_DWORD *)(v15 + 152) & 0x40000200) == 0 )
    {
      *(LARGE_INTEGER *)(a1 + 232) = KeQueryPerformanceCounter(0LL);
    }
  }
  return 1;
}
