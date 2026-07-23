/*
 * XREFs of FilterEvalImpliedAnd @ 0x14096971C
 * Callers:
 *     ConstraintEval @ 0x14094EB24 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1409683B0 (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x140AD9910 (ValidFilter.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 */

__int64 __fastcall FilterEvalImpliedAnd(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  int v9; // r14d
  unsigned int i; // edi
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 *v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0;
  v15 = 0LL;
  v9 = 1;
  *a5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v11 = 56LL * i;
    if ( (*(_DWORD *)(v11 + a4) & 0xFF00000) != 0 )
    {
      v5 = -1073741811;
      break;
    }
    v14 = &v15;
    v12 = guard_dispatch_icall_no_overrides(a2, v11 + a4 + 8);
    v5 = v12;
    if ( v12 == -1073741275 )
    {
      v5 = 0;
      v9 = 0;
    }
    else
    {
      if ( v12 )
        break;
      LODWORD(v14) = *(_DWORD *)(v11 + a4 + 40);
      PropertyEval(
        0LL,
        v15,
        0LL,
        *(unsigned int *)(v11 + a4),
        v14,
        *(_QWORD *)(v11 + a4 + 48),
        *(_DWORD *)(v11 + a4 + 44),
        a5);
      if ( *a5 == v5 )
        return 0LL;
    }
  }
  if ( !v9 && !v5 )
    return (unsigned int)-1073741823;
  return v5;
}
