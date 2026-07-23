/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     DifExAcquireFastResourceSharedStarveExclusiveWrapper @ 0x140652840 (DifExAcquireFastResourceSharedStarveExclusiveWrapper.c)
 * Callees:
 *     KeAbEncodeLockHandle @ 0x14025FF70 (KeAbEncodeLockHandle.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140275C10 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(struct _KTHREAD *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  ULONG_PTR v3; // r9
  int v6; // r15d
  char v7; // si
  unsigned __int8 v8; // r8
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // ecx
  struct _KTHREAD *v12; // r14
  __int64 v13; // rbp
  _BOOL8 v14; // r8
  __int64 v15; // rtt
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  unsigned __int32 v23; // ett

  v3 = WORD1(BugCheckParameter2->SListFaultAddress);
  v6 = 4;
  if ( a3 )
    v6 = 12;
  v7 = 1;
  v8 = 2 - ((v6 & 8) != 0);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, v8, 0LL);
  if ( (unsigned __int8)CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v3 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !(_BYTE)CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( v3 )
    {
      if ( (struct _KTHREAD *)v3 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v3, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
        KeBugCheckEx(0x1C6u, 2uLL, a2, *(_QWORD *)(a2 + 24), 0LL);
    }
  }
  v11 = *(_DWORD *)(a2 + 32);
  if ( !v11 || (*(_BYTE *)(a2 + 37) & 4) != 0 )
  {
    v12 = KeGetCurrentThread();
    v13 = 0LL;
    v14 = (v6 & 8) == 0;
    if ( !*(_BYTE *)(a2 + 36) )
      v13 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    do
    {
      _m_prefetchw(BugCheckParameter2);
      if ( (*(_QWORD *)&BugCheckParameter2->Header.Lock & 1) != 0 )
        return ExpAcquireFastResourceSharedSlow(BugCheckParameter2, v6);
      v15 = *(_QWORD *)&BugCheckParameter2->Header.Lock;
    }
    while ( v15 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&BugCheckParameter2->Header.Lock,
                     *(_QWORD *)&BugCheckParameter2->Header.Lock ^ (*(_QWORD *)&BugCheckParameter2->Header.Lock ^ (*(_QWORD *)&BugCheckParameter2->Header.Lock + 4LL)) & 0xFFFFFFFFFFFFFFFCuLL,
                     *(_QWORD *)&BugCheckParameter2->Header.Lock) );
    if ( (unsigned __int64 *)a2 != &BugCheckParameter2->ThreadLock )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_QWORD *)(a2 + 16) = v12;
    *(_DWORD *)(a2 + 32) = 1;
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v13 + 33) |= 2u;
      else
        *(_BYTE *)(v13 + 10) = 1;
      *(_BYTE *)(a2 + 36) = KeAbEncodeLockHandle(v13, CurrentIrql, v14);
    }
    _disable();
    p_LastXStateSaveDebugInfo = &v12[1].LastXStateSaveDebugInfo;
    SparePtr = (struct _KTHREAD **)v12[1].WaitBlock[3].SparePtr;
    if ( SparePtr[1] != (struct _KTHREAD *)&v12[1].LastXStateSaveDebugInfo )
      __fastfail(3u);
    *(_QWORD *)a2 = SparePtr;
    *(_QWORD *)(a2 + 8) = p_LastXStateSaveDebugInfo;
    SparePtr[1] = (struct _KTHREAD *)a2;
    *p_LastXStateSaveDebugInfo = a2;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        LODWORD(v22) = v21 & 0xFFDFFFFF;
        v23 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v23 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v22, SchedulerAssist, v3);
    }
    _enable();
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v11 + 1;
  }
  return v7;
}
