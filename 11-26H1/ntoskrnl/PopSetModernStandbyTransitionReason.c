/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1404F2714
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  KIRQL v5; // al
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140E0B8D8 != a1 )
  {
    byte_140E0B8D8 = a1;
    if ( a1 )
    {
      dword_140E0B8DC = a2;
    }
    else
    {
      dword_140E0B8E0 = a2;
      qword_140E0B8E8 = InterruptTimePrecise.QuadPart;
    }
  }
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v5);
}
