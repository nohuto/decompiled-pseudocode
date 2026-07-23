/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x1407E914C
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTraceCsEnterReasonV1 @ 0x1407E9900 (SshpSessionManagerTraceCsEnterReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsEnterReason(unsigned __int8 *a1)
{
  int v3; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v4[22]; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+F8h] [rbp+6Fh] BYREF
  int v6; // [rsp+100h] [rbp+77h] BYREF
  int v7; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    return SshpSessionManagerTraceCsEnterReasonV1(a1);
  v4[1] = 4LL;
  v4[0] = a1 + 32;
  v4[3] = 4LL;
  v4[2] = a1 + 40;
  v4[5] = 4LL;
  v4[4] = a1 + 48;
  v4[7] = 8LL;
  v4[6] = a1 + 8;
  v4[8] = 0xFFFFF780000002C4uLL;
  v4[10] = a1 + 57;
  v5 = a1[63];
  v4[12] = &v5;
  v6 = a1[64];
  v4[14] = &v6;
  v7 = a1[65];
  v4[16] = &v7;
  v3 = a1[66];
  v4[18] = &v3;
  v4[20] = a1 + 59;
  v4[9] = 4LL;
  v4[11] = 1LL;
  v4[13] = 4LL;
  v4[15] = 4LL;
  v4[17] = 4LL;
  v4[19] = 4LL;
  v4[21] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT_V3, 11LL, v4);
}
