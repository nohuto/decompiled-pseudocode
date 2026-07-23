/*
 * XREFs of SmHwAcceleratorMgrHotRemoveAccelerator @ 0x140643798
 * Callers:
 *     SmHwAcceleratorMgrAccelCallback @ 0x140820C80 (SmHwAcceleratorMgrAccelCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140643C0C (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     SmHwAcceleratorCleanup @ 0x140820A24 (SmHwAcceleratorCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmHwAcceleratorMgrHotRemoveAccelerator(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int i; // ecx
  void **v12; // r8
  void **v13; // rsi
  unsigned int v14; // eax
  _QWORD *j; // rdx
  LIST_ENTRY *p_WaitListHead; // r12
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *v18; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r14
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // r8
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v25; // rax
  struct _LIST_ENTRY *k; // r14
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *Blink; // rax
  PVOID *v29; // rax
  void **v30; // rcx
  void **v31; // rax
  struct _LIST_ENTRY *m; // r14
  PVOID v34; // rbx
  __int64 v35; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  struct _LIST_ENTRY *v38; // [rsp+70h] [rbp+40h]
  int v39; // [rsp+80h] [rbp+50h]
  struct _LIST_ENTRY *v40; // [rsp+88h] [rbp+58h] BYREF

  p_P = &P;
  P = &P;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v7, (__int64)a1);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (struct _KLOCK_ENTRIES *)(unsigned __int16)KeNumberNodes;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)KeNumberNodes )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
      KeAbPostRelease((unsigned __int64)a1);
      KeLeaveCriticalRegion();
      return;
    }
    v12 = &a1->SListFaultAddress + 2 * i;
    v13 = (void **)*v12;
LABEL_10:
    if ( v13 != v12 )
      break;
  }
  v14 = 0;
  for ( j = v13 + 2; ; ++j )
  {
    if ( v14 >= 2 )
    {
      v13 = (void **)*v13;
      goto LABEL_10;
    }
    if ( *j == a2 )
      break;
    ++v14;
  }
  p_WaitListHead = &a1->Header.WaitListHead;
  Flink = a1->Header.WaitListHead.Flink;
  if ( Flink != &a1->Header.WaitListHead )
  {
    do
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = (AutoBoost *)KeAbPreAcquire((__int64)&Flink[1].Blink, 0LL, 0LL, v10);
      v21 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[1].Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[1].Blink, v19, (__int64)&Flink[1].Blink);
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v20);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      v22 = 0LL;
      v23 = Flink + 3;
      v39 = 0;
      p_Blink = &Flink[3].Blink;
      v38 = Flink + 3;
      do
      {
        v25 = &(*(p_Blink - 3))[*((unsigned int *)v13 + 11)];
        for ( k = v25->Flink; ; k = k->Flink )
        {
          if ( k == v25 )
            goto LABEL_35;
          if ( (void **)k[2].Flink == v13 )
            break;
        }
        LODWORD(k[4].Flink) |= 1u;
        v27 = k->Flink;
        if ( k->Flink->Blink != k )
          goto LABEL_55;
        Blink = k->Blink;
        if ( Blink->Flink != k )
          goto LABEL_55;
        Blink->Flink = v27;
        v27->Blink = Blink;
        *((_DWORD *)&Flink[3].Flink + v22) = LODWORD(v23->Flink) - 1;
        if ( *p_Blink )
        {
          v40 = *p_Blink;
          *p_Blink = 0LL;
          SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(&v40);
          LODWORD(v22) = v39;
          v23 = v38;
        }
        v29 = p_P;
        if ( *p_P != &P )
          goto LABEL_55;
        k->Blink = (struct _LIST_ENTRY *)p_P;
        k->Flink = (struct _LIST_ENTRY *)&P;
        *v29 = k;
        p_P = (PVOID *)&k->Flink;
LABEL_35:
        v22 = (unsigned int)(v22 + 1);
        v23 = (struct _LIST_ENTRY *)((char *)v23 + 4);
        ++p_Blink;
        v39 = v22;
        v38 = v23;
      }
      while ( (int)v22 < 2 );
      Flink = Flink->Flink;
    }
    while ( Flink != p_WaitListHead );
    p_WaitListHead = &a1->Header.WaitListHead;
  }
  v30 = (void **)*v13;
  if ( *((void ***)*v13 + 1) != v13 || (v31 = (void **)v13[1], *v31 != v13) )
LABEL_55:
    __fastfail(3u);
  *v31 = v30;
  v30[1] = v31;
  --*((_DWORD *)&a1->KernelShadowStackBase + *((unsigned int *)v13 + 11));
  if ( LODWORD(a1[1].KernelStack)-- == 1 )
  {
    AccelDestroyOffloadWorkspace(a1[1].SchedulingGroup);
    a1[1].SchedulingGroup = 0LL;
  }
  for ( m = a1->Header.WaitListHead.Flink; m != p_WaitListHead; m = m->Flink )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&m[1].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&m[1].Blink);
    KeAbPostRelease((unsigned __int64)&m[1].Blink);
    KeLeaveCriticalRegion();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v34 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_55;
    v35 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_55;
    P = *(PVOID *)P;
    *(_QWORD *)(v35 + 8) = &P;
    SmHwAcceleratorPartitionCtxCleanup(v34);
    ExFreePoolWithTag(v34, 0);
  }
  SmHwAcceleratorCleanup(v13);
  ExFreePoolWithTag(v13, 0);
}
