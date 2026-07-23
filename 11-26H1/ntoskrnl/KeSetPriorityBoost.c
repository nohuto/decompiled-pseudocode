/*
 * XREFs of KeSetPriorityBoost @ 0x14037D350
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     FsRtlpDoBoost @ 0x1404DC574 (FsRtlpDoBoost.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebp
  char v5; // di
  char v6; // r13
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _SINGLE_LIST_ENTRY v17; // [rsp+50h] [rbp+8h] BYREF

  result = (__int64)&unk_140FC9F40;
  v3 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &unk_140FC9F40 )
  {
    v5 = 0;
    v6 = 0;
    v17.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= v3 )
      goto LABEL_34;
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 72);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < v3 )
    {
      v6 = 1;
      v11 = (unsigned int)KiLockQuantumTarget;
      v12 = (unsigned int)(char)v3;
      if ( (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4) < (int)v12 )
        *(_WORD *)(a1 + 518) ^= (*(_WORD *)(a1 + 518) ^ (16 * (char)v3)) & 0xFF0;
      KiSetPriorityThread(a1, &v17, v12);
      v13 = *(_QWORD *)(a1 + 32);
      if ( v10 > v13 || v13 - v10 < v11 )
        *(_QWORD *)(a1 + 32) = v10 + v11;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v6 )
    {
      Next = v17.Next;
      if ( v17.Next )
      {
        v17.Next = v17.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v17, 0LL);
          Next = v17.Next;
          ++v5;
          if ( v17.Next )
            v17.Next = v17.Next->Next;
          if ( (v5 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      return KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql, v15, v16);
    }
    else
    {
LABEL_34:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
