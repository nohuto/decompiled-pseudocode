/*
 * XREFs of ExDisownFastResource @ 0x1404F1ED0
 * Callers:
 *     ExMoveFastResourceOwnershipWithFlags @ 0x14041E540 (ExMoveFastResourceOwnershipWithFlags.c)
 *     DifExDisownFastResourceWrapper @ 0x140654C20 (DifExDisownFastResourceWrapper.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  KSPIN_LOCK *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v5; // rdx
  __int64 v6; // rax
  ULONG_PTR *v7; // rax
  KSPIN_LOCK v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett

  CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    a2 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v5 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v5 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 != BugCheckParameter2 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (*(_QWORD *)(a2 + 16) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  _disable();
  if ( *(int *)(a2 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  ExpRemoveFastOwnerEntryFromThreadList((_QWORD *)a2);
  KxAcquireSpinLock(CurrentThread + 217);
  *(_QWORD *)(a2 + 16) |= 1uLL;
  v7 = CurrentThread + 218;
  v8 = CurrentThread[218];
  v9 = *(unsigned __int8 *)(a2 + 36);
  if ( *(KSPIN_LOCK **)(v8 + 8) != CurrentThread + 218 )
    __fastfail(3u);
  *(_QWORD *)a2 = v8;
  *(_QWORD *)(a2 + 8) = v7;
  *(_QWORD *)(v8 + 8) = a2;
  *v7 = a2;
  KxReleaseSpinLock(CurrentThread + 217);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v13 = *SchedulerAssist;
    do
    {
      v14 = v13;
      LODWORD(v14) = v13 & 0xFFDFFFFF;
      v15 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
    }
    while ( v15 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v10);
  }
  _enable();
  if ( (_BYTE)v9 )
    KeAbMarkCrossThreadReleasable(CurrentPrcb, v9);
  return ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
}
