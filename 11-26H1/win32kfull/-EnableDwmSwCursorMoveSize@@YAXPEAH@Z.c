/*
 * XREFs of ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1402C4114
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 */

void __fastcall EnableDwmSwCursorMoveSize(int *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx

  v5 = 0;
  if ( !IsRemoteConnection((__int64)a1, a2) && !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 68608) )
  {
    v5 = 1;
    ChangeComposableCursor(1LL, v6);
  }
  *a1 = v5;
}
