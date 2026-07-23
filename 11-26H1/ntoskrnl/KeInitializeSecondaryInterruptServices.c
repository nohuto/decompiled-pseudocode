/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x1407BD5F0
 * Callers:
 *     HalpAllocateGsivForSecondaryInterrupt @ 0x140591CE0 (HalpAllocateGsivForSecondaryInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  _ULARGE_INTEGER v0; // rax
  unsigned int v1; // ebx
  _QWORD *QuadPart; // rdi
  struct _KEVENT *v3; // rsi
  __int64 v4; // rbp

  v0.QuadPart = ExAllocatePool2(0x40uLL);
  v1 = 0;
  KiDpcCorralLock.Timer.DueTime = v0;
  QuadPart = (_QWORD *)v0.QuadPart;
  if ( v0.QuadPart )
  {
    v3 = (struct _KEVENT *)(v0.QuadPart + 8);
    v4 = 256LL;
    do
    {
      *QuadPart = 0LL;
      KeInitializeEvent(v3, SynchronizationEvent, 1u);
      v3 += 2;
      QuadPart += 6;
      --v4;
    }
    while ( v4 );
    KiDpcCorralLock.WaitBlock[1].WaitListEntry.Blink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry;
    KiDpcCorralLock.WaitBlock[1].WaitListEntry.Flink = &KiDpcCorralLock.WaitBlock[1].WaitListEntry;
    KeInitializeDpc((PRKDPC)&KiDpcCorralLock.Timer.Dpc, (PKDEFERRED_ROUTINE)KiProcessSecondarySignalList, 0LL);
    *(_QWORD *)&KiDpcCorralLock.WaitBlockFill11[64] = 0LL;
    LOWORD(KiDpcCorralLock.Timer.TimerListEntry.Flink) = 256;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
