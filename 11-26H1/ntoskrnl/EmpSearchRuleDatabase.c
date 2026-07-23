/*
 * XREFs of EmpSearchRuleDatabase @ 0x14047D298
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x14078F814 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140CBCB2C (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140CBD7E8 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY **p_Blink; // r8
  char *v3; // r9

  for ( i = EmpParseLock.Header.WaitListHead.Flink; ; i = i->Flink )
  {
    p_Blink = 0LL;
    if ( !i )
      break;
    p_Blink = &i[-2].Blink;
    v3 = (char *)i[-2].Blink - *a1;
    if ( !v3 )
      v3 = (char *)p_Blink[1] - a1[1];
    if ( !v3 )
      break;
  }
  return p_Blink;
}
