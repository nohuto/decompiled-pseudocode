/*
 * XREFs of EmpEvaluateUpdateRuleEvalState @ 0x1405B7804
 * Callers:
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x14046D670 (EmpEvaluateTargetRule.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x1405B775C (EmpEvaluatePermuteRuleEntries.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EmpEvaluateUpdateRuleEvalState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  char *Pool2; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // rcx
  _QWORD **v9; // rax
  _QWORD *v10; // r15
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  Pool2 = 0LL;
  v5 = *(unsigned int *)(v2 + 48);
  if ( !*(_BYTE *)(v2 + 20) )
  {
    *(_DWORD *)(v2 + 16) = 1;
    return;
  }
  v6 = 0LL;
  v7 = (__int64 *)(v2 + 56);
  while ( (unsigned int)v6 < (unsigned int)v5 )
  {
    v7 = (__int64 *)(v2 + 56);
    v8 = *(_QWORD *)(v2 + 56);
    v9 = (_QWORD **)(*(_QWORD *)(v8 + 8 * v6) + 56LL);
    v10 = *v9;
    while ( v10 != v9 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8 * v6), *(v10 - 1));
      v8 = *v7;
      v10 = (_QWORD *)*v10;
      v9 = (_QWORD **)(*(_QWORD *)(*v7 + 8 * v6) + 56LL);
    }
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 8 * v6) + 40LL) == *(_QWORD *)(v8 + 8 * v6) + 40LL )
    {
      *(_DWORD *)(v2 + 16) = 0;
      return;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( (_DWORD)v5 )
  {
    v11 = (__int64 *)(v2 + 56);
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v7 = (__int64 *)(v2 + 56);
    if ( !Pool2 )
      return;
  }
  else
  {
    v11 = (__int64 *)(v2 + 56);
  }
  EmpEvaluatePermuteRuleEntries(v2, v5, a2, 1);
  while ( 1 )
  {
    if ( (_DWORD)v5 )
    {
      v12 = 0LL;
      v13 = v5;
      do
      {
        *(_QWORD *)&Pool2[v12] = *(_QWORD *)(*(_QWORD *)(v12 + *v7) + 32LL) - 16LL;
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
    }
    if ( (unsigned int)EmpEvaluateTargetRule(a1, (__int64)Pool2, v5) == 2 )
      break;
    if ( EmpEvaluatePermuteRuleEntries(v2, v5, a2, 0) )
      goto LABEL_23;
    v7 = v11;
  }
  v3 = 2;
LABEL_23:
  *(_DWORD *)(v2 + 16) = v3;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x76654D45u);
}
