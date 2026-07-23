/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x1404A8C20
 * Callers:
 *     HalpInvokeIsrForGsiv @ 0x1404A8BC0 (HalpInvokeIsrForGsiv.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405F32F8 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405F3428 (KiReleaseSecondarySignalListLock.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(unsigned int a1, int a2, int *a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int128 *v4; // rdi
  char v5; // si
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  bool v9; // zf
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  CurrentIrql = KeGetCurrentIrql();
  v4 = (__int128 *)v10;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1u, a1, (a2 & 0x100000) != 0, v4, a3);
  if ( CurrentIrql )
  {
    v11 = 0;
    if ( *(__int128 **)v4 != v4 )
    {
      KiAcquireSecondarySignalListLock(&v11);
      Blink = KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink;
      Flink = KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink;
      if ( (unsigned __int8 *)KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink->Blink != &KiDpcCorralLock.WaitBlockFill11[48]
        || KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink->Flink != (struct _LIST_ENTRY *)&KiDpcCorralLock.WaitBlockFill11[48]
        || *(__int128 **)(*(_QWORD *)v4 + 8LL) != v4
        || **((__int128 ***)v4 + 1) != v4 )
      {
        __fastfail(3u);
      }
      v9 = LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) == 0;
      KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink->Flink = (struct _LIST_ENTRY *)v4;
      KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 1);
      KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink->Flink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry;
      *((_QWORD *)v4 + 1) = Blink;
      if ( v9 )
      {
        LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 1;
        KiInsertQueueDpc((ULONG_PTR)&KiDpcCorralLock.Timer.Dpc, 0LL, 0LL, 0LL, 0);
      }
      LOBYTE(Flink) = v11;
      KiReleaseSecondarySignalListLock(Flink);
    }
  }
  return v5;
}
