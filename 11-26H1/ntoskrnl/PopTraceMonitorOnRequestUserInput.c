/*
 * XREFs of PopTraceMonitorOnRequestUserInput @ 0x1407D8DFC
 * Callers:
 *     PopMonitorInvocation @ 0x14077EBD0 (PopMonitorInvocation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopTraceMonitorOnRequestUserInput()
{
  int v0; // r8d
  char v1; // [rsp+30h] [rbp-39h] BYREF
  int v2; // [rsp+34h] [rbp-35h] BYREF
  __int64 v3; // [rsp+38h] [rbp-31h] BYREF
  __int64 v4; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+7h]
  __int64 v7; // [rsp+78h] [rbp+Fh]
  char *v8; // [rsp+80h] [rbp+17h]
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  int *v10; // [rsp+90h] [rbp+27h]
  __int64 v11; // [rsp+98h] [rbp+2Fh]
  __int64 *v12; // [rsp+A0h] [rbp+37h]
  __int64 v13; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v3 = PopWdiCurrentScenarioInstanceId;
    v2 = v0;
    v6 = &v3;
    v7 = 8LL;
    v8 = &v1;
    v10 = &v2;
    v12 = &v4;
    v1 = 0;
    v9 = 1LL;
    v11 = 4LL;
    v4 = 0x1000000LL;
    v13 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004A370, 0LL, 0LL, 6u, &v5);
  }
}
