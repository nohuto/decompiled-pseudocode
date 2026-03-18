/*
 * XREFs of SleepstudyHelper_ResetComponentsStartTime @ 0x140614370
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ResetComponentsStartTime(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // ebx
  KIRQL v3; // al

  v1 = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != PsAltSystemCallRegistrationLock.Spare35 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      if ( (SpinLock[1] & 3) == 3 )
        SpinLock[4] = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
