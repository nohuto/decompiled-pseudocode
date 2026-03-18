/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1405B8130
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1405B7FD0 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1405B7FF0 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140268108 (EtwTraceEnqueueWork.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiWakeOtherQueueWaiters @ 0x1402C2F00 (KiWakeOtherQueueWaiters.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KiWakeQueueWaiter @ 0x1403F6E10 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403F72D0 (KeIsThreadRunning.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall FsRtlpPostStackOverflow(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  $6CDADE90C2B69D9F3FFCADA247B6EB8A *Pool2; // rbx
  __int64 v9; // r8
  _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 CurrentThread; // rsi
  char IsThreadRunning; // al
  int Flink_high; // edx
  _LIST_ENTRY **p_Flink; // rcx

  v5 = a4;
  Pool2 = ($6CDADE90C2B69D9F3FFCADA247B6EB8A *)ExAllocatePool2(0x42uLL);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&VslpReservedTransferLock.ThreadListEntry, Executive, 0, 0, 0LL);
    Pool2 = &VslpReservedTransferLock.792;
  }
  *(_QWORD *)&Pool2[20].AbWaitEntryCount = a1;
  *(_QWORD *)&Pool2[24].AbWaitEntryCount = a2;
  *(_QWORD *)&Pool2[16].AbWaitEntryCount = a3;
  v10 = (_LIST_ENTRY *)&VslpReservedTransferLock.SavedApcStateFill[64 * v5 + 32];
  *(_QWORD *)&Pool2[8].AbWaitEntryCount = FsRtlStackOverflowRead;
  *(_QWORD *)&Pool2[12].AbWaitEntryCount = Pool2;
  *(_QWORD *)&Pool2->AbWaitEntryCount = 0LL;
  p_Blink = &v10->Blink;
  CurrentIrql = KeGetCurrentIrql();
  v13 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)Pool2, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v10, v13, v9);
  if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
    || LODWORD(v10[2].Blink) >= HIDWORD(v10[2].Blink)
    || *(_LIST_ENTRY **)(CurrentThread + 232) == v10 && *(_BYTE *)(CurrentThread + 643) == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v10, (__int64)Pool2) )
  {
    Flink_high = HIDWORD(v10->Flink);
    HIDWORD(v10->Flink) = Flink_high + 1;
    p_Flink = &v10[2].Flink->Flink;
    if ( *p_Flink != (_LIST_ENTRY *)&v10[1].Blink )
      __fastfail(3u);
    *(_QWORD *)&Pool2->AbWaitEntryCount = (char *)v10 + 24;
    *(_QWORD *)&Pool2[4].AbWaitEntryCount = p_Flink;
    *p_Flink = (_LIST_ENTRY *)Pool2;
    v10[2].Flink = (struct _LIST_ENTRY *)Pool2;
    if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v10);
  }
  else
  {
    *(_QWORD *)&Pool2->AbWaitEntryCount = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
