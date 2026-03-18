/*
 * XREFs of WdipSemWriteTimeoutEvent @ 0x140AD8CC8
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x140AD8C30 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WdipSemWriteTimeoutEvent(ULONGLONG a1, __int16 a2, const GUID *a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int16 v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a1 || !a3 )
    return -1073741811;
  Flink = stru_140F03F40.Timer.TimerListEntry.Flink;
  UserData.Ptr = a1;
  *(_QWORD *)&UserData.Size = 16LL;
  v7 = &v9;
  v8 = 2LL;
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
    return EtwWrite((REGHANDLE)Flink, &WDI_SEM_EVENT_SCENARIO_TIMEOUT, a3, 2u, &UserData);
  else
    return -1073741816;
}
