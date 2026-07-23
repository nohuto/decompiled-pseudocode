/*
 * XREFs of EmpSearchCallbackDatabase @ 0x1405B7654
 * Callers:
 *     EmpProviderRegister @ 0x140B5B680 (EmpProviderRegister.c)
 *     EmpParseCallbacks @ 0x140CBC04C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140CBCB2C (EmpParseRuleTerm.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall EmpSearchCallbackDatabase(_QWORD *a1)
{
  _XSAVE_FORMAT *i; // rdx
  unsigned __int8 *v2; // r8
  __int64 v3; // r9

  for ( i = EmpParseLock.StateSaveArea; ; i = *(_XSAVE_FORMAT **)&i->ControlWord )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = &i[-1].Reserved4[56];
    v3 = *(_QWORD *)&i[-1].Reserved4[56] - *a1;
    if ( !v3 )
      v3 = *((_QWORD *)v2 + 1) - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
