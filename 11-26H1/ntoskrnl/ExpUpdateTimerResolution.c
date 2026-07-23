/*
 * XREFs of ExpUpdateTimerResolution @ 0x140530A54
 * Callers:
 *     ExSetTimerResolution @ 0x14040D0D0 (ExSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A7374C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A737C0 (NtSetTimerResolution.c)
 * Callees:
 *     PoTraceSystemTimerResolutionUpdate @ 0x1402577FC (PoTraceSystemTimerResolutionUpdate.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int Flink, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // r9
  struct _LIST_ENTRY *i; // rcx
  int v7; // ebx
  __int64 result; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = Flink;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
    Flink = v9;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( Flink >= ExpLastRequestedTime || Flink >= KeMaximumIncrement )
    {
LABEL_23:
      KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v5);
      return (unsigned int)KePseudoHrTimeIncrement;
    }
  }
  else
  {
    Flink = KeMaximumIncrement;
    v9 = KeMaximumIncrement;
    if ( LODWORD(ExpSysDbgLock.Timer.Dpc) && LODWORD(ExpSysDbgLock.Timer.TimerListEntry.Flink) < KeMaximumIncrement )
    {
      Flink = (unsigned int)ExpSysDbgLock.Timer.TimerListEntry.Flink;
      v9 = (unsigned int)ExpSysDbgLock.Timer.TimerListEntry.Flink;
    }
    for ( i = ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink; i != (struct _LIST_ENTRY *)&ExpSysDbgLock.320; i = i->Flink )
    {
      Flink = v9;
      if ( (HIDWORD(i[-59].Flink) & 0x1000) != 0 && LODWORD(i[1].Blink) < v9 && (HIDWORD(i[5].Blink) & 0x4000000) == 0 )
      {
        Flink = (unsigned int)i[1].Blink;
        v9 = Flink;
      }
    }
  }
  if ( Flink < KeMinimumIncrement )
  {
    Flink = KeMinimumIncrement;
    v9 = KeMinimumIncrement;
  }
  if ( Flink == ExpLastRequestedTime )
    goto LABEL_23;
  v7 = KePseudoHrTimeIncrement;
  ExpLastRequestedTime = Flink;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v5);
  ExpUpdateTimerConfiguration((__int64)&v9, 0LL, 0LL);
  result = v9;
  if ( v7 != v9 )
  {
    PoTraceSystemTimerResolutionUpdate(KePseudoHrTimeIncrement);
    return v9;
  }
  return result;
}
