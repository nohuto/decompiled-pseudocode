/*
 * XREFs of KiAddThreadToScbQueue @ 0x1404A57FC
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402261D0 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiActivateScb @ 0x140239EA4 (KiActivateScb.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140337CEC (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 */

void __fastcall KiAddThreadToScbQueue(struct _KPRCB *a1, struct _KSCB *a2, __int64 a3, int a4)
{
  int v5; // ebp
  struct _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rdx
  _KSCB *Parent; // rax

  v5 = *(char *)(a3 + 195);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a3 + 968), 0x40000u);
  KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(a3);
  if ( !a2->Rank )
  {
    do
    {
      Parent = a2->Parent;
      if ( !Parent )
        break;
      a2 = a2->Parent;
    }
    while ( !Parent->Rank );
  }
  v9 = (struct _LIST_ENTRY *)(a3 + 216);
  v10 = &a2->ReadyListHead[v5];
  if ( a4 )
  {
    Flink = v10->Flink;
    if ( v10->Flink->Blink != v10 )
      goto LABEL_6;
    v9->Flink = Flink;
    *(_QWORD *)(a3 + 224) = v10;
    Flink->Blink = v9;
    v10->Flink = v9;
  }
  else
  {
    Blink = v10->Blink;
    if ( Blink->Flink != v10 )
LABEL_6:
      __fastfail(3u);
    v9->Flink = v10;
    *(_QWORD *)(a3 + 224) = Blink;
    Blink->Flink = v9;
    v10->Blink = v9;
  }
  *(_DWORD *)(a3 + 116) |= 0x2000u;
  *(_QWORD *)(a3 + 944) = a2;
  a2->ReadySummary |= 1 << v5;
  KiActivateScb((__int64)a1, (__int64)a2);
  KiInsertNonMaxOverQuotaScb(a2, a1, 1u);
}
