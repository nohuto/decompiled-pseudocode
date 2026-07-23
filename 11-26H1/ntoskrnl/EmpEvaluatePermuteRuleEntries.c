/*
 * XREFs of EmpEvaluatePermuteRuleEntries @ 0x1405B775C
 * Callers:
 *     EmpEvaluatePermuteRuleEntries @ 0x1405B775C (EmpEvaluatePermuteRuleEntries.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x1405B7804 (EmpEvaluateUpdateRuleEvalState.c)
 * Callees:
 *     EmpEvaluatePermuteRuleEntries @ 0x1405B775C (EmpEvaluatePermuteRuleEntries.c)
 */

char __fastcall EmpEvaluatePermuteRuleEntries(__int64 a1, int a2, __int64 a3, char a4)
{
  char v4; // bl
  unsigned int i; // edx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdi
  char v10; // al
  __int64 v12; // rcx

  v4 = 0;
  if ( !a2 )
    return 1;
  if ( !a4 )
  {
    v8 = (unsigned int)(a2 - 1);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * (unsigned int)v8);
    if ( (_DWORD)v8 )
      v10 = EmpEvaluatePermuteRuleEntries(a1, v8, a3, 0LL);
    else
      v10 = 1;
    if ( v9 == a3 )
    {
      if ( !v10 )
        return v4;
    }
    else
    {
      if ( !v10 )
        return v4;
      v12 = **(_QWORD **)(v9 + 32);
      if ( v12 != v9 + 40 )
      {
        *(_QWORD *)(v9 + 32) = v12;
        return v4;
      }
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(v9 + 40);
    }
    return 1;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * i);
    if ( v7 != a3 )
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(v7 + 40);
  }
  return v4;
}
