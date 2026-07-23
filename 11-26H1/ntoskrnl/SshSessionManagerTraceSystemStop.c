/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x1407E94B8
 * Callers:
 *     PopDiagTraceGracefulShutdown @ 0x140C03B68 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTraceSystemStopV1 @ 0x1407E9E68 (SshpSessionManagerTraceSystemStopV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceSystemStop(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // r8d
  int v6; // r9d
  _QWORD v8[8]; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF
  char v11; // [rsp+90h] [rbp+20h] BYREF
  char v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v6) = v12;
    LOBYTE(v5) = v11;
    return SshpSessionManagerTraceSystemStopV1(v9, v10, v5, v6, a5);
  }
  else
  {
    v8[5] = 1LL;
    v8[1] = 4LL;
    v8[0] = &v9;
    v8[3] = 4LL;
    v8[2] = &v10;
    v8[7] = 1LL;
    v8[4] = &v11;
    v8[6] = &v12;
    return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT_V3, 4LL, v8);
  }
}
