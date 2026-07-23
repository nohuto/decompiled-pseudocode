/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x1404FF760
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePrivateFixupEntryForSystemImage(struct _LIST_ENTRY *BugCheckParameter2)
{
  struct _KTHREAD *v2; // rdi
  KIRQL v3; // al
  struct _KTHREAD *Blink; // rbx
  KIRQL v5; // dl
  struct _KTHREAD *v6; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
  Blink = (struct _KTHREAD *)stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink;
  v5 = v3;
  if ( (unsigned __int8 *)stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink != &stru_140E2D2D0.SavedApcStateFill[24] )
  {
    while ( 1 )
    {
      v2 = Blink;
      v6 = *(struct _KTHREAD **)&Blink->Header.Lock;
      if ( BugCheckParameter2 == Blink->Header.WaitListHead.Blink )
        break;
      Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
      if ( v6 == (struct _KTHREAD *)&stru_140E2D2D0.SavedApcStateFill[24] )
        goto LABEL_4;
    }
    if ( (struct _KTHREAD *)v6->Header.WaitListHead.Flink != Blink
      || (Flink = Blink->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != Blink) )
    {
      __fastfail(3u);
    }
    Flink->Flink = (struct _LIST_ENTRY *)v6;
    v6->Header.WaitListHead.Flink = Flink;
  }
LABEL_4:
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0, v5);
  if ( Blink == (struct _KTHREAD *)&stru_140E2D2D0.SavedApcStateFill[24] )
    KeBugCheckEx(0x1Au, 0x1011uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
