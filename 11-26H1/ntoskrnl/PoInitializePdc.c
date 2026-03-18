/*
 * XREFs of PoInitializePdc @ 0x140CD57A4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 PoInitializePdc()
{
  PopModernStandbyStateNotify.WriteOperationCount = 0LL;
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)&PopModernStandbyStateNotify.PriorityFloorSummary = 0LL;
    *(_QWORD *)&PopModernStandbyStateNotify.PriorityFloorCounts[24] = PopDelayedPdcRegistrationWorker;
    *(_QWORD *)&PopModernStandbyStateNotify.PriorityFloorCounts[8] = 0LL;
  }
  return 0LL;
}
