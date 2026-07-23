/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1404DFF34
 * Callers:
 *     NtSetTimerResolution @ 0x140A737C0 (NtSetTimerResolution.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpInsertTimerResolutionEntry(struct _LIST_ENTRY *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  Flink = ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink;
  v4 = a1 + 90;
  if ( ($08E725EC6134F01F525383E5528526A8 *)ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink->Blink != &ExpSysDbgLock.320 )
    __fastfail(3u);
  v4->Flink = ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink;
  v4->Blink = (struct _LIST_ENTRY *)&ExpSysDbgLock.320;
  Flink->Blink = v4;
  ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v2);
}
