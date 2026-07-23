/*
 * XREFs of RtlULongLongMult @ 0x14045E560
 * Callers:
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14057A288 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpSetResumeTime @ 0x140596FB4 (HalpSetResumeTime.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1406279F8 (RtlpFcValidateGovernedFeatures.c)
 *     RtlpHpVaMgrCtxStart @ 0x14063BEC0 (RtlpHpVaMgrCtxStart.c)
 *     ExPoolSetLimit @ 0x1406CFD68 (ExPoolSetLimit.c)
 *     PopFxPepPerfInfoQuery @ 0x1407D07DC (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407D09DC (PopFxRegisterComponentPerfStates.c)
 *     PopBootStatCheckIntegrity @ 0x1407DEB68 (PopBootStatCheckIntegrity.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     NtAlertMultipleThreadByThreadId @ 0x140804F30 (NtAlertMultipleThreadByThreadId.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14080FC18 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     BiResolveLocatePartitionCallback @ 0x140899768 (BiResolveLocatePartitionCallback.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1408AF17C (RtlpMuiRegGetOrAddStringToPool.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A92E6C (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140AC1430 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1BCBC (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     PopReadResumeContext @ 0x140B6413C (PopReadResumeContext.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140C038EC (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C57580 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140CB05C4 (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
    return 0;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
}
