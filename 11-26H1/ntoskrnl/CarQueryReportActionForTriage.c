/*
 * XREFs of CarQueryReportActionForTriage @ 0x14064DAC0
 * Callers:
 *     CarQueryReportAction @ 0x14064DA90 (CarQueryReportAction.c)
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 * Callees:
 *     CarFindRuleOverrideEntryByGlobalRuleId @ 0x14064D674 (CarFindRuleOverrideEntryByGlobalRuleId.c)
 *     CarOverrideReportAction @ 0x14064DA68 (CarOverrideReportAction.c)
 */

__int64 __fastcall CarQueryReportActionForTriage(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  __int64 *i; // rax
  __int64 *v7; // r8
  __int64 v8; // r8
  int v9; // r11d
  _QWORD *RuleOverrideEntryByGlobalRuleId; // rax
  _DWORD *v11; // r10

  if ( a3 )
  {
    if ( CarInitialized )
    {
      v5 = *(int *)&stru_140F06A28.WaitBlockFill11[24];
      *(_QWORD *)a3 = qword_1400397C8[*(int *)&stru_140F06A28.WaitBlockFill11[24]];
      for ( i = (__int64 *)CarConfigurationEntries; ; i = (__int64 *)*i )
      {
        if ( i == &CarConfigurationEntries )
          return (unsigned int)-1073741275;
        v7 = i - 11;
        if ( *((_DWORD *)i - 6) < a2 && *((_DWORD *)v7 + 17) >= a2 && *(_DWORD *)v7 == a1 )
          break;
      }
      if ( i == (__int64 *)88 )
        return (unsigned int)-1073741275;
      CarOverrideReportAction(a3, &v7[v5 + 1]);
      RuleOverrideEntryByGlobalRuleId = CarFindRuleOverrideEntryByGlobalRuleId((_QWORD **)(v8 + 72), v9);
      if ( RuleOverrideEntryByGlobalRuleId )
        CarOverrideReportAction(v11, (_DWORD *)&RuleOverrideEntryByGlobalRuleId[v5] + 1);
      if ( *(int *)&stru_140F06A28.WaitBlockFill11[24] < 5 && (CarXdvOptions & 1) != 0 )
        *v11 = 4;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
