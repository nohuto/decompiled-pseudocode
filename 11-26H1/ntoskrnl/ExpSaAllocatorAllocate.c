/*
 * XREFs of ExpSaAllocatorAllocate @ 0x140492F8C
 * Callers:
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14049319C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404936B4 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(struct _KTHREAD *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // r12
  __int64 Memory; // rdi
  LegacyAutoBoost *v8; // rbp
  LIST_ENTRY *p_WaitListHead; // r15
  struct _LIST_ENTRY *i; // r14
  struct _LIST_ENTRY *Flink; // r14
  char v12; // r8
  __int64 ThreadLock_low; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  struct _LIST_ENTRY *v17; // rax
  struct _KTHREAD **QuantumTarget; // rcx
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  volatile unsigned __int8 *v21; // rdx
  AutoBoost *v22; // rbp

  v5 = 0;
  Memory = -1LL;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v8, a1);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  p_WaitListHead = &a1->Header.WaitListHead;
  while ( 2 )
  {
    for ( i = p_WaitListHead->Flink; i != p_WaitListHead; i = i->Flink )
    {
      Memory = ExpSaPageGroupAllocateMemory(i, a2);
      if ( Memory != -1 )
      {
        if ( !HIDWORD(i[2].Flink) )
          _InterlockedOr((volatile signed __int32 *)&a1->ThreadLock, 2u);
LABEL_12:
        if ( (a1->ThreadLock & 2) != 0 )
        {
          if ( !v5 && _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 1LL, 17LL) != 17 )
          {
LABEL_14:
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
            goto LABEL_21;
          }
          ExpSaAllocatorOptimizeList(a1);
        }
        else if ( !v5 )
        {
          goto LABEL_14;
        }
        goto LABEL_19;
      }
    }
    Flink = p_WaitListHead->Flink;
    v12 = 1;
    if ( !v5 && _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
      KeAbPostRelease((unsigned __int64)a1);
      v20 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v19);
      v22 = v20;
      if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v20, (__int64)a1);
      v12 = 1;
      if ( v22 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v21) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v22 + 33), v21, 1);
        }
        else
        {
          *((_BYTE *)v22 + 10) = 1;
        }
      }
    }
    v5 = v12;
    if ( Flink != p_WaitListHead->Flink )
      continue;
    break;
  }
  ThreadLock_low = LODWORD(a1->ThreadLock);
  LOBYTE(ThreadLock_low) = v12 & ThreadLock_low;
  v14 = ExpSaPageGroupDescriptorAllocate(a1, ThreadLock_low);
  v15 = v14;
  if ( v14 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v14, a2);
    if ( *(_DWORD *)(v15 + 36) )
    {
      *(_DWORD *)(v15 + 40) = 0;
      v17 = p_WaitListHead->Flink;
      if ( p_WaitListHead->Flink->Blink == p_WaitListHead )
      {
        *(_QWORD *)v15 = v17;
        *(_QWORD *)(v15 + 8) = p_WaitListHead;
        v17->Blink = (struct _LIST_ENTRY *)v15;
        p_WaitListHead->Flink = (struct _LIST_ENTRY *)v15;
        goto LABEL_12;
      }
    }
    else
    {
      *(_DWORD *)(v15 + 40) = 1;
      QuantumTarget = (struct _KTHREAD **)a1->QuantumTarget;
      if ( *QuantumTarget == (struct _KTHREAD *)&a1->SListFaultAddress )
      {
        *(_QWORD *)v15 = &a1->SListFaultAddress;
        *(_QWORD *)(v15 + 8) = QuantumTarget;
        *QuantumTarget = (struct _KTHREAD *)v15;
        a1->QuantumTarget = v15;
        goto LABEL_12;
      }
    }
    __fastfail(3u);
  }
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
LABEL_21:
  KeAbPostRelease((unsigned __int64)a1);
  return Memory;
}
