/*
 * XREFs of UserGetTerminalLuid @ 0x140106F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetTerminalLuid(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68696);
}
