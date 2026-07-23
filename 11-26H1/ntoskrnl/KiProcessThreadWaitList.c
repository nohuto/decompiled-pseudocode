/*
 * XREFs of KiProcessThreadWaitList @ 0x14023D710
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402394F0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiProcessThreadWaitList(struct _SINGLE_LIST_ENTRY *a1, __int64 a2, __int64 a3, char a4)
{
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  struct _SINGLE_LIST_ENTRY *v5; // rdi
  struct _KPRCB *v6; // rbp
  struct _SINGLE_LIST_ENTRY *v7; // r10
  struct _SINGLE_LIST_ENTRY *v8; // r13
  struct _SINGLE_LIST_ENTRY *v9; // rsi
  struct _SINGLE_LIST_ENTRY *v10; // r12
  volatile signed __int32 *v11; // r14
  unsigned int v12; // r15d
  struct _SINGLE_LIST_ENTRY *v13; // rax
  __int64 v14; // r10
  int v15; // eax
  int v16; // r14d
  __int64 result; // rax
  unsigned int v18; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 Level; // r8
  struct _SINGLE_LIST_ENTRY *v21; // rdx
  struct _SINGLE_LIST_ENTRY v22; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  unsigned int SingleTargetIndex; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+3Ch] [rbp-5Ch]
  int v27; // [rsp+A0h] [rbp+8h]
  unsigned int v28; // [rsp+A8h] [rbp+10h]
  unsigned int v29; // [rsp+B0h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  Next = a1[1441].Next;
  v5 = 0LL;
  v27 = 0;
  v6 = (struct _KPRCB *)a1;
  v22.Next = 0LL;
  a1[1441].Next = 0LL;
  while ( Next )
  {
    v7 = Next;
    v8 = Next;
    Next = Next->Next;
    v23 = (__int64)&v7[-27];
    v9 = v7[-1].Next;
    v10 = &v9[6 * BYTE3(v7[46].Next)];
    do
    {
      if ( BYTE1(v9[2].Next) < 5u )
      {
        v11 = (volatile signed __int32 *)v9[4].Next;
        v12 = 0;
        if ( _interlockedbittestandset(v11, 7u) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
            {
              HvlNotifyLongSpinWait(v12);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( (*v11 & 0x80u) != 0 || _interlockedbittestandset(v11, 7u) );
        }
        if ( BYTE1(v9[2].Next) == 4 )
        {
          v13 = v9->Next;
          a1 = v9[1].Next;
          if ( v9->Next[1].Next != v9 || a1->Next != v9 )
            __fastfail(3u);
          a1->Next = v13;
          v13[1].Next = a1;
        }
        _InterlockedAnd(v11, 0xFFFFFF7F);
      }
      v9 += 6;
    }
    while ( v9 != v10 );
    v14 = v23;
    a2 = v28;
    a3 = v29;
    *(_BYTE *)(v23 + 566) = v28;
    *(_BYTE *)(v14 + 567) = v29;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      EtwTraceReadyThread(v14, v28, v29, a4);
      v14 = v23;
    }
    v15 = *(_DWORD *)(v14 + 120);
    if ( (v15 & 0x20000) == 0 || (v15 & 0x100000) != 0 )
    {
      v8->Next = v5;
      v5 = v8;
    }
    else
    {
      v16 = v27;
      v8->Next = v22.Next;
      v22.Next = v8;
      v22.Next = v8->Next;
      do
      {
        KiDeferredReadySingleThread(v6, (ULONG_PTR)&v8[-27], &v22, 0LL);
        v8 = v22.Next;
        ++v16;
        if ( v22.Next )
          v22.Next = v22.Next->Next;
        if ( (v16 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&v6->DeferredDispatchInterrupts, a2);
      }
      while ( v8 );
      v27 = v16;
    }
  }
  result = v6->DeferredDispatchInterrupts.TargetType;
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      v18 = 31;
      CurrentPrcb = KeGetCurrentPrcb();
      Level = v6->DeferredDispatchInterrupts.Level;
      SingleTargetIndex = v6->DeferredDispatchInterrupts.SingleTargetIndex;
      v24 = 6LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v26 = 0LL;
      if ( Level != 1 )
        v18 = 47;
      result = HalpInterruptSendIpi((unsigned int *)&v24, v18);
    }
    else
    {
      result = KiSendSoftwareInterruptAffinity(
                 &v6->DeferredDispatchInterrupts.MultipleTargetAffinity,
                 v6->DeferredDispatchInterrupts.Level);
    }
    if ( v6->DeferredDispatchInterrupts.TargetType == 2 )
    {
      *(_QWORD *)&v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
      result = (__int64)memset_0(
                          &v6->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
                          0,
                          sizeof(v6->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
    }
    v6->DeferredDispatchInterrupts.TargetType = 0;
    v6->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
  }
  for ( ; v5; result = KiInswapAndReadyThread(v6, &v21[-27], 0LL) )
  {
    v21 = v5;
    v5 = v5->Next;
  }
  return result;
}
