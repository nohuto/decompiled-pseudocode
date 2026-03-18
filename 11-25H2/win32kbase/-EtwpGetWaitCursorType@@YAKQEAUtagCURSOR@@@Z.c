/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1400A4B30
 * Callers:
 *     EtwTraceWaitCursor @ 0x1400A48D0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  unsigned int v8; // ecx

  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState(a1, a2) + 22984) )
    return 102LL;
  if ( a1 == *(struct tagCURSOR *const *)(W32GetUserSessionState(v4, v3) + 27952) )
    return 111LL;
  UserSessionState = W32GetUserSessionState(v6, v5);
  v8 = 0;
  if ( a1 == *(struct tagCURSOR *const *)(UserSessionState + 30712) )
    return 116;
  return v8;
}
