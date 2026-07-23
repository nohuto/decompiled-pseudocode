/*
 * XREFs of CarDeleteTelemetryData @ 0x14064D49C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x14064D530 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x14064D5D0 (CarDeregisterRuleOverride.c)
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
