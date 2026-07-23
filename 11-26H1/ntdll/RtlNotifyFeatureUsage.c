/*
 * XREFs of RtlNotifyFeatureUsage @ 0x18005F7E0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800E52A0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlpFtSendUsageNotification @ 0x180147C60 (RtlpFtSendUsageNotification.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x18005F9CC (RtlpFcSendFeatureUsageNotifications.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  int v2; // eax
  __int64 v3; // rdi
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( byte_1801CA908 )
    return -1073741058;
  v2 = RtlpFcReferenceFeatureConfigurationBuffers(FeatureUsageReport, 1, &v7, &v6);
  v3 = v6;
  v4 = v2;
  if ( v2 >= 0 )
    v4 = RtlpFcSendFeatureUsageNotifications(FeatureUsageReport, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
  if ( v3 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801CBC88, v3);
  return v4;
}
