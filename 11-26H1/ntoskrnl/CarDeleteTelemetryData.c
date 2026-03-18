/*
 * XREFs of CarDeleteTelemetryData @ 0x1406498BC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140649950 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1406499F0 (CarDeregisterRuleOverride.c)
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeleteTelemetryData(void **a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x4E726143u);
      *a1 = 0LL;
    }
  }
}
