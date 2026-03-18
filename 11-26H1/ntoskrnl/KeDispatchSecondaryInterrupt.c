/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x1404AF590
 * Callers:
 *     HalpInvokeIsrForGsiv @ 0x1404AF530 (HalpInvokeIsrForGsiv.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405F0988 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405F0AB8 (KiReleaseSecondarySignalListLock.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(unsigned int a1, int a2, int *a3)
{
  unsigned __int8 CurrentIrql; // bl
  struct _LIST_ENTRY *v4; // rdi
  char v5; // si
  __int64 v7; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v9; // zf
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  CurrentIrql = KeGetCurrentIrql();
  v4 = (struct _LIST_ENTRY *)v10;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1u, a1, (a2 & 0x100000) != 0, v4, a3);
  if ( CurrentIrql )
  {
    v11 = 0;
    if ( v4->Flink != v4 )
    {
      KiAcquireSecondarySignalListLock(&v11);
      v7 = *(_QWORD *)&KiDpcCorralLock.Timer.Processor;
      Flink = KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&KiDpcCorralLock.Timer.Processor + 8LL) != (struct _KTHREAD *)&KiDpcCorralLock.Timer.Processor
        || KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor
        || v4->Flink->Blink != v4
        || v4->Blink->Flink != v4 )
      {
        __fastfail(3u);
      }
      v9 = LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) == 0;
      KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink->Flink = v4;
      KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink = v4->Blink;
      KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink->Flink = (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor;
      v4->Blink = Flink;
      if ( v9 )
      {
        LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 1;
        KiInsertQueueDpc((ULONG_PTR)&KiDpcCorralLock.WaitBlock[0].Thread, 0LL, 0LL, 0LL, 0);
      }
      LOBYTE(v7) = v11;
      KiReleaseSecondarySignalListLock(v7);
    }
  }
  return v5;
}
