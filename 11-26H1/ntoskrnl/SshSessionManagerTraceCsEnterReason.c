/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x1407E3D40
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsEnterReason(unsigned __int8 *a1)
{
  _QWORD v2[22]; // [rsp+20h] [rbp-59h] BYREF
  int v3; // [rsp+E0h] [rbp+67h] BYREF
  int v4; // [rsp+E8h] [rbp+6Fh] BYREF
  int v5; // [rsp+F0h] [rbp+77h] BYREF
  int v6; // [rsp+F8h] [rbp+7Fh] BYREF

  v2[1] = 4LL;
  v2[0] = a1 + 32;
  v2[3] = 4LL;
  v2[2] = a1 + 40;
  v2[5] = 4LL;
  v2[4] = a1 + 48;
  v2[6] = a1 + 8;
  v2[8] = 0xFFFFF780000002C4uLL;
  v2[10] = a1 + 57;
  v3 = a1[61];
  v2[12] = &v3;
  v4 = a1[62];
  v2[14] = &v4;
  v5 = a1[63];
  v2[16] = &v5;
  v6 = a1[64];
  v2[18] = &v6;
  v2[20] = a1 + 59;
  v2[7] = 8LL;
  v2[9] = 4LL;
  v2[11] = 1LL;
  v2[13] = 4LL;
  v2[15] = 4LL;
  v2[17] = 4LL;
  v2[19] = 4LL;
  v2[21] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT, 11LL, v2);
}
