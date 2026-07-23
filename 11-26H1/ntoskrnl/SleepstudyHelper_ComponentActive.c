/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1405180D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x140518130 (SleepstudyHelper_ComponentActiveLocked.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(PKSPIN_LOCK SpinLock)
{
  unsigned int active; // edi
  KIRQL v3; // bl

  active = 0;
  if ( SpinLock )
  {
    if ( SpinLock != (PKSPIN_LOCK)&unk_140F0A850 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      active = SleepstudyHelper_ComponentActiveLocked(SpinLock);
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
