/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x14064D63C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x14064D530 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x14064D5D0 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x14064DCF0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x14064DDE0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x14064E1C0 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x14064E210 (CarSetCustomRuleIdRange.c)
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
