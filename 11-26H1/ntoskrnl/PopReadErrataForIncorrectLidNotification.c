/*
 * XREFs of PopReadErrataForIncorrectLidNotification @ 0x140CD5FE0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 */

__int64 PopReadErrataForIncorrectLidNotification()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)&stru_140E66FF0.WaitBlockFill11[80];
  if ( *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] && stru_140E66FF0.WaitBlockFill6[84] )
  {
    v1 = 1;
    result = EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v1);
    if ( v1 == 2 )
      PopErrataReportingIncorrectLidState = 1;
  }
  return result;
}
