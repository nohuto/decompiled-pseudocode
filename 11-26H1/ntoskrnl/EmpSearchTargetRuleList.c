/*
 * XREFs of EmpSearchTargetRuleList @ 0x14047FA90
 * Callers:
 *     EmpUpdateRuleState @ 0x1404D1E5C (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14078CCE4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C03A80 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140CB77A4 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
