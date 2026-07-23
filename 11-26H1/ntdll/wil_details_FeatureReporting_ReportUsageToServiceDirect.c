/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800E52A0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800E5174 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     RtlNotifyFeatureUsage @ 0x18005F7E0 (RtlNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800E532C (wil_details_FeatureReporting_RecordUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3, int a4)
{
  __int16 v4; // bx
  unsigned int v7; // edi
  ULONG v9; // eax
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+48h] [rbp-50h]
  char v12; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  v7 = 0;
  v11 = *(_QWORD *)(wil_details_FeatureReporting_RecordUsageInCache(
                      (unsigned int)&v12,
                      *(_QWORD *)(a1 + 8),
                      a3,
                      HIDWORD(a2),
                      a4)
                  + 16);
  if ( (v4 & 0x400) != 0 && a3 != 254 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = v9;
    FeatureUsageReport.ReportingKind = a3;
    if ( (v4 & 0x800) != 0 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v7) = (_DWORD)v11 == 0;
  return v7;
}
