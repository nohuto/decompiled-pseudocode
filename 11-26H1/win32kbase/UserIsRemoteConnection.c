/*
 * XREFs of UserIsRemoteConnection @ 0x14000C100
 * Callers:
 *     DrvInitConsole @ 0x14000A7F4 (DrvInitConsole.c)
 *     DrvChangeD3RequestsState @ 0x14000C07C (DrvChangeD3RequestsState.c)
 *     DrvSetMonitorBrightness @ 0x14000C12C (DrvSetMonitorBrightness.c)
 *     UpdateMouseConnectionState @ 0x140163FC4 (UpdateMouseConnectionState.c)
 *     GrepIsRemoteConnection @ 0x1401F3C30 (GrepIsRemoteConnection.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsRemoteConnection()
{
  return *(_WORD *)(W32GetUserSessionState() + 68744) != 0;
}
