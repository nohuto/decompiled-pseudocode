/*
 * XREFs of ProcLibTraceEnergyEsuRundown @ 0x140046A60
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

BOOLEAN ProcLibTraceEnergyEsuRundown()
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v2; // [rsp+40h] [rbp-28h]
  __int64 v3; // [rsp+48h] [rbp-20h]

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_ENERGY_ESU_RUNDOWN);
  if ( result )
  {
    UserData.Ptr = (unsigned __int64)&word_140019AA8;
    *(_QWORD *)&UserData.Size = 1LL;
    v2 = (char *)&word_140019AA8 + 1;
    v3 = 1LL;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_ENERGY_ESU_RUNDOWN, 0LL, (ULONG)2, &UserData);
  }
  return result;
}
