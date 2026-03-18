/*
 * XREFs of W32GetCurrentWin32kFastMutex @ 0x14014A950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetCurrentWin32kFastMutex(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 42560);
}
