/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x180075A4C
 * Callers:
 *     Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant @ 0x18007584C (Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800480A0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportVariantUsageToService(
        __int64 a1,
        unsigned int a2))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v2; // bl
  char v3; // di
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+70h] [rbp+18h] BYREF

  v5 = 2;
  v2 = a2;
  v3 = (a2 >> 12) & 0x3F;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     (__int64)&Feature_CRMDrivenIndexerNPUBackoff__private_descriptor,
                                                                                                     a2,
                                                                                                     ((a2 >> 12) & 0x3F) + 320);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(56074269LL, &Feature_CRMDrivenIndexerNPUBackoff_logged_traits, 0LL, v2 & 1, 0LL, &v5, v3, 1LL);
  }
  return result;
}
