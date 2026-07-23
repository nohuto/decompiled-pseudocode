/*
 * XREFs of MiFreeThreadFaultClusterContext @ 0x1404A4CE8
 * Callers:
 *     MmExitThread @ 0x14094C484 (MmExitThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeThreadFaultClusterContext(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  signed __int16 v11; // r15
  unsigned __int8 CurrentIrql; // r14
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // r12d
  struct _KTHREAD *CurrentThread; // rbp
  LegacyAutoBoost *v17; // r14
  __int16 v18; // r9
  signed __int16 v19; // ax
  signed __int16 v20; // tt
  unsigned __int16 v21; // r9
  unsigned __int16 *SListFaultAddress; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KLOCK_ENTRIES *v25; // r9
  bool v26; // zf
  AutoBoost *v27; // rax
  AutoBoost *v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]

  v5 = *(_QWORD *)(a2 + 40);
  v8 = 0LL;
  v34 = 0;
  v9 = (_QWORD *)(a2 - 48 * (v5 >> 60) - 32);
  v10 = ((unsigned int)(v9[3] >> 16) & 0xF) + 1;
  v11 = (1 << ((WORD1(v9[3]) & 0xF) + 1)) - 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, v8);
  }
  v33 = 0;
LABEL_6:
  v13 = *(_QWORD *)(a2 + 40);
  do
  {
    if ( (v13 & 1) != 0 )
    {
      KeYieldProcessorEx(&v33);
      goto LABEL_6;
    }
    v14 = v13;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), v13 | 1, v13);
  }
  while ( v14 != v13 );
  *(_QWORD *)(a2 + 40) = v5 & 0xF000000000000000uLL | 1;
  _InterlockedAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL);
  v15 = v34;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v17, a1);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v17 + 33) |= 2u;
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  v18 = 1 << (v5 >> 60);
  _m_prefetchw(v9 + 3);
  v19 = *((_WORD *)v9 + 12);
  do
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange16((volatile signed __int16 *)v9 + 12, v18 | v19, v19);
  }
  while ( v20 != v19 );
  v21 = v19 | v18;
  if ( v21 == v11 )
  {
    if ( v11 == _InterlockedCompareExchange16((volatile signed __int16 *)v9 + 12, 0, v11) )
      v15 = 1;
    else
      v9 = 0LL;
  }
  else
  {
    SListFaultAddress = (unsigned __int16 *)a1->SListFaultAddress;
    if ( !SListFaultAddress || (unsigned int)__popcnt(v21) < (unsigned int)__popcnt(SListFaultAddress[12]) )
      a1->SListFaultAddress = v9;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24, v23);
  if ( v15 )
  {
    --CurrentThread->SpecialApcDisable;
    v27 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v25);
    v28 = v27;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v27, (__int64)a1);
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v28 + 33) |= 2u;
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    v29 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v30 = (_QWORD *)v9[1], (_QWORD *)*v30 != v9) )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    if ( a1->SListFaultAddress == v9 )
      a1->SListFaultAddress = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v32, v31);
    ExFreePoolWithTag(v9, 0);
  }
}
