/*
 * XREFs of KiProcessSecondarySignalList @ 0x1405F3350
 * Callers:
 *     <none>
 * Callees:
 *     KiProcessDisconnectList @ 0x14030E320 (KiProcessDisconnectList.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405F32F8 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405F3428 (KiReleaseSecondarySignalListLock.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  unsigned __int8 v6[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+30h] [rbp-10h]

  v6[0] = 0;
  Blink = (struct _LIST_ENTRY *)&v7;
  v7 = (__int64)&v7;
  KiAcquireSecondarySignalListLock(v6);
  if ( (unsigned __int8 *)KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink != &KiDpcCorralLock.WaitBlockFill11[48] )
  {
    v4 = Blink;
    if ( *(__int64 **)(v7 + 8) != &v7
      || (__int64 *)Blink->Flink != &v7
      || (unsigned __int8 *)KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink->Blink != &KiDpcCorralLock.WaitBlockFill11[48]
      || KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink->Flink != (struct _LIST_ENTRY *)&KiDpcCorralLock.WaitBlockFill11[48]
      || (Blink->Flink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry,
          Blink = KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink,
          KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink->Flink = (struct _LIST_ENTRY *)&v7,
          Flink = KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink,
          KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink = v4,
          (unsigned __int8 *)KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink->Blink != &KiDpcCorralLock.WaitBlockFill11[48])
      || (unsigned __int8 *)v4->Flink != &KiDpcCorralLock.WaitBlockFill11[48] )
    {
      __fastfail(3u);
    }
    v4->Flink = KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink;
    Flink->Blink = v4;
    KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry;
    KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry;
  }
  LOBYTE(v4) = v6[0];
  LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 0;
  KiReleaseSecondarySignalListLock(v4);
  KiProcessDisconnectList(&v7);
}
