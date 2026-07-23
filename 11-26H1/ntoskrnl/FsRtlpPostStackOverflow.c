/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1405BA9A0
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1405BA840 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1405BA860 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x14030DBC0 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x1403F07C0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403F0C80 (KeIsThreadRunning.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall FsRtlpPostStackOverflow(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  unsigned __int8 *Pool2; // rbx
  __int64 v9; // r8
  PVOID *v10; // rdi
  _QWORD *v11; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 CurrentThread; // rsi
  char IsThreadRunning; // al
  int v17; // edx
  unsigned __int8 **v18; // rcx

  v5 = a4;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x42uLL);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&VslpReservedTransferLock.PropagateBoostsEntry, Executive, 0, 0, 0LL);
    Pool2 = &VslpReservedTransferLock.PriorityFloorCounts[16];
  }
  *((_QWORD *)Pool2 + 5) = a1;
  *((_QWORD *)Pool2 + 6) = a2;
  *((_QWORD *)Pool2 + 4) = a3;
  v10 = &VslpReservedTransferLock.SchedulerApc.Reserved[8 * v5];
  *((_QWORD *)Pool2 + 2) = FsRtlStackOverflowRead;
  *((_QWORD *)Pool2 + 3) = Pool2;
  *(_QWORD *)Pool2 = 0LL;
  v11 = v10 + 1;
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
  if ( (_QWORD *)*v11 == v11
    || *((_DWORD *)v10 + 10) >= *((_DWORD *)v10 + 11)
    || *(PVOID **)(CurrentThread + 232) == v10 && *(_BYTE *)(CurrentThread + 643) == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v10, (__int64)Pool2) )
  {
    v17 = *((_DWORD *)v10 + 1);
    *((_DWORD *)v10 + 1) = v17 + 1;
    v18 = (unsigned __int8 **)v10[4];
    if ( *v18 != (unsigned __int8 *)(v10 + 3) )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v10 + 3;
    *((_QWORD *)Pool2 + 1) = v18;
    *v18 = Pool2;
    v10[4] = Pool2;
    if ( !v17 && (_QWORD *)*v11 != v11 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v10);
  }
  else
  {
    *(_QWORD *)Pool2 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
