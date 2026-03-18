/*
 * XREFs of SleepstudyHelper_ReleaseComponentLock @ 0x1406142F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 */

__int64 __fastcall SleepstudyHelper_ReleaseComponentLock(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi

  v2 = 0;
  v3 = a2;
  if ( SpinLock )
  {
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      && SpinLock == PsAltSystemCallRegistrationLock.Spare35 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
    else
    {
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
