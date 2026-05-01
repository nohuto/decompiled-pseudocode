/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1806508B0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180650834 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287020 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1802DF240 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 */

_BOOL8 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  _BYTE v6[40]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]

  v3 = a2;
  v4 = a3;
  v7 = *(_QWORD *)(wil_details_FeatureReporting_RecordUsageInCache(
                     (__int64)v6,
                     (volatile signed __int32 *)&Feature_AslPiiFilter_EmailAddresses__private_reporting,
                     a3,
                     SHIDWORD(a2))
                 + 16);
  if ( (v3 & 0x400) != 0 && v4 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(55991892, v4, (v3 >> 11) & 1);
  return (_DWORD)v7 == 0;
}
