/*
 * XREFs of ReadCursorSuppressionConfig @ 0x140124CF0
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140125510 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x1401257F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 */

__int64 ReadCursorSuppressionConfig()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  if ( !IsCurrentSessionServiceSession() && !*(_WORD *)(W32GetUserSessionState(v2, v1) + 68752) )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression", 0LL, &v4);
  LOBYTE(v0) = v4 != 0;
  return v0;
}
