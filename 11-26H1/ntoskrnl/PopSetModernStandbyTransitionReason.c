/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1404F9104
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  __int64 InterruptTimePrecise; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140E0B8C8 != a1 )
  {
    byte_140E0B8C8 = a1;
    if ( a1 )
    {
      dword_140E0B8CC = a2;
    }
    else
    {
      dword_140E0B8D0 = a2;
      qword_140E0B8D8 = InterruptTimePrecise;
    }
  }
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v5);
}
