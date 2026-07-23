/*
 * XREFs of SshSessionManagerTraceBatteryCountChange @ 0x1407E908C
 * Callers:
 *     PopDiagTraceBatteryCountChange @ 0x1407D5EF0 (PopDiagTraceBatteryCountChange.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTraceBatteryCountChangeV1 @ 0x1407E985C (SshpSessionManagerTraceBatteryCountChangeV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceBatteryCountChange(int a1, int a2, int a3, char a4, char a5, char a6)
{
  int v6; // r9d
  _QWORD v8[10]; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+90h] [rbp+10h] BYREF
  int v10; // [rsp+98h] [rbp+18h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  char v12; // [rsp+A8h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v6) = v12;
    return SshpSessionManagerTraceBatteryCountChangeV1(v9, v10, v11, v6, a5, a6);
  }
  else
  {
    v8[1] = 4LL;
    v8[0] = &v9;
    v8[3] = 4LL;
    v8[2] = &v10;
    v8[5] = 4LL;
    v8[4] = &v11;
    v8[7] = 1LL;
    v8[6] = &v12;
    v8[8] = &a5;
    v8[9] = 1LL;
    return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BATTERY_COUNT_CHANGE_CONTROL_EVENT_V2, 5LL, v8);
  }
}
