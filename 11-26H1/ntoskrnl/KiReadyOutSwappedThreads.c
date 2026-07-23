/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14037D574
 * Callers:
 *     KiInSwapProcesses @ 0x140485E14 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140493F34 (KiOutSwapProcesses.c)
 * Callees:
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRequestProcessInSwap @ 0x14031178C (KiRequestProcessInSwap.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 */

__int64 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // r14
  ULONG_PTR v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  volatile signed __int32 *v18; // rdi
  signed __int64 *v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  struct _SINGLE_LIST_ENTRY v22; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = (ULONG_PTR)(v5 - 27);
    v7 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v6 + 64) );
    }
    KiEnterDeferredReadyState(v6);
    *(_QWORD *)(v6 + 64) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, *(_BYTE *)(v6 + 566), *(_BYTE *)(v6 + 567), 0);
    v11 = *(_DWORD *)(v6 + 120);
    if ( (v11 & 0x20000) != 0 )
    {
      if ( (v11 & 0x100000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 184) + 264LL), 8u) & 7) != 0 )
        {
          v18 = *(volatile signed __int32 **)(v6 + 184);
          KiAcquireKobjectLockSafe(v18, v8, v10);
          if ( (v18[66] & 7) != 0 )
          {
LABEL_23:
            KiRequestProcessInSwap(v6, (__int64)v18);
            continue;
          }
          _InterlockedAnd(v18, 0xFFFFFF7F);
        }
      }
      v22.Next = 0LL;
      KiDeferredReadySingleThread(CurrentPrcb, v6, &v22, 0LL);
      Next = v22.Next;
      v13 = 1;
      if ( v22.Next )
      {
        v22.Next = v22.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v22, 0LL);
          Next = v22.Next;
          ++v13;
          if ( v22.Next )
            v22.Next = v22.Next->Next;
          if ( (v13 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    else
    {
      v18 = *(volatile signed __int32 **)(v6 + 184);
      KiAcquireKobjectLockSafe(v18, v8, v10);
      if ( (v18[66] & 7) != 0 )
        goto LABEL_23;
      _InterlockedAdd(v18 + 66, 8u);
      _InterlockedAnd(v18, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x14u);
      *(_BYTE *)(v6 + 388) = 6;
      v19 = (signed __int64 *)(v6 + 216);
      _m_prefetchw(&qword_140F26B70);
      v20 = qword_140F26B70;
      do
      {
        *v19 = v20;
        v21 = v20;
        v20 = _InterlockedCompareExchange64(&qword_140F26B70, (signed __int64)v19, v20);
      }
      while ( v20 != v21 );
      if ( !v20 )
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
    }
  }
  while ( v5 != a1 );
  LOBYTE(v14) = a2;
  return KiCheckForThreadDispatch(CurrentPrcb, v14, v15, v16);
}
