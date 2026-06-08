/*
 * XREFs of ProcLibTraceQueryWpsCapabilities @ 0x1400250F4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     PepNotifyQueryWpsCapabilities @ 0x14003AE50 (PepNotifyQueryWpsCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceQueryWpsCapabilities(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  int v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+34h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_QUERY_WPS_CAPABILITIES;
  if ( a1 )
    v1 = &PPM_ETW_QUERY_WPS_CAPABILITIES_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1);
  if ( result )
  {
    v3 = (unsigned __int8)byte_140015FC0;
    v4 = (unsigned __int8)byte_140015FC1;
    UserData.Ptr = (unsigned __int64)&v3;
    v6 = &v4;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = 4LL;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1, 0LL, (ULONG)2, &UserData);
  }
  return result;
}
