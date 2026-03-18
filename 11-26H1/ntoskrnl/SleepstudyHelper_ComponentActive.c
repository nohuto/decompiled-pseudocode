/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1402575F0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1402574F0 (SleepstudyHelper_ComponentActiveLocked.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(PKSPIN_LOCK SpinLock)
{
  unsigned int active; // edi
  KIRQL v4; // bl

  active = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != PsAltSystemCallRegistrationLock.Spare35 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      active = SleepstudyHelper_ComponentActiveLocked((__int64)SpinLock);
      KeReleaseSpinLock(SpinLock, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
