/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660
 * Callers:
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1402574F0 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140257560 (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_ComponentActive @ 0x1402575F0 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_AcquireComponentLock @ 0x140614260 (SleepstudyHelper_AcquireComponentLock.c)
 *     SleepstudyHelper_ReleaseComponentLock @ 0x1406142F0 (SleepstudyHelper_ReleaseComponentLock.c)
 *     SleepstudyHelper_ResetComponentsStartTime @ 0x140614370 (SleepstudyHelper_ResetComponentsStartTime.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1406143F0 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407E4560 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407E4640 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140A88BC0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140B3D0C0 (SleepstudyHelper_RegisterComponentEx.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140614238 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 */

__int64 Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SPR_HardenInClient__private_featureState & 0x10) != 0 )
    return Feature_SPR_HardenInClient__private_featureState & 1;
  else
    return Feature_SPR_HardenInClient__private_IsEnabledFallback(
             (unsigned int)Feature_SPR_HardenInClient__private_featureState,
             3LL);
}
