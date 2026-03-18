/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x140456410
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     DifExAcquireFastResourceSharedStarveExclusiveWrapper @ 0x14064EC60 (DifExAcquireFastResourceSharedStarveExclusiveWrapper.c)
 * Callees:
 *     ExpAddFastOwnerEntryToThreadList @ 0x1402766A0 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAbEncodeLockHandle @ 0x140456960 (KeAbEncodeLockHandle.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(struct _KTHREAD *a1, ULONG_PTR BugCheckParameter2, char a3)
{
  ULONG_PTR v3; // r9
  char v6; // r15
  char v7; // si
  unsigned __int8 v8; // r8
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // ecx
  struct _KTHREAD *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // rtt
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v20; // eax
  __int64 v21; // rdx
  unsigned __int32 v22; // ett

  v3 = WORD1(a1->SListFaultAddress);
  v6 = 4;
  if ( a3 )
    v6 = 12;
  v7 = 1;
  v8 = 2 - ((v6 & 8) != 0);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)a1, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v8, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v3 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 37) & 2) == 0 )
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v3 )
    {
      if ( (struct _KTHREAD *)v3 != a1 )
        KeBugCheckEx(0x1C6u, 2uLL, BugCheckParameter2, v3, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
        KeBugCheckEx(0x1C6u, 2uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 24), 0LL);
    }
  }
  v11 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( !v11 || (*(_BYTE *)(BugCheckParameter2 + 37) & 4) != 0 )
  {
    v12 = KeGetCurrentThread();
    v13 = 0LL;
    if ( !*(_BYTE *)(BugCheckParameter2 + 36) )
      v13 = KeAbPreAcquire((__int64)a1, 0LL, (v6 & 8) == 0, (struct _KLOCK_ENTRIES *)v3);
    do
    {
      _m_prefetchw(a1);
      if ( (*(_QWORD *)&a1->Header.Lock & 1) != 0 )
        return ExpAcquireFastResourceSharedSlow(a1, BugCheckParameter2, (unsigned __int32 *)v13, (__int64)v12, v6);
      v14 = *(_QWORD *)&a1->Header.Lock;
    }
    while ( v14 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&a1->Header.Lock,
                     *(_QWORD *)&a1->Header.Lock ^ (*(_QWORD *)&a1->Header.Lock ^ (*(_QWORD *)&a1->Header.Lock + 4LL)) & 0xFFFFFFFFFFFFFFFCuLL,
                     *(_QWORD *)&a1->Header.Lock) );
    if ( (unsigned __int64 *)BugCheckParameter2 != &a1->ThreadLock )
      *(_QWORD *)(BugCheckParameter2 + 24) = a1;
    *(_QWORD *)(BugCheckParameter2 + 16) = v12;
    *(_DWORD *)(BugCheckParameter2 + 32) = 1;
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v13 + 33) |= 2u;
      else
        *(_BYTE *)(v13 + 10) = 1;
      *(_BYTE *)(BugCheckParameter2 + 36) = KeAbEncodeLockHandle(v13);
    }
    _disable();
    p_LastXStateSaveDebugInfo = &v12[1].LastXStateSaveDebugInfo;
    SparePtr = (struct _KTHREAD **)v12[1].WaitBlock[3].SparePtr;
    if ( SparePtr[1] != (struct _KTHREAD *)&v12[1].LastXStateSaveDebugInfo )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = SparePtr;
    *(_QWORD *)(BugCheckParameter2 + 8) = p_LastXStateSaveDebugInfo;
    SparePtr[1] = (struct _KTHREAD *)BugCheckParameter2;
    *p_LastXStateSaveDebugInfo = BugCheckParameter2;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v20 = *SchedulerAssist;
      do
      {
        v21 = v20;
        LODWORD(v21) = v20 & 0xFFDFFFFF;
        v22 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v20 & 0xFFDFFFFF, v20);
      }
      while ( v22 != v20 );
      if ( (v20 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v21, SchedulerAssist, v3);
    }
    _enable();
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 32) = v11 + 1;
  }
  return v7;
}
