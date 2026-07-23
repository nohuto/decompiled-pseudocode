/*
 * XREFs of ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 *     PpmTryAcquireLock @ 0x1404C2A18 (PpmTryAcquireLock.c)
 *     MiDemoteSlabEntries @ 0x140500334 (MiDemoteSlabEntries.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiSetSystemPriorityThread(ULONG_PTR BugCheckParameter1, int a2)
{
  int v2; // esi
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  char v6; // al
  char v7; // si
  struct _KPRCB *CurrentPrcb; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v10; // rdx
  struct _SINGLE_LIST_ENTRY v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 31;
  v11.Next = 0LL;
  v3 = BugCheckParameter1;
  if ( a2 <= 31 )
    v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, 2LL);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  v6 = *(_BYTE *)(v2 + v3 + 824);
  if ( v6 == -1 )
    KeBugCheckEx(0x157u, v3, v2, 1uLL, 0LL);
  *(_BYTE *)(v2 + v3 + 824) = v6 + 1;
  *(_DWORD *)(v3 + 856) |= 1 << v2;
  if ( *(char *)(v3 + 195) < v2 )
    KiSetPriorityThread(v3, &v11, (unsigned __int64 *)(unsigned int)v2);
  *(_QWORD *)(v3 + 64) = 0LL;
  v7 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  Next = v11.Next;
  if ( v11.Next )
  {
    v11.Next = v11.Next->Next;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v11, 0LL);
      Next = v11.Next;
      ++v7;
      if ( v11.Next )
        v11.Next = v11.Next->Next;
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  LOBYTE(v10) = CurrentIrql;
  KiCheckForThreadDispatch((__int64)CurrentPrcb, v10);
}
