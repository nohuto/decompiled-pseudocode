/*
 * XREFs of CarRegisterRuleOverridesAllContexts @ 0x14064DEC0
 * Callers:
 *     <none>
 * Callees:
 *     CarRegisterRuleOverrideAllContexts @ 0x14064DDE0 (CarRegisterRuleOverrideAllContexts.c)
 */

__int64 __fastcall CarRegisterRuleOverridesAllContexts(unsigned int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int i; // ebx

  result = 0LL;
  for ( i = a3; i; --i )
  {
    result = CarRegisterRuleOverrideAllContexts(a1, a2);
    if ( (int)result < 0 )
      break;
    a2 += 60LL;
  }
  return result;
}
