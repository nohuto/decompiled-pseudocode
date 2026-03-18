/*
 * XREFs of KiProcessSecondarySignalList @ 0x1405F09E0
 * Callers:
 *     <none>
 * Callees:
 *     KiProcessDisconnectList @ 0x1402C3660 (KiProcessDisconnectList.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405F0988 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405F0AB8 (KiReleaseSecondarySignalListLock.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _LIST_ENTRY *v4; // rcx
  __int64 v5; // rax
  unsigned __int8 v6[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+30h] [rbp-10h]

  v6[0] = 0;
  Flink = (struct _LIST_ENTRY *)&v7;
  v7 = (__int64)&v7;
  KiAcquireSecondarySignalListLock(v6);
  if ( *(struct _KTHREAD **)&KiDpcCorralLock.Timer.Processor != (struct _KTHREAD *)&KiDpcCorralLock.Timer.Processor )
  {
    v4 = Flink;
    if ( *(__int64 **)(v7 + 8) != &v7
      || (__int64 *)Flink->Flink != &v7
      || *(struct _KTHREAD **)(*(_QWORD *)&KiDpcCorralLock.Timer.Processor + 8LL) != (struct _KTHREAD *)&KiDpcCorralLock.Timer.Processor
      || KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor
      || (Flink->Flink = (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor,
          Flink = KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink,
          KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink->Flink = (struct _LIST_ENTRY *)&v7,
          v5 = *(_QWORD *)&KiDpcCorralLock.Timer.Processor,
          KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink = v4,
          *(struct _KTHREAD **)(*(_QWORD *)&KiDpcCorralLock.Timer.Processor + 8LL) != (struct _KTHREAD *)&KiDpcCorralLock.Timer.Processor)
      || (unsigned __int16 *)v4->Flink != &KiDpcCorralLock.Timer.Processor )
    {
      __fastfail(3u);
    }
    v4->Flink = *(struct _LIST_ENTRY **)&KiDpcCorralLock.Timer.Processor;
    *(_QWORD *)(v5 + 8) = v4;
    KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor;
    *(_QWORD *)&KiDpcCorralLock.Timer.Processor = &KiDpcCorralLock.Timer.Processor;
  }
  LOBYTE(v4) = v6[0];
  LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 0;
  KiReleaseSecondarySignalListLock(v4);
  KiProcessDisconnectList(&v7);
}
