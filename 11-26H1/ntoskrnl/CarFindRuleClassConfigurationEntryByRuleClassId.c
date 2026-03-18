/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x140649A5C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x140649950 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1406499F0 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x14064A110 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x14064A200 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x14064A5E0 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x14064A630 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CarFindRuleClassConfigurationEntryByRuleClassId(__int64 a1, int a2)
{
  __int64 *v2; // rax

  v2 = (__int64 *)CarConfigurationEntries;
  if ( (__int64 *)CarConfigurationEntries != &CarConfigurationEntries && CarConfigurationEntries )
  {
    while ( v2 != &CarConfigurationEntries )
    {
      if ( *((_DWORD *)v2 - 21) == a2 )
        return v2 - 11;
      v2 = (__int64 *)*v2;
    }
  }
  return 0LL;
}
