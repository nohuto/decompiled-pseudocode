/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x1407BA590
 * Callers:
 *     HalpAllocateGsivForSecondaryInterrupt @ 0x14058F560 (HalpAllocateGsivForSecondaryInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  struct _LIST_ENTRY *Pool2; // rax
  unsigned int v1; // ebx
  struct _LIST_ENTRY *v2; // rdi
  struct _KEVENT *p_Blink; // rsi
  __int64 v4; // rbp

  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v1 = 0;
  KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    p_Blink = (struct _KEVENT *)&Pool2->Blink;
    v4 = 256LL;
    do
    {
      v2->Flink = 0LL;
      KeInitializeEvent(p_Blink, SynchronizationEvent, 1u);
      p_Blink += 2;
      v2 += 3;
      --v4;
    }
    while ( v4 );
    KiDpcCorralLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&KiDpcCorralLock.Timer.Processor;
    *(_QWORD *)&KiDpcCorralLock.Timer.Processor = &KiDpcCorralLock.Timer.Processor;
    KeInitializeDpc((PRKDPC)&KiDpcCorralLock.WaitBlockFill11[24], (PKDEFERRED_ROUTINE)KiProcessSecondarySignalList, 0LL);
    KiDpcCorralLock.Timer.TimerListEntry.Blink = 0LL;
    LOBYTE(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 0;
    KiDpcCorralLock.WaitBlockFill6[88] = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
