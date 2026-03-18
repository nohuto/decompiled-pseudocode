/*
 * XREFs of CitUserChange @ 0x140190B20
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB954 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // [rsp+34h] [rbp+Ch]

  v8 = HIDWORD(a1);
  v3 = a1;
  if ( CitIsEnabled(a1, a2, a3) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18952) + 32LL);
    if ( *(_QWORD *)(v7 + 96) )
    {
      if ( *(_QWORD *)(v7 + 104) != __PAIR64__(v8, v3) )
        CitpLogoff((struct _CIT_IMPACT_CONTEXT *)v7);
    }
  }
}
