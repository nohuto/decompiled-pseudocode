/*
 * XREFs of ?CitIsEnabled@@YAEXZ @ 0x1400D598C
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 *     CitBackgroundMouseInput @ 0x1400D58C0 (CitBackgroundMouseInput.c)
 *     CitDisplayRequestChange @ 0x1400D7C64 (CitDisplayRequestChange.c)
 *     CitDisplayPowerChange @ 0x1400EA4D4 (CitDisplayPowerChange.c)
 *     CitUserChange @ 0x140190B20 (CitUserChange.c)
 *     CitSessionConnectChange @ 0x140192D40 (CitSessionConnectChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     CitEnableKeyboardDelegation @ 0x1401B3410 (CitEnableKeyboardDelegation.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x1401BB940 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 *     CitModerncoreShutdown @ 0x14024A4E0 (CitModerncoreShutdown.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitIsEnabled(int a1, int a2, int a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952) + 32LL) != 0LL;
}
