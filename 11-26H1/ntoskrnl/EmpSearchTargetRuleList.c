/*
 * XREFs of EmpSearchTargetRuleList @ 0x14047A4FC
 * Callers:
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14078F814 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140CBD7E8 (EmpParseTargetRules.c)
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
