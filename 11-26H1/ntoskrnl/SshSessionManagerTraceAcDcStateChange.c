/*
 * XREFs of SshSessionManagerTraceAcDcStateChange @ 0x140B77844
 * Callers:
 *     PopDiagTraceAcDcStateChange @ 0x1407D54C4 (PopDiagTraceAcDcStateChange.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTraceAcDcStateChangeV1 @ 0x1407E97B8 (SshpSessionManagerTraceAcDcStateChangeV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

void __fastcall SshSessionManagerTraceAcDcStateChange(int a1, int a2, int a3, char a4, char a5, char a6)
{
  struct _KLOCK_ENTRIES *v6; // r9
  _QWORD v7[10]; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+90h] [rbp+10h] BYREF
  int v9; // [rsp+98h] [rbp+18h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  char v11; // [rsp+A8h] [rbp+28h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    SshpSessionManagerTraceAcDcStateChangeV1(v8, v9, v10, v11, a5, a6);
  }
  else
  {
    v7[1] = 4LL;
    v7[0] = &v8;
    v7[3] = 4LL;
    v7[2] = &v9;
    v7[5] = 4LL;
    v7[4] = &v10;
    v7[7] = 1LL;
    v7[6] = &v11;
    v7[8] = &a5;
    v7[9] = 1LL;
    SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT_V2, 5u, (__int64)v7, v6);
  }
}
