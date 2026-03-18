/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x140275660
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     DifExAcquireFastResourceExclusiveWrapper @ 0x14064EAE0 (DifExAcquireFastResourceExclusiveWrapper.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x1406CE8B0 (ExTryToAcquireResourceExclusiveLite.c)
 *     PspLockJobExclusiveUnlessRoot @ 0x14077D0F0 (PspLockJobExclusiveUnlessRoot.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1407F8824 (PspFreezeJobTree.c)
 *     PspGetCpuAndMemoryPartitionFromJobList @ 0x1407F8AC0 (PspGetCpuAndMemoryPartitionFromJobList.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407F9304 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobCpuPartition @ 0x1407F938C (PspSetJobCpuPartition.c)
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407F9D6C (PspSetPagePriorityLimitJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14095859C (PspSetEnergyTrackingStateJobTree.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x140AAEA78 (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobChain @ 0x140AAEBB4 (PspLockJobChain.c)
 *     PspSetBackgroundJobTree @ 0x140AF7AB8 (PspSetBackgroundJobTree.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(struct _KTHREAD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  int v6; // ebp
  char v7; // r15
  char v8; // al
  __int16 v9; // r8
  unsigned __int8 v10; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // r14
  unsigned __int64 *p_ThreadLock; // r13
  char v17; // cl
  _QWORD *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v23; // eax
  __int64 v24; // rdx
  unsigned __int32 v25; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( a3 )
  {
    v6 = 8;
    v7 = 9;
    v8 = 1;
  }
  else
  {
    v6 = 0;
    v8 = 0;
    v7 = 1;
  }
  v9 = WORD1(a1->SListFaultAddress);
  v10 = (v8 ^ 1) + 1;
  if ( (v9 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)a1, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v12 = KeGetCurrentThread();
  if ( CurrentIrql > v10 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v10, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v9 & 8) == 0 && (v12->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v12->MiscFlags & 0x400) == 0 && !v12->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v15 = (_BYTE *)KeAbPreAcquire(a1, 0LL);
  p_ThreadLock = &a1->ThreadLock;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 1LL, 0LL) )
  {
    LOBYTE(v4) = 0;
    *(_QWORD *)&a1->CurrentRunTime = (unsigned __int64)CurrentThread | v4;
    LODWORD(a1->StateSaveArea) = 1;
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        v15[33] |= 2u;
      else
        v15[10] = 1;
      if ( (KiAbpGlobalState & 1) != 0 )
        v17 = (4 * ((4 * v15[36]) | v15[-48 * (v15[36] & 0x7F) - 1] & 3)) | 3;
      else
        v17 = (2 * (v15[8] & 0x3F)) | 1;
      BYTE4(a1->StateSaveArea) = v17;
    }
    _disable();
    p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
    SparePtr = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
      __fastfail(3u);
    *p_ThreadLock = (unsigned __int64)SparePtr;
    a1->CycleTime = (volatile unsigned __int64)p_LastXStateSaveDebugInfo;
    SparePtr[1] = (struct _KTHREAD *)p_ThreadLock;
    *p_LastXStateSaveDebugInfo = p_ThreadLock;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v23 = *SchedulerAssist;
      do
      {
        v24 = v23;
        LODWORD(v24) = v23 & 0xFFDFFFFF;
        v25 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v23 & 0xFFDFFFFF, v23);
      }
      while ( v25 != v23 );
      if ( (v23 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v24, SchedulerAssist, v14);
    }
    _enable();
    return 1;
  }
  if ( *(struct _KTHREAD **)&a1->CurrentRunTime == CurrentThread )
  {
    ++LODWORD(a1->StateSaveArea);
    if ( v15 )
    {
      KeAbPostReleaseEx(a1, (unsigned __int64)v15, v13, v14);
      return 1;
    }
    return 1;
  }
  if ( v6 )
  {
    ExpAcquireFastResourceExclusiveSlow(a1, v7);
    return 1;
  }
  if ( v15 )
    KeAbPostReleaseEx(a1, (unsigned __int64)v15, v13, v14);
  return 0;
}
