/*
 * XREFs of CitUserChange @ 0x140152D80
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156A20 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+34h] [rbp+Ch]

  v6 = HIDWORD(a1);
  v2 = a1;
  if ( CitIsEnabled(a1, a2) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18912) + 32LL);
    if ( *(_QWORD *)(v5 + 96) )
    {
      if ( *(_QWORD *)(v5 + 104) != __PAIR64__(v6, v2) )
        CitpLogoff((struct _CIT_IMPACT_CONTEXT *)v5);
    }
  }
}
