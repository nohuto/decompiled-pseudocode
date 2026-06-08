/*
 * XREFs of ProcLibTracePStateDomainRundown @ 0x140042974
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePStateDomainRundown(__int64 a1)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-38h]
  __int64 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PTSTATE_DOMAIN_FIRMWARE_RUNDOWN);
  if ( result )
  {
    UserData.Ptr = a1 + 36;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = a1 + 44;
    v5 = 4LL;
    v6 = a1 + 32;
    v7 = 4LL;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
             &PPM_ETW_PTSTATE_DOMAIN_FIRMWARE_RUNDOWN,
             0LL,
             (ULONG)3,
             &UserData);
  }
  return result;
}
