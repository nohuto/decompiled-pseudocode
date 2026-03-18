/*
 * XREFs of ?CancelForegroundActivate@ForegroundLaunch@@YAXXZ @ 0x1401DF500
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ @ 0x1401DF528 (-CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ.c)
 */

void __fastcall ForegroundLaunch::CancelForegroundActivate(ForegroundLaunch *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  CForegroundLaunch::CancelForegroundActivate(*(CForegroundLaunch **)(UserSessionState + 18872));
}
