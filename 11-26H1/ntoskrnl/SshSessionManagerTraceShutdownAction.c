/*
 * XREFs of SshSessionManagerTraceShutdownAction @ 0x1407E9450
 * Callers:
 *     PopDiagTraceShutdownAction @ 0x14060BE2C (PopDiagTraceShutdownAction.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceShutdownAction(int a1, int a2, int a3)
{
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  int v7; // [rsp+70h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  v5 = a1;
  v4[1] = 4LL;
  v4[0] = &v5;
  v4[3] = 4LL;
  v4[2] = &v6;
  v4[5] = 4LL;
  v4[4] = &v7;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SHUTDOWN_ACTION_CONTROL_EVENT, 3LL, v4);
}
