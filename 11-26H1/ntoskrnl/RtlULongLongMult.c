/*
 * XREFs of RtlULongLongMult @ 0x1404655A0
 * Callers:
 *     ExPoolQueryLimits @ 0x140518D40 (ExPoolQueryLimits.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140577D58 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpSetResumeTime @ 0x140594834 (HalpSetResumeTime.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1406249A8 (RtlpFcValidateGovernedFeatures.c)
 *     RtlpHpVaMgrCtxStart @ 0x140638EB0 (RtlpHpVaMgrCtxStart.c)
 *     ExPoolSetLimit @ 0x1406CBD38 (ExPoolSetLimit.c)
 *     PopFxPepPerfInfoQuery @ 0x1407CD73C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407CD93C (PopFxRegisterComponentPerfStates.c)
 *     PopBootStatCheckIntegrity @ 0x1407DAC78 (PopBootStatCheckIntegrity.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     NtAlertMultipleThreadByThreadId @ 0x1407FF500 (NtAlertMultipleThreadByThreadId.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14080A188 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     BiResolveLocatePartitionCallback @ 0x140893368 (BiResolveLocatePartitionCallback.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1408A8D0C (RtlpMuiRegGetOrAddStringToPool.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1409BAA7C (MiCaptureSectionCreateExtendedParameters.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A8E19C (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140ABF390 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1986C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     PopReadResumeContext @ 0x140B6109C (PopReadResumeContext.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140BFD8EC (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140C51580 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140CAA5C4 (GetBootSystemTime.c)
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
