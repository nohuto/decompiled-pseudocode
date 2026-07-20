/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14001BB58
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14001BAD4 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x14001B738 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14001B954 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  _BYTE v7[40]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]

  v3 = a2;
  v5 = a3;
  v8 = *((_QWORD *)wil_details_FeatureReporting_RecordUsageInCache(
                     (__int64)v7,
                     *(volatile signed __int32 **)(a1 + 8),
                     a3,
                     SHIDWORD(a2))
       + 2);
  if ( (v3 & 0x400) != 0 && v5 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(*(_DWORD *)(a1 + 24), v5, (v3 >> 11) & 1);
  return (_DWORD)v8 == 0;
}
