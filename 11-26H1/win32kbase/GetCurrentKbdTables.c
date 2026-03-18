/*
 * XREFs of GetCurrentKbdTables @ 0x14021CB30
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x14021CA34 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x14014521C (PtiKbdFromQ.c)
 */

__int64 __fastcall GetCurrentKbdTables(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  v8 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18928)) + 472);
  if ( v8 )
    return *(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL);
  else
    return *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 14056);
}
