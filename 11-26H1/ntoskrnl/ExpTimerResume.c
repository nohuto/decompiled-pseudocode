/*
 * XREFs of ExpTimerResume @ 0x1404C03C4
 * Callers:
 *     ExRemoveVirtualizedTimer @ 0x1404C034C (ExRemoveVirtualizedTimer.c)
 *     ExWakeTimersResume @ 0x1404F5668 (ExWakeTimersResume.c)
 *     PspResumeProcessVirtualTimers @ 0x140617104 (PspResumeProcessVirtualTimers.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 */

char __fastcall ExpTimerResume(PKTIMER Timer, __int64 a2)
{
  char Processor; // di
  ULONG Dpc; // r8d
  LARGE_INTEGER v6; // rdx
  char v7; // r10

  Processor = Timer[3].Processor;
  Dpc = 0;
  if ( Processor )
  {
    v6 = *(LARGE_INTEGER *)&Timer[4].Processor;
    if ( Processor == 3 )
    {
      v6.QuadPart = a2 - v6.QuadPart;
      if ( v6.HighPart >= 0 )
        v6.QuadPart = 0LL;
    }
    v7 = (__int64)Timer[4].Dpc & 1;
    if ( !v7 )
      Dpc = (ULONG)Timer[3].Dpc;
    LOBYTE(a2) = KeSetCoalescableTimer(
                   Timer,
                   v6,
                   Dpc,
                   Timer[5].Header.Lock,
                   (PKDPC)((unsigned __int64)&Timer[2].TimerListEntry & -(__int64)(v7 != 0)));
    if ( Processor == 3 )
      _interlockedbittestandset(&Timer->Header.Lock, 9u);
  }
  LOBYTE(Timer[4].Dpc) &= ~2u;
  return a2;
}
