/*
 * XREFs of KiInitializeVelocity @ 0x140CD02B4
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     Feature_ShortThreadQuantum__private_IsEnabledDeviceUsageNoInline @ 0x140526628 (Feature_ShortThreadQuantum__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_QueueReadyThreadRecheckPriority__private_IsEnabledDeviceUsageNoInline @ 0x140529044 (Feature_QueueReadyThreadRecheckPriority__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x1405290A0 (Feature_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405291B4 (Feature_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HaltOnAddress_IpiLevel__private_IsEnabledDeviceUsageNoInline @ 0x14052926C (Feature_HaltOnAddress_IpiLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SchedulerAssist_YieldBoost__private_IsEnabledDeviceUsageNoInline @ 0x1405292C8 (Feature_SchedulerAssist_YieldBoost__private_IsEnabledDeviceUsageNoInline.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_DisableQosGroupingForMediumQos__private_IsEnabledDeviceUsageNoInline @ 0x1405EBDD8 (Feature_DisableQosGroupingForMediumQos__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405EBE34 (Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 KiInitializeVelocity()
{
  __int64 result; // rax
  unsigned __int8 v1; // [rsp+30h] [rbp+8h]
  unsigned __int8 v2; // [rsp+30h] [rbp+8h]

  if ( (Feature_HaltOnAddress_QueuedSpinLock__private_featureState & 0x10) == 0 )
  {
    v1 = Feature_HaltOnAddress_QueuedSpinLock__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_HaltOnAddress_QueuedSpinLock__private_descriptor,
      Feature_HaltOnAddress_QueuedSpinLock__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_HaltOnAddress_QueuedSpinLock__private_descriptor);
  }
  KiVelocityFlags |= 0x10000u;
  if ( (Feature_HaltOnAddress_Barrier__private_featureState & 0x10) == 0 )
  {
    v2 = Feature_HaltOnAddress_Barrier__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_HaltOnAddress_Barrier__private_descriptor,
      Feature_HaltOnAddress_Barrier__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3,
      (__int64)&Feature_HaltOnAddress_Barrier__private_descriptor);
  }
  KiVelocityFlags |= 0x20000u;
  if ( (unsigned int)Feature_ShortThreadQuantum__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x40000u;
  if ( (unsigned int)Feature_HaltOnAddress_IpiLevel__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x80000u;
  if ( (unsigned int)Feature_SchedulerAssist_YieldBoost__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x100000u;
  if ( (unsigned int)Feature_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x200000u;
  if ( (unsigned int)Feature_QueueReadyThreadRecheckPriority__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x400000u;
  if ( (unsigned int)Feature_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x800000u;
  if ( (unsigned int)Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x1000000u;
  result = Feature_DisableQosGroupingForMediumQos__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    KiDisableMediumQosGrouping = 1;
  return result;
}
