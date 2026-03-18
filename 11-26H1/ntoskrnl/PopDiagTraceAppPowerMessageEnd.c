/*
 * XREFs of PopDiagTraceAppPowerMessageEnd @ 0x140B09EE0
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAppPowerMessageEnd(int *a1)
{
  int v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], &POP_ETW_EVENT_SUSPENDAPP_END) )
    {
      v2 = *a1;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v2;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_SUSPENDAPP_END,
        0LL,
        1u,
        &UserData);
    }
  }
}
