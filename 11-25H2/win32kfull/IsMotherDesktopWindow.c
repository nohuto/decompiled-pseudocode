/*
 * XREFs of IsMotherDesktopWindow @ 0x14018FFC0
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018FD7C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( a1 == *(_QWORD *)(UserSessionState + 68472) || a1 == *(_QWORD *)(UserSessionState + 68544) )
    return 1;
  return v3;
}
