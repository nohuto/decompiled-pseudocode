/*
 * XREFs of EmpSearchCallbackDatabase @ 0x1405B4E44
 * Callers:
 *     EmpProviderRegister @ 0x140B58860 (EmpProviderRegister.c)
 *     EmpParseCallbacks @ 0x140CB600C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140CB6AE8 (EmpParseRuleTerm.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchCallbackDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = EmpParseLock.StackBase; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 5;
    v3 = *(i - 5) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
