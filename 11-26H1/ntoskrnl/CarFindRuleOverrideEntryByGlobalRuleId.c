/*
 * XREFs of CarFindRuleOverrideEntryByGlobalRuleId @ 0x14064D674
 * Callers:
 *     CarQueryReportActionForTriage @ 0x14064DAC0 (CarQueryReportActionForTriage.c)
 *     CarRegisterRuleOverride @ 0x14064DCF0 (CarRegisterRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CarFindRuleOverrideEntryByGlobalRuleId(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 1) == a2 )
      return i - 8;
  }
  return 0LL;
}
