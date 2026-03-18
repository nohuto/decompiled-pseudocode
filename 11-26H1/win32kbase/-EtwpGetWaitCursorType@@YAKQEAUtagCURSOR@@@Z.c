/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1401408E8
 * Callers:
 *     EtwTraceWaitCursor @ 0x140140680 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  unsigned int v11; // ecx

  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 23016) )
    return 102LL;
  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState(v5, v4, v6) + 27984) )
    return 111LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  v11 = 0;
  if ( a1 == *(struct tagCURSOR *const *)(UserSessionState + 30744) )
    return 116;
  return v11;
}
