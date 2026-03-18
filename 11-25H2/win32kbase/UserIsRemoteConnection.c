/*
 * XREFs of UserIsRemoteConnection @ 0x14007F600
 * Callers:
 *     DrvSetMonitorBrightness @ 0x14007F6BC (DrvSetMonitorBrightness.c)
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 *     DrvChangeD3RequestsState @ 0x140141730 (DrvChangeD3RequestsState.c)
 *     DrvInitConsole @ 0x14017CE9C (DrvInitConsole.c)
 *     GrepIsRemoteConnection @ 0x1401C8010 (GrepIsRemoteConnection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsRemoteConnection(__int64 a1, __int64 a2)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752) != 0;
}
