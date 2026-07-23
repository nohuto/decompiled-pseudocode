/*
 * XREFs of ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041E56C
 * Callers:
 *     ExMoveFastResourceOwnershipWithFlags @ 0x14041E540 (ExMoveFastResourceOwnershipWithFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpMoveSharedFastResourceOwnershipWithFlags(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR a3,
        char a4)
{
  unsigned __int64 CurrentThread; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v9; // rdx
  __int64 v10; // rax
  __int16 v11; // r9
  unsigned __int8 v12; // r8
  struct _KTHREAD *v13; // rdx
  ULONG_PTR v14; // r9
  unsigned __int8 v15; // bp
  unsigned int v16; // r14d
  __int64 v17; // r9
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rcx
  ULONG_PTR *v20; // rax
  struct _LIST_ENTRY *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v24; // eax
  __int64 v25; // rdx
  unsigned __int32 v26; // ett

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    goto LABEL_58;
  CurrentIrql = KeGetCurrentIrql();
  v9 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && !_bittest((const signed __int32 *)&v9->116, 0xAu) && !v9->WaitBlock[3].SpareLong )
LABEL_29:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v9 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 != BugCheckParameter2 )
    {
      if ( v10 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (*(_QWORD *)(a2 + 16) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(*(_BYTE *)(a2 + 37) & 2) << 15, 0LL);
  v11 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v11 & 1) == 0 )
LABEL_58:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  v12 = KeGetCurrentIrql();
  v13 = KeGetCurrentThread();
  if ( v12 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v12, 2uLL, 0LL);
  if ( v12 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v11 & 8) == 0 && (v13->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v12 && !_bittest((const signed __int32 *)&v13->116, 0xAu) && !v13->WaitBlock[3].SpareLong )
    goto LABEL_29;
  if ( (struct _KTHREAD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v13 )
    KeBugCheckEx(0x1C6u, 9uLL, a3, *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a3 + 37) & 2) == 0 )
  {
    v14 = *(_QWORD *)(a3 + 24);
    if ( v14 )
    {
      if ( v14 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a3, v14, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v13 )
        KeBugCheckEx(0x1C6u, 2uLL, a3, *(_QWORD *)(a3 + 24), 0LL);
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v15 = 1;
    if ( *(int *)(a2 + 32) > 1 )
      KeBugCheckEx(0x1C6u, 0x17uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v15 = 0;
  }
  *(_QWORD *)(a3 + 16) = CurrentThread | v15;
  *(_DWORD *)(a3 + 32) = 1;
  v16 = 0;
  *(_QWORD *)(a3 + 24) = BugCheckParameter2;
  *(_BYTE *)(a3 + 36) = *(_BYTE *)(a2 + 36);
  _disable();
  ExpRemoveFastOwnerEntryFromThreadList(a2);
  if ( v15 )
  {
    v16 = *(unsigned __int8 *)(a3 + 36);
    KxAcquireSpinLock((PKSPIN_LOCK)(CurrentThread + 1736));
    v20 = (ULONG_PTR *)(CurrentThread + 1744);
    v21 = *(struct _LIST_ENTRY **)(CurrentThread + 1744);
    if ( v21->Blink == (struct _LIST_ENTRY *)(CurrentThread + 1744) )
    {
      *(_QWORD *)a3 = v21;
      *(_QWORD *)(a3 + 8) = v20;
      v21->Blink = (struct _LIST_ENTRY *)a3;
      *v20 = a3;
      KxReleaseSpinLock((PKSPIN_LOCK)(CurrentThread + 1736));
      goto LABEL_48;
    }
LABEL_46:
    __fastfail(3u);
  }
  v18 = (unsigned __int64 *)(CurrentThread + 1720);
  v19 = *(_QWORD **)(CurrentThread + 1720);
  if ( v19[1] != CurrentThread + 1720 )
    goto LABEL_46;
  *(_QWORD *)a3 = v19;
  *(_QWORD *)(a3 + 8) = v18;
  v19[1] = a3;
  *v18 = a3;
LABEL_48:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v24 = *SchedulerAssist;
    do
    {
      v25 = v24;
      LODWORD(v25) = v24 & 0xFFDFFFFF;
      v26 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v24 & 0xFFDFFFFF, v24);
    }
    while ( v26 != v24 );
    if ( (v24 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v25, SchedulerAssist, v17);
  }
  _enable();
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  if ( v16 )
    KeAbMarkCrossThreadReleasable(CurrentPrcb, v16);
  if ( v15 )
    ObfReferenceObjectWithTag((PVOID)CurrentThread, 0x746C6644u);
}
