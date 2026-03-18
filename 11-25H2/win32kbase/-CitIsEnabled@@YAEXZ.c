/*
 * XREFs of ?CitIsEnabled@@YAEXZ @ 0x14007D3EC
 * Callers:
 *     CitSetInfo @ 0x14007D270 (CitSetInfo.c)
 *     CitBackgroundMouseInput @ 0x14007D320 (CitBackgroundMouseInput.c)
 *     CitDisplayRequestChange @ 0x14007EB1C (CitDisplayRequestChange.c)
 *     CitDisplayPowerChange @ 0x14007F0D4 (CitDisplayPowerChange.c)
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012F12C (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 *     CitUserChange @ 0x140152D80 (CitUserChange.c)
 *     CitSessionConnectChange @ 0x140155A50 (CitSessionConnectChange.c)
 *     CitEnableKeyboardDelegation @ 0x140199788 (CitEnableKeyboardDelegation.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023FB58 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 *     CitModerncoreShutdown @ 0x1402409A0 (CitModerncoreShutdown.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitIsEnabled(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912) + 32LL) != 0LL;
}
