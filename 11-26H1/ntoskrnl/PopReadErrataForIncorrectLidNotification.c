/*
 * XREFs of PopReadErrataForIncorrectLidNotification @ 0x140CDC334
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataForIncorrectLidNotification()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)&stru_140E67200.WaitBlockFill11[88];
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80] )
  {
    v1 = 1;
    result = EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v1);
    if ( v1 == 2 )
      PopErrataReportingIncorrectLidState = 1;
  }
  return result;
}
