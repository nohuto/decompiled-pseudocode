/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14037B7C4
 * Callers:
 *     KiInSwapProcesses @ 0x14048C2D4 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14049A3E4 (KiOutSwapProcesses.c)
 * Callees:
 *     EtwTraceReadyThread @ 0x140218760 (EtwTraceReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x14022E6D0 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRequestProcessInSwap @ 0x1402C6AEC (KiRequestProcessInSwap.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
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
      _m_prefetchw(&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup);
      v20 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup;
      do
      {
        *v19 = v20;
        v21 = v20;
        v20 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup,
                (signed __int64)v19,
                v20);
      }
      while ( v20 != v21 );
      if ( !v20 )
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
    }
  }
  while ( v5 != a1 );
  LOBYTE(v14) = a2;
  return KiCheckForThreadDispatch(CurrentPrcb, v14, v15, v16);
}
