/*
 * XREFs of HalAllocateAdapterChannelV2 @ 0x14035BB40
 * Callers:
 *     HalRealAllocateAdapterChannelV2 @ 0x1404C4510 (HalRealAllocateAdapterChannelV2.c)
 *     HalAllocateAdapterChannel @ 0x14057BF00 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x140436E5C (HalpQueueMapBufferWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaQueueAdapter @ 0x14058BBD8 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalAllocateAdapterChannelV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v10; // rcx
  KSPIN_LOCK *v11; // rcx
  char v12; // r14
  __int64 v13; // rdx
  char v14; // al
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 MapRegisters; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(a2 + 20) &= ~4u;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(a2 + 24) = a4;
  CurrentIrql = 0;
  *(_DWORD *)(a2 + 40) = a3;
  v7 = a3;
  v8 = a2;
  v10 = 2LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v10) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v10, a2);
    }
    v5 = 1;
  }
  v11 = (KSPIN_LOCK *)(a1 + 208);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  }
  else
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 208);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
      if ( v13 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v13, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
    }
  }
  v14 = *(_BYTE *)(a1 + 216);
  *(_BYTE *)(a1 + 216) = 1;
  if ( v14 == 1 )
  {
    v15 = *(_QWORD **)(a1 + 200);
    if ( *v15 != a1 + 192 )
      __fastfail(3u);
    *(_QWORD *)v8 = a1 + 192;
    v12 = 1;
    *(_QWORD *)(v8 + 8) = v15;
    *v15 = v8;
    *(_QWORD *)(a1 + 200) = v8;
  }
  *(_BYTE *)(v8 + 20) = v12;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v12 )
    goto LABEL_32;
  *(_DWORD *)(a1 + 248) = v7;
  *(_QWORD *)(a1 + 352) = v8;
  if ( !v7 || !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
  {
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_DWORD *)(a1 + 248) = 0;
    goto LABEL_25;
  }
  if ( v7 <= *(_DWORD *)(a1 + 232) )
  {
    MapRegisters = HalpDmaAllocateMapRegisters(a1, v7);
    *(_QWORD *)(a1 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(a1);
      v4 = 1;
      HalpQueueMapBufferWorker(a1, v7);
    }
LABEL_25:
    v19 = *(_QWORD *)(a1 + 432);
    if ( v19 )
      guard_dispatch_icall_no_overrides(v19, v16, v17);
    if ( v4 )
      goto LABEL_32;
    v20 = *(_QWORD *)(a1 + 240);
    *(_QWORD *)(a1 + 352) = v8;
    v21 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 48), *(_QWORD *)(v8 + 56), v20);
    if ( v21 != 2 )
    {
      if ( v21 != 3 )
      {
LABEL_32:
        if ( v5 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        return 0LL;
      }
      *(_DWORD *)(a1 + 248) = 0;
    }
    IoFreeAdapterChannelV2(a1);
    goto LABEL_32;
  }
  *(_DWORD *)(a1 + 248) = 0;
  IoFreeAdapterChannelV2(a1);
  if ( v5 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 3221225626LL;
}
