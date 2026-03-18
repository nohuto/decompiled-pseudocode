/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1406143F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14049BA60 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v3; // edx

  IsEnabledDeviceUsageNoInline = Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline();
  v3 = 0;
  if ( !IsEnabledDeviceUsageNoInline )
    return SleepstudyHelperDestroyBlocker(a1);
  if ( a1 != PsAltSystemCallRegistrationLock.Spare35 )
    return (unsigned int)SleepstudyHelperDestroyBlocker(a1);
  return v3;
}
