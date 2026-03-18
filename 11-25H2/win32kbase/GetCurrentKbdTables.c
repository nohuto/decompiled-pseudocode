/*
 * XREFs of GetCurrentKbdTables @ 0x140217B20
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140217A28 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1400B95DC (PtiKbdFromQ.c)
 */

__int64 __fastcall GetCurrentKbdTables(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v3, v2);
  v6 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18888)) + 480);
  if ( v6 )
    return *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
  else
    return *(_QWORD *)(W32GetUserSessionState(v8, v7) + 14064);
}
