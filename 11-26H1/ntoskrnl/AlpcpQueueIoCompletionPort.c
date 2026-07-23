/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x140267FE0
 * Callers:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A9232C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A92708 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpSignalPortAndUnlock @ 0x140AFBE60 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     AlpcpQueueIoCompletion @ 0x1402686B0 (AlpcpQueueIoCompletion.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 */

void __fastcall AlpcpQueueIoCompletionPort(__int64 a1, char a2, __int64 a3, char a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  char v8; // si
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 Lock; // rdx
  _QWORD *v13; // rcx
  __int64 MiniCompletionPacket; // r14
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 p_LockHandle; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // ebp
  BOOL v21; // eax
  int v22; // r13d
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 CurrentThread; // rbx
  char v26; // r8
  __int64 v27; // rax
  bool v28; // di
  signed __int8 v29; // cf
  _QWORD *v30; // rsi
  _QWORD *v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 *v35; // rcx
  bool v36; // cl
  __int64 v37; // rdx
  unsigned int v38; // ecx
  _QWORD *v39; // r14
  _QWORD *v40; // rsi
  char v41; // al
  __int64 v42; // rax
  unsigned int v43; // edi
  __int64 v44; // rbp
  __int64 v45; // rbx
  __int64 v46; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-88h] BYREF
  int v48; // [rsp+20h] [rbp-68h]
  unsigned int v49; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-50h]
  __int64 v51; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v54; // [rsp+90h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v5;
  v8 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)v5, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v5);
  }
  Lock = *(unsigned int *)(v5 + 12);
  if ( (unsigned int)Lock >= *(_DWORD *)(v5 + 8) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v36 = a4 && !v8;
    v37 = *(_QWORD *)(a1 + 40);
    LOBYTE(v48) = v36;
    if ( !(unsigned int)AlpcpQueueIoCompletion(v6, v37, -(a2 != 0), 0, v48, a5) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
      if ( a2 )
        ++*(_DWORD *)(v5 + 20);
      else
        ++*(_DWORD *)(v5 + 16);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 352);
      KeAbPostRelease((struct _KTHREAD *)(a1 + 352));
    }
    return;
  }
  v13 = *(_QWORD **)(v5 + 32);
  if ( v13 )
    *(_QWORD *)(v5 + 32) = *v13;
  MiniCompletionPacket = v13[1];
  *(_DWORD *)(v5 + 12) = Lock + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      p_LockHandle = (__int64)&LockHandle;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_17;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    p_LockHandle = (__int64)&Next->Lock;
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int64)LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)&Next->Lock,
                                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v47, 0);
      KiWakeAddressAll(p_LockHandle, Lock, a3);
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
LABEL_17:
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
  __writecr8(OldIrql);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 352);
    KeAbPostRelease((struct _KTHREAD *)(a1 + 352));
  }
  v18 = *(_QWORD *)(a1 + 40);
  v19 = -(__int64)(a2 != 0);
  v20 = 0;
  v21 = a4 != 0;
  v22 = v21 | 4;
  if ( !a5 )
    v22 = v21;
  if ( MiniCompletionPacket
    || (LOBYTE(p_LockHandle) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(p_LockHandle, 0LL)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = v18;
    v23 = (_QWORD *)(v6 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = v19;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    v24 = KeGetCurrentIrql();
    v51 = v24;
    if ( (_BYTE)v24 != 2 )
    {
      p_LockHandle = 2LL;
      __writecr8(2uLL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(Lock) = 2;
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v24, Lock);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v26 = *(_BYTE *)(CurrentThread + 388) == 2 && *(_DWORD *)(CurrentThread + 536) == KeGetPcr()->Prcb.Number;
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, v26);
    }
    v49 = ((unsigned __int8)~*(_BYTE *)(v6 + 1) >> 1) & 1;
    v27 = *(_QWORD *)(CurrentThread + 1616);
    if ( !v27 )
      v27 = CurrentThread;
    v28 = 0;
    if ( v22 )
    {
      p_LockHandle = *(unsigned int *)(*(_QWORD *)(v27 + 544) + 136LL);
      if ( (p_LockHandle & 0x2000) != 0 )
        v28 = 1;
    }
    v29 = _interlockedbittestandset((volatile signed __int32 *)v6, 7u);
    v54 = 0;
    if ( v29 )
    {
      do
      {
        do
          KeYieldProcessorEx(&v54);
        while ( (*(_DWORD *)v6 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v6, 7u) );
    }
    if ( (_QWORD *)*v23 != v23
      && (*(_DWORD *)(v6 + 40) < *(_DWORD *)(v6 + 44) || v28)
      && (*(_QWORD *)(CurrentThread + 232) != v6 || *(_BYTE *)(CurrentThread + 643) != 15) )
    {
      v30 = (_QWORD *)*v23;
      do
      {
        v31 = v30;
        v30 = (_QWORD *)*v30;
        if ( *((_BYTE *)v31 + 16) != 3 )
          break;
        v32 = (_QWORD *)v31[1];
        if ( (_QWORD *)v30[1] != v31 || (_QWORD *)*v32 != v31 )
          goto LABEL_54;
        *v32 = v30;
        LOBYTE(Lock) = 0;
        v30[1] = v32;
        v33 = v31[3];
        LOBYTE(v54) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 64), 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(p_LockHandle, Lock, a3) )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v33 + 64) );
        }
        if ( *(_BYTE *)(v33 + 388) == 5 )
          Lock = (unsigned __int8)KiSignalThread(CurrentPrcb, v33, MiniCompletionPacket, v31);
        else
          Lock = (unsigned __int8)v54;
        v20 = 0;
        *(_QWORD *)(v33 + 64) = 0LL;
        p_LockHandle = *((unsigned __int8 *)v31 + 17);
        LOBYTE(p_LockHandle) = p_LockHandle + 1;
        *((_BYTE *)v31 + 17) = p_LockHandle;
        if ( (_BYTE)Lock )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          goto LABEL_81;
        }
      }
      while ( v30 != v23 );
    }
    v34 = *(unsigned int *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = v34 + 1;
    v35 = *(__int64 **)(v6 + 32);
    if ( *v35 != v6 + 24 )
LABEL_54:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v6 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v35;
    *v35 = MiniCompletionPacket;
    *(_QWORD *)(v6 + 32) = MiniCompletionPacket;
    if ( !(_DWORD)v34 && (_QWORD *)*v23 != v23 )
    {
      v39 = *(_QWORD **)(v6 + 16);
      do
      {
        v40 = v39;
        v39 = (_QWORD *)v39[1];
        v41 = *((_BYTE *)v40 + 16);
        if ( v41 == 2 )
        {
          v46 = *v40;
          if ( *(_QWORD **)(*v40 + 8LL) != v40 || (_QWORD *)*v39 != v40 )
            goto LABEL_54;
          *v39 = v46;
          *(_QWORD *)(v46 + 8) = v39;
          *((_BYTE *)v40 + 17) = 5;
          KiInsertQueueInternal(v40[3], v40);
        }
        else
        {
          if ( v41 != 1 )
            break;
          v42 = *v40;
          if ( *(_QWORD **)(*v40 + 8LL) != v40 || (_QWORD *)*v39 != v40 )
            goto LABEL_54;
          *v39 = v42;
          v43 = 0;
          *(_QWORD *)(v42 + 8) = v39;
          v44 = *((unsigned __int16 *)v40 + 9);
          v45 = v40[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 64), 0LL) )
          {
            do
            {
              if ( (++v43 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35, v34, a3) )
              {
                HvlNotifyLongSpinWait(v43);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v45 + 64) );
          }
          if ( *(_BYTE *)(v45 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v45, v44, v40);
          *(_QWORD *)(v45 + 64) = 0LL;
          ++*((_BYTE *)v40 + 17);
        }
      }
      while ( v39 != v23 );
    }
LABEL_81:
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
    if ( (v22 & 1) != 0 )
    {
      v38 = 3;
    }
    else
    {
      v38 = 0;
      if ( (v22 & 4) != 0 )
      {
        KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
        v38 = 6;
      }
    }
    KiExitDispatcher((__int64)CurrentPrcb, v38, 1u, v49, v51);
  }
}
