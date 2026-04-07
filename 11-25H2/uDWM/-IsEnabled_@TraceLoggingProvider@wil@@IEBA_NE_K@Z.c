/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007D528
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18007D0E0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A2A1C (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800EA304 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this)
{
  _DWORD *v1; // rcx
  char v2; // r9

  v1 = (_DWORD *)*((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 && *v1 )
    return tlgKeywordOn((__int64)v1, 0LL) != 0;
  return v2;
}
