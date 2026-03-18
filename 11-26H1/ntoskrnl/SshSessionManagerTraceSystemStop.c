/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x1407E4088
 * Callers:
 *     PopDiagTraceGracefulShutdown @ 0x140BFDB68 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceSystemStop(int a1, int a2, char a3, char a4)
{
  _QWORD v5[8]; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+70h] [rbp+10h] BYREF
  int v7; // [rsp+78h] [rbp+18h] BYREF
  char v8; // [rsp+80h] [rbp+20h] BYREF
  char v9; // [rsp+88h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6 = a1;
  v5[5] = 1LL;
  v5[1] = 4LL;
  v5[0] = &v6;
  v5[3] = 4LL;
  v5[2] = &v7;
  v5[7] = 1LL;
  v5[4] = &v8;
  v5[6] = &v9;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT, 4LL, v5);
}
