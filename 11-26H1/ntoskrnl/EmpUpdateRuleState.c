/*
 * XREFs of EmpUpdateRuleState @ 0x1404CBA0C
 * Callers:
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 *     EmpRuleUpdateWorkerThread @ 0x1405B7470 (EmpRuleUpdateWorkerThread.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x14047A4FC (EmpSearchTargetRuleList.c)
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 *     EmpRuleStateChangeNotify @ 0x1405B7414 (EmpRuleStateChangeNotify.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x1405B7804 (EmpEvaluateUpdateRuleEvalState.c)
 */

_QWORD *__fastcall EmpUpdateRuleState(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  int v3; // ebp
  char v6; // di
  __int64 i; // r8
  _QWORD *j; // rcx
  _QWORD *k; // rcx
  _QWORD *v10; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 16);
  v6 = 1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD **)(a1 + 56);
    if ( *(int *)(result[i] + 16LL) <= 0 )
    {
LABEL_8:
      v6 = 0;
      goto LABEL_9;
    }
  }
  for ( j = *(_QWORD **)(a1 + 64); j; j = (_QWORD *)*j )
  {
    result = (_QWORD *)*(j - 1);
    if ( !result[2] )
      goto LABEL_8;
  }
  for ( k = *(_QWORD **)(a1 + 72); k; k = (_QWORD *)*k )
  {
    result = (_QWORD *)*(k - 1);
    if ( !*((_BYTE *)result + 20) )
      goto LABEL_8;
  }
LABEL_9:
  if ( *(_BYTE *)(a1 + 20) != v6 )
  {
    v10 = *(_QWORD **)(a1 + 32);
    *(_BYTE *)(a1 + 20) = v6;
    while ( v10 )
    {
      result = (_QWORD *)EmpUpdateRuleState(*(v10 - 1), 0LL);
      v10 = (_QWORD *)*v10;
    }
  }
  *(_BYTE *)(a1 + 20) = v6;
  if ( v6 )
  {
    if ( v3 == 1 )
      *(_DWORD *)(a1 + 16) = 0;
    result = EmpSearchTargetRuleList(a1);
    if ( result && *(int *)result > 0 )
      result = (_QWORD *)EmpEvaluateUpdateRuleEvalState(result, a2);
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( *(_DWORD *)(a1 + 16) != v3 )
    return (_QWORD *)EmpRuleStateChangeNotify(a1);
  return result;
}
