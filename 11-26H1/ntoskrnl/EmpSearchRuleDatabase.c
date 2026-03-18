/*
 * XREFs of EmpSearchRuleDatabase @ 0x140483480
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x14078CCE4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C03A80 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140CB6AE8 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140CB6F84 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140CB77A4 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
