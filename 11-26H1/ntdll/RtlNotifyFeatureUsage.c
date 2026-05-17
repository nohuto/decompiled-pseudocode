/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1800140B0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800E3D80 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlpFtSendUsageNotification @ 0x180147DB0 (RtlpFtSendUsageNotification.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x18001429C (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( byte_1801CB8C8 )
  {
    return (unsigned int)-1073741058;
  }
  else
  {
    LOBYTE(a2) = 1;
    v3 = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, &v8, &v7);
    v4 = v7;
    v5 = v3;
    if ( v3 >= 0 )
      v5 = RtlpFcSendFeatureUsageNotifications(a1, *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 64));
    if ( v4 )
      RtlpFcBufferManagerDereferenceBuffers((volatile signed __int64 *)&xmmword_1801CCC48, v4);
  }
  return v5;
}
