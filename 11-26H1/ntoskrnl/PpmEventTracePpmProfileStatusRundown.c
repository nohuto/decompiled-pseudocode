/*
 * XREFs of PpmEventTracePpmProfileStatusRundown @ 0x140B3B5BC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PpmEventTracePpmProfileStatusRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN) )
    {
      UserData.Ptr = (ULONGLONG)&PpmProfileStatus;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN,
        0LL,
        1u,
        &UserData);
    }
  }
}
