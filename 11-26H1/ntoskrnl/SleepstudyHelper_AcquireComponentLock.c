/*
 * XREFs of SleepstudyHelper_AcquireComponentLock @ 0x140614260
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall SleepstudyHelper_AcquireComponentLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // di

  v2 = 0;
  if ( SpinLock && a2 )
  {
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      && SpinLock == PsAltSystemCallRegistrationLock.Spare35 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      *a2 = CurrentIrql;
    }
    else
    {
      *a2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
