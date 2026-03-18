/*
 * XREFs of IsProcessForeground @ 0x14027A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsProcessForeground(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 UserSessionState; // rax

  v2 = a1;
  v5 = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18904) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v4, v3);
  LOBYTE(v5) = v2 == ((unsigned int)PsGetThreadProcessId(**(PETHREAD **)(UserSessionState + 18904)) & 0xFFFFFFFC);
  return v5;
}
