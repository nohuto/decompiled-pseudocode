/*
 * XREFs of wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1403589D0
 * Callers:
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140358A70 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportVariantUsageToService(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(
             &Feature_AdaptiveHibernateEnhancements__private_descriptor,
             a2,
             (((unsigned int)a2 >> 12) & 0x3F) + 320,
             1LL);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return guard_dispatch_icall_no_overrides(48709785LL, &Feature_AdaptiveHibernateEnhancements_logged_traits, 0LL);
  }
  return result;
}
