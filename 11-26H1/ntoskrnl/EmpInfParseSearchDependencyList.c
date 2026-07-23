/*
 * XREFs of EmpInfParseSearchDependencyList @ 0x140CBC028
 * Callers:
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

char __fastcall EmpInfParseSearchDependencyList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // r8

  v2 = *a1;
  v3 = 0;
  while ( v2 )
  {
    if ( *(v2 - 1) == a2 )
      return 1;
    v2 = (_QWORD *)*v2;
  }
  return v3;
}
