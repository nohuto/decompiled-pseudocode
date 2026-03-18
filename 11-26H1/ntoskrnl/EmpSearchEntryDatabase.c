/*
 * XREFs of EmpSearchEntryDatabase @ 0x1405B4E7C
 * Callers:
 *     EmProviderRegisterEntry @ 0x14078D240 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140B58860 (EmpProviderRegister.c)
 *     EmpParseCallbacks @ 0x140CB600C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140CB625C (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140CB6F84 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchEntryDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = *(_QWORD **)&EmpParseLock.CurrentRunTime; ; i = (_QWORD *)*i )
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
