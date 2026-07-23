/*
 * XREFs of SshpSessionManagerTraceAcDcStateChangeV1 @ 0x1407E97B8
 * Callers:
 *     SshSessionManagerTraceAcDcStateChange @ 0x140B77844 (SshSessionManagerTraceAcDcStateChange.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceAcDcStateChangeV1(int a1, int a2, int a3, char a4, char a5, char a6)
{
  _QWORD v7[12]; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+90h] [rbp+10h] BYREF
  int v9; // [rsp+98h] [rbp+18h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  char v11; // [rsp+A8h] [rbp+28h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  v7[1] = 4LL;
  v7[0] = &v8;
  v7[3] = 4LL;
  v7[2] = &v9;
  v7[5] = 4LL;
  v7[4] = &v10;
  v7[7] = 1LL;
  v7[6] = &v11;
  v7[8] = &a5;
  v7[10] = &a6;
  v7[9] = 1LL;
  v7[11] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT, 6LL, v7);
}
