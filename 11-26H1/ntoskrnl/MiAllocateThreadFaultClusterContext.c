/*
 * XREFs of MiAllocateThreadFaultClusterContext @ 0x14049EEBC
 * Callers:
 *     MmCreateThread @ 0x140ADA450 (MmCreateThread.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiAllocateClusterContextFromBlock @ 0x14049F1AC (MiAllocateClusterContextFromBlock.c)
 */

__int64 __fastcall MiAllocateThreadFaultClusterContext(
        struct _KTHREAD *a1,
        __int64 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ClusterContextFromBlock; // r15
  unsigned int v8; // r12d
  LegacyAutoBoost *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  struct _KTHREAD *Flink; // rsi
  unsigned int v15; // r14d
  __int64 v16; // r15
  __int64 PoolMm; // rax
  struct _LIST_ENTRY *v18; // rsi
  __int64 v19; // r8
  __int64 *v20; // rcx
  __int64 v21; // rax
  AutoBoost *v22; // rax
  AutoBoost *v23; // r14
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx

  CurrentThread = KeGetCurrentThread();
  ClusterContextFromBlock = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = 0;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v9, a1);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( !a1->SListFaultAddress
    || (ClusterContextFromBlock = ((__int64 (*)(void))MiAllocateClusterContextFromBlock)()) == 0 )
  {
    Flink = (struct _KTHREAD *)a1->Header.WaitListHead.Flink;
    while ( Flink != (struct _KTHREAD *)&a1->Header.WaitListHead )
    {
      ClusterContextFromBlock = MiAllocateClusterContextFromBlock(Flink);
      if ( ClusterContextFromBlock )
        break;
      Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
      ++v8;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  if ( ClusterContextFromBlock )
    goto LABEL_14;
  if ( v8 >= 4 || (v15 = 2 << v8, (unsigned int)(2 << v8) >= 0x10) )
    v15 = 16;
  v16 = v15;
  PoolMm = ExAllocatePoolMm(
             64LL,
             48LL * v15 + 32,
             1649699149,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v18 = (struct _LIST_ENTRY *)PoolMm;
  if ( PoolMm )
  {
    *(_QWORD *)(PoolMm + 16) = a1;
    *(_WORD *)(PoolMm + 26) ^= ((unsigned __int8)*(_WORD *)(PoolMm + 26) ^ (unsigned __int8)(v15 - 1)) & 0xF;
    if ( v15 )
    {
      v19 = 0LL;
      v20 = (__int64 *)(PoolMm + 72);
      do
      {
        v21 = v19++ << 60;
        *v20 = v21 | *v20 & 0xFFFFFFFFFFFFFFFLL;
        v20 += 6;
        --v16;
      }
      while ( v16 );
    }
    ClusterContextFromBlock = (__int64)&v18[2];
    LOWORD(v18[1].Blink) = ((1 << v15) - 1) & 0xFFFE;
    --CurrentThread->SpecialApcDisable;
    v22 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
    v23 = v22;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v22, (__int64)a1);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v23 + 33) |= 2u;
      else
        *((_BYTE *)v23 + 10) = 1;
    }
    p_WaitListHead = &a1->Header.WaitListHead;
    v25 = a1->Header.WaitListHead.Flink;
    if ( v25->Blink != &a1->Header.WaitListHead )
      __fastfail(3u);
    v18->Flink = v25;
    v18->Blink = p_WaitListHead;
    v25->Blink = v18;
    p_WaitListHead->Flink = v18;
    if ( !a1->SListFaultAddress )
      a1->SListFaultAddress = v18;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v27, v26);
LABEL_14:
    *a2 = ClusterContextFromBlock;
    return 0LL;
  }
  return 3221225626LL;
}
