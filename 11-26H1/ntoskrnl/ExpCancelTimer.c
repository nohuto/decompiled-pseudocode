/*
 * XREFs of ExpCancelTimer @ 0x1406CECB0
 * Callers:
 *     ExTimerRundown @ 0x14051A404 (ExTimerRundown.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x1406CF780 (NtCancelTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x140467790 (KeRemoveQueueApc.c)
 */

char __fastcall ExpCancelTimer(PKTIMER a1, _WORD *a2, _DWORD *a3)
{
  struct _LIST_ENTRY *Blink; // rbp
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v8; // rax
  char result; // al

  *a3 = 0;
  *a2 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[79]);
    Flink = a1[3].TimerListEntry.Flink;
    if ( Flink->Blink != &a1[3].TimerListEntry || (v8 = a1[3].TimerListEntry.Blink, v8->Flink != &a1[3].TimerListEntry) )
      __fastfail(3u);
    v8->Flink = Flink;
    Flink->Blink = v8;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[79]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || KeRemoveQueueDpcEx((int *)&a1[2].TimerListEntry, 0) )
    {
      ++*a2;
    }
    result = KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead);
    if ( result )
      ++*a3;
  }
  else
  {
    result = KeCancelTimer(a1);
  }
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
