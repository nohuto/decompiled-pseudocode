/*
 * XREFs of ProcLibTraceGetPlatformIdleStates @ 0x1400420D0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceGetPlatformIdleStates(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATES;
  if ( a1 )
    v1 = &PPM_ETW_GET_PLATFORM_IDLE_STATES_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1);
  if ( result )
  {
    UserData.Ptr = (unsigned __int64)&dword_140015C84;
    *(_QWORD *)&UserData.Size = 4LL;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v1, 0LL, (ULONG)1, &UserData);
  }
  return result;
}
