/*
 * XREFs of IsCurrentSessionServiceSession @ 0x1400D8C14
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1400D7B20 (SetTimerCoalescingTolerance.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x1402479E0 (--0CForegroundLaunch@@QEAA@XZ.c)
 *     xxxDesktopThread @ 0x140288970 (xxxDesktopThread.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x140291180 (EditionAllowProcessLaunchForegroundPolicy.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 IsCurrentSessionServiceSession()
{
  int CurrentWin32kSessionId; // ebx

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return CurrentWin32kSessionId == (unsigned int)RtlGetCurrentServiceSessionId();
}
