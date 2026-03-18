/*
 * XREFs of PopDiagTraceConsoleDisplayState @ 0x140A3C354
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceConsoleDisplayState(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE,
        0LL,
        1u,
        &UserData);
    }
  }
}
